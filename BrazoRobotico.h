
class BrazoRobotico{
	private:
		double x, y, z;
		bool grip;

	public:
		BrazoRobotico(double xx, double yy, double z);
		double GetX() const;
		double GetY() const;
		double GetZ() const;
		bool GetGrip() const;
		void coger();
		void soltar();
		void mover(double newX, double newY, double newZ);
};
