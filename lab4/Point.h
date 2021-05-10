#ifndef POINT_H
#define POINT_H


class Point {
   private:
      int num_coords;
      int *coords;

   public:
      Point();
      Point(int, int);
      Point(int, int, int);

      Point(const Point&);
      ~Point();
      const Point& operator=(const Point&);

      void print();
      void add_coordinate(int p);
};

#endif
