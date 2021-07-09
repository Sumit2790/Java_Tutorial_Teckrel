//Write a program in C++ to calculate the volume of a sphere.   


class VolumeofSphere{

    void Sphere() {
        int r=6;
	double vol;
	
	vol= (4*3.14*r*r*r)/3;
	
	System.out.println("Volume of Sphere is: "+vol);
	
}


	public static void main(String[]args)
{
	
        VolumeofSphere vs= new VolumeofSphere();
        vs.Sphere();
	
}
}