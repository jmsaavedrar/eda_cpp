/*
 Class Region
*/

namespace image {
	class Region{
	private:
		int id;
		int size;
		ListOfPoint2D points;		
	public:
		Region();
		void showRegion();
        virtual ~Region(); 		
	};
}
