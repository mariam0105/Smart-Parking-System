async function parkVehicle() {
    const data = {
        name: document.getElementById('name').value,
        cnic: document.getElementById('cnic').value,
        plate: document.getElementById('plate').value,
        zone: parseInt(document.getElementById('zone').value),
        isVip: document.getElementById('vip').checked
    };

    const response = await fetch('/park', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify(data)
    });

    if (response.ok) {
        alert("Vehicle Parked Successfully!");
        updateStatus(); // Refresh the revenue/occupancy display
    }
}