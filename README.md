# OnlineVoting in C++
# Project Overview
This project implements an Online Voting System using C++ and core Data Structures and Algorithms concepts. The system allows users to vote for candidates, ensures that each voter can vote only once, and displays election results accurately.
# Features
• Simple and user-friendly console interface

• One vote per voter using unique Voter ID

• Secure vote counting

• Menu-driven program design

• Clean object-oriented structure

• Easy to extend for real-world use cases
# Data Structures Used
| Data Structure               | Purpose                   |
| ---------------------------- | ------------------------- |
| `vector<string>`             | Stores candidate names    |
| `unordered_map<string, int>` | Stores vote counts        |
| `unordered_map<int, bool>`   | Prevents duplicate voting |
# How Online Voting System Works

• Admin adds candidates to the system

• Voters vote using a unique Voter ID

• System checks for duplicate voting

• Votes are stored and counted automatically

• Results are displayed at the end
# Class Design
**ONLINE VOTING SYSTEM**

**_Data Members_**

• `candidates` – Stores candidate names

• `votes` – Stores vote count for each candidate

• `hasVoted` – Tracks whether a voter has already voted

**_Member Functions_**

• `addCandidate()` – Adds a new candidate

• `displayCandidates()` – Displays all candidates

• `castVote()` – Allows a voter to vote

• `viewResults()` – Displays voting results
# Time and Space Complexity
| Operation          | Time Complexity | Space Complexity |
| ------------------ | --------------- | ---------------- |
| Add Candidate      | O(1)            | O(1)             |
| Cast Vote          | O(1)            | O(1)             |
| Display Candidates | O(n)            | O(1)             |
| View Results       | O(n)            | O(1)             |
