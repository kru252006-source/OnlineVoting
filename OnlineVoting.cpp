#include <bits/stdc++.h>
using namespace std;

class OnlineVotingSystem {
private:
    vector<string> candidates;
    unordered_map<string, int> votes;
    unordered_map<int, bool> hasVoted;

public:
    void addCandidate() {
        string name;
        cout << "Enter candidate name: ";
        cin.ignore();
        getline(cin, name);

        candidates.push_back(name);
        votes[name] = 0;

        cout << "Candidate added successfully!\n";
    }

    void displayCandidates() {
        if (candidates.empty()) {
            cout << "No candidates available.\n";
            return;
        }

        cout << "\nList of Candidates:\n";
        for (int i = 0; i < candidates.size(); i++) {
            cout << i + 1 << ". " << candidates[i] << endl;
        }
    }

    void castVote() {
        if (candidates.empty()) {
            cout << "No candidates available for voting.\n";
            return;
        }

        int voterID;
        cout << "Enter your Voter ID: ";
        cin >> voterID;

        if (hasVoted[voterID]) {
            cout << "You have already voted. Duplicate voting not allowed.\n";
            return;
        }

        displayCandidates();

        int choice;
        cout << "Enter candidate number to vote: ";
        cin >> choice;

        if (choice < 1 || choice > candidates.size()) {
            cout << "Invalid choice.\n";
            return;
        }

        votes[candidates[choice - 1]]++;
        hasVoted[voterID] = true;

        cout << "Vote cast successfully!\n";
    }

    void viewResults() {
        if (votes.empty()) {
            cout << "No votes recorded yet.\n";
            return;
        }

        cout << "\nElection Results:\n";
        for (auto &entry : votes) {
            cout << entry.first << " : " << entry.second << " votes\n";
        }
    }
};

int main() {
    OnlineVotingSystem ovs;
    int choice;

    do {
        cout << "\n----- ONLINE VOTING SYSTEM -----\n";
        cout << "1. Add Candidate (Admin)\n";
        cout << "2. Display Candidates\n";
        cout << "3. Cast Vote\n";
        cout << "4. View Results\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: ovs.addCandidate(); break;
            case 2: ovs.displayCandidates(); break;
            case 3: ovs.castVote(); break;
            case 4: ovs.viewResults(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}