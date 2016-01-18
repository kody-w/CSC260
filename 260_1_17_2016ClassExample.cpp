#include <iostream>
#include <string.h>

using namespace std;

class Circle {
	
	private:
		double area;
		double circumference;
		double radius = 0;

	public:
	
		double get_area(){
				
			return area;
			
		}
		
		double get_circumference(){
					
			return circumference;
			
		}
		
		void set_radius(double r);
	
	
};

void Circle::set_radius(double r)
{
			
				radius = r;
				area = 3.14159 * radius * radius;
				circumference = 2 * 3.14159 * radius;
				
}


int main()
{
	
	Circle cir1;
	
	double m_area, m_radius;
	
	cir1.set_radius(2);
	//m_radius = cir1.radius;
	
	
	m_area = cir1.get_area();
	printf("The area is %f\n", m_area);
	

	return 0;
} 