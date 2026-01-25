# 🅿️ SmartPark AI - C++ Management System

SmartPark AI is a high-performance, full-stack parking management system. It utilizes a robust C++ backend to handle core logic and a modern web dashboard for real-time monitoring and vehicle authorization.

## 🚀 Key Features
- **Real-Time Dashboard**: Monitor total revenue and current occupancy instantly.
- **Smart Allocation Engine**: Automatically assigns unique slots across 5 distinct zones (Zone A-E).
- **Transaction History**: Maintains a full log of every vehicle entry, including Plate, Name, and CNIC.
- **Data Integrity**: Integrated duplicate plate prevention logic within the registry.
- **Rollback Manager**: Features an "Undo" system to revert the last transaction and update revenue automatically.

## 🛠️ Technical Architecture
- **Backend**: C++17 with the **Crow Framework** for high-concurrency web routing.
- **Frontend**: HTML5, CSS3 (Modern Dark Mode), and JavaScript (Fetch API).
- **Logic**: Custom-built `ParkingSystem` and `AllocationEngine` classes for modularity.

## 📦 Project Structure
- `/templates`: Contains `index.html` (the web interface).
- `main.cpp`: The Crow server and API routes.
- `parkingsystem.cpp/h`: Core system management and revenue tracking.
- `allocationengine.cpp/h`: Logic for managing parking slots and zone availability.
- `crow_all.h`: The header-only Crow library.

## 🔨 Installation & Execution
1. Ensure you have a C++ compiler (g++) and the WinSock libraries (for Windows).
2. Open your terminal and run the compilation command:
   ```bash
   g++ -I. main.cpp parkingsystem.cpp allocationengine.cpp -o parking_web -lpthread -lws2_32 -lmswsock
3. Run the executable:
    ./parking_web.exe
4. Access the dashboard at:
 http://localhost:8080.