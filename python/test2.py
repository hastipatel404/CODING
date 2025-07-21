# define a dictionary with name of 5 employees as key and their age,salary and years of experience as value without using built-in function add one more employee in the dictionary
# show the result from employee whose salary is high and years of experience is more than other employees
employees = {
    "Hasti": {"age": 20, "salary": 70000, "experience": 4},
    "Diya": {"age": 19, "salary": 50000, "experience": 1},
    "Krisha": {"age": 20, "salary": 80000, "experience": 3},
    "Priti": {"age": 19, "salary": 60000, "experience": 1},
    "Bhargi": {"age": 18, "salary": 90000, "experience": 2}
}
# Adding a new employee
employees["Dhruvi"] = {"age": 32, "salary": 75000, "experience": 6}
# Finding the employee with the highest salary and experience
highest_paid_employee = None
for employee, details in employees.items():
    if highest_paid_employee is None:
        highest_paid_employee = employee
    elif details["salary"] > employees[highest_paid_employee]["salary"]:
        highest_paid_employee = employee
    elif details["salary"] == employees[highest_paid_employee]["salary"]:
        if details["experience"] > employees[highest_paid_employee]["experience"]:
            highest_paid_employee = employee
print("Employee with the highest salary and experience:")
print(f"Name: {highest_paid_employee}")