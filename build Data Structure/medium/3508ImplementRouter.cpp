// struct Packet {
//     int source, destination, timestamp;
//     bool operator==(const Packet& o) const {
//         return source == o.source && destination == o.destination && timestamp == o.timestamp;
//     }
//     // Need a hash for unordered_set if using that
// };

// class Router {
//     int memoryLimit;
//     deque<Packet> q; // FIFO queue
//     unordered_set<string> uniquePackets; // or unordered_set<Packet> with hash
//     unordered_map<int, vector<int>> destTimestamps;
//     unordered_map<int, int> processedCount; // per destination

// public:
//     Router(int mem) : memoryLimit(mem) { }

//     bool addPacket(int s, int d, int t) {
//         string key = makeKey(s,d,t);
//         if (uniquePackets.count(key)) return false;
//         if ((int)q.size() == memoryLimit) {
//             forwardPacket();
//         }
//         Packet p{ s, d, t };
//         q.push_back(p);
//         uniquePackets.insert(key);
//         destTimestamps[d].push_back(t);
//         return true;
//     }

//     vector<int> forwardPacket() {
//         if (q.empty()) return {};
//         Packet p = q.front();
//         q.pop_front();
//         string key = makeKey(p.source, p.destination, p.timestamp);
//         uniquePackets.erase(key);
//         processedCount[p.destination] += 1;
//         return { p.source, p.destination, p.timestamp };
//     }

//     int getCount(int d, int startTime, int endTime) {
//         if (!destTimestamps.count(d)) return 0;
//         const auto &vec = destTimestamps[d];
//         int startIdx = processedCount[d];
//         // binary search in vec from index startIdx to end
//         auto lb = lower_bound(vec.begin() + startIdx, vec.end(), startTime);
//         auto ub = upper_bound(vec.begin() + startIdx, vec.end(), endTime);
//         return ub - lb;
//     }

// private:
//     string makeKey(int s, int d, int t){
//         return to_string(s) + '_' + to_string(d) + '_' + to_string(t);
//     }
// };
