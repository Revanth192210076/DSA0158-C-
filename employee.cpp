class Employee:
    def __init__(self, emp_name, emp_id, address, mail_id, mobile_no):
        self.emp_name = emp_name
        self.emp_id = emp_id
        self.address = address
        self.mail_id = mail_id
        self.mobile_no = mobile_no

    def display_details(self):
        print("Employee Details:")
        print(f"Employee Name: {self.emp_name}")
        print(f"Employee ID: {self.emp_id}")
        print(f"Address: {self.address}")
        print(f"Mail ID: {self.mail_id}")
        print(f"Mobile Number: {self.mobile_no}")


class Programmer(Employee):
    def __init__(self, emp_name, emp_id, address, mail_id, mobile_no, basic_pay):
        super().__init__(emp_name, emp_id, address, mail_id, mobile_no)
        self.basic_pay = basic_pay

    def calculate_salary(self):
        da = 0.97 * self.basic_pay
        hra = 0.10 * self.basic_pay
        pf = 0.12 * self.basic_pay
        staff_club_fund = 0.001 * self.basic_pay
        
        gross_salary = self.basic_pay + da + hra
        net_salary = gross_salary - pf - staff_club_fund
        
        return gross_salary, net_salary

    def generate_payslip(self):
        gross_salary, net_salary = self.calculate_salary()
        print("\nPay Slip:")
        self.display_details()
        print(f"Basic Pay: {self.basic_pay}")
        print(f"DA (97% of BP): {0.97 * self.basic_pay}")
        print(f"HRA (10% of BP): {0.10 * self.basic_pay}")
        print(f"PF (12% of BP): {0.12 * self.basic_pay}")
        print(f"Staff Club Fund (0.1% of BP): {0.001 * self.basic_pay}")
        print(f"Gross Salary: {gross_salary}")
        print(f"Net Salary: {net_salary}")


class AssistantProfessor(Employee):
    def __init__(self, emp_name, emp_id, address, mail_id, mobile_no, basic_pay):
        super().__init__(emp_name, emp_id, address, mail_id, mobile_no)
        self.basic_pay = basic_pay

    def calculate_salary(self):
        da = 0.97 * self.basic_pay
        hra = 0.10 * self.basic_pay
        pf = 0.12 * self.basic_pay
        staff_club_fund = 0.001 * self.basic_pay
        
        gross_salary = self.basic_pay + da + hra
        net_salary = gross_salary - pf - staff_club_fund
        
        return gross_salary, net_salary

    def generate_payslip(self):
        gross_salary, net_salary = self.calculate_salary()
        print("\nPay Slip:")
        self.display_details()
        print(f"Basic Pay: {self.basic_pay}")
        print(f"DA (97% of BP): {0.97 * self.basic_pay}")
        print(f"HRA (10% of BP): {0.10 * self.basic_pay}")
        print(f"PF (12% of BP): {0.12 * self.basic_pay}")
        print(f"Staff Club Fund (0.1% of BP): {0.001 * self.basic_pay}")
        print(f"Gross Salary: {gross_salary}")
        print(f"Net Salary: {net_salary}")


class AssociateProfessor(Employee):
    def __init__(self, emp_name, emp_id, address, mail_id, mobile_no, basic_pay):
        super().__init__(emp_name, emp_id, address, mail_id, mobile_no)
        self.basic_pay = basic_pay

    def calculate_salary(self):
        da = 0.97 * self.basic_pay
        hra = 0.10 * self.basic_pay
        pf = 0.12 * self.basic_pay
        staff_club_fund = 0.001 * self.basic_pay
        
        gross_salary = self.basic_pay + da + hra
        net_salary = gross_salary - pf - staff_club_fund
        
        return gross_salary, net_salary

    def generate_payslip(self):
        gross_salary, net_salary = self.calculate_salary()
        print("\nPay Slip:")
        self.display_details()
        print(f"Basic Pay: {self.basic_pay}")
        print(f"DA (97% of BP): {0.97 * self.basic_pay}")
        print(f"HRA (10% of BP): {0.10 * self.basic_pay}")
        print(f"PF (12% of BP): {0.12 * self.basic_pay}")
        print(f"Staff Club Fund (0.1% of BP): {0.001 * self.basic_pay}")
        print(f"Gross Salary: {gross_salary}")
        print(f"Net Salary: {net_salary}")


class Professor(Employee):
    def __init__(self, emp_name, emp_id, address, mail_id, mobile_no, basic_pay):
        super().__init__(emp_name, emp_id, address, mail_id, mobile_no)
        self.basic_pay = basic_pay

    def calculate_salary(self):
        da = 0.97 * self.basic_pay
        hra = 0.10 * self.basic_pay
        pf = 0.12 * self.basic_pay
        staff_club_fund = 0.001 * self.basic_pay
        
        gross_salary = self.basic_pay + da + hra
        net_salary = gross_salary - pf - staff_club_fund
        
        return gross_salary, net_salary

    def generate_payslip(self):
        gross_salary, net_salary = self.calculate_salary()
        print("\nPay Slip:")
        self.display_details()
        print(f"Basic Pay: {self.basic_pay}")
        print(f"DA (97% of BP): {0.97 * self.basic_pay}")
        print(f"HRA (10% of BP): {0.10 * self.basic_pay}")
        print(f"PF (12% of BP): {0.12 * self.basic_pay}")
        print(f"Staff Club Fund (0.1% of BP): {0.001 * self.basic_pay}")
        print(f"Gross Salary: {gross_salary}")
        print(f"Net Salary: {net_salary}")





programmer = Programmer("John Doe", "E101", "123 Main St, City", "john.doe@email.com", "9876543210", 50000)


programmer.generate_payslip()


assistant_prof = AssistantProfessor("Jane Smith", "E102", "456 Elm St, Town", "jane.smith@email.com", "9876543211", 60000)


assistant_prof.generate_payslip()


associate_prof = AssociateProfessor("Michael Johnson", "E103", "789 Oak St, Village", "michael.johnson@email.com", "9876543212", 70000)


associate_prof.generate_payslip()


professor = Professor("Emily Brown", "E104", "910 Pine St, Countryside", "emily.brown@email.com", "9876543213", 80000)


professor.generate_payslip()

