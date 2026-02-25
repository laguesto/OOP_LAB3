using System;
using System.CodeDom;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Triangle_class
{
    public class Triangle
    {
        private double x, y, z;

        public Triangle()
        {
            x = 0; y = 0; z = 0;
        }

        public Triangle(double x, double y, double z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        public Triangle(Triangle other_triangle)
        {
            x = other_triangle.x;
            y = other_triangle.y; 
            z = other_triangle.z;
        }


        public double X { get { return x; } set { x = value; } }
        public double Y { get { return y; } set { y = value; } }
        public double Z { get { return z; } set { z = value; } }

       public double Perimeter()
        {
            return x + y + z;
        }

        public double Square()
        {
            double p = Perimeter()/2;

            return Math.Sqrt(p * (p - x) * (p - y) * (p - z));
        }

        public static Triangle operator *(Triangle t, double k)
        {
            return new Triangle(t.x * k, t.y * k, t.z * k);
        }

        public static Triangle operator +(Triangle T1, Triangle T2)
        {
            return new Triangle (T1.x + T2.x, T1.y + T2 .y , T1.z + T2.z);
        }
    }
}
