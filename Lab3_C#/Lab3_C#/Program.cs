using Triangle_class;

Triangle T1 = new Triangle();
Triangle T2 = new Triangle(2,4.5,6);
Triangle T3 = new Triangle(T2);
    
Console.WriteLine("Triangle 1: " + T1.X + ", " + T1.Y + ", " + T1.Z);
Console.WriteLine("Triangle 2: " + T2.X + ", " + T2.Y + ", " + T2.Z);
Console.WriteLine("Triangle 3: " + T3.X + ", " + T3.Y + ", " + T3.Z);

T2 *= 2;
Console.WriteLine("Triangle 2 after multiply by 2: " + T2.X + ", " + T2.Y + ", " + T2.Z);

T1 = T2 + T3;
Console.WriteLine("Triangle 1 after summing Triangles 2 and 3: " + T1.X + ", " + T1.Y + ", " + T1.Z);

