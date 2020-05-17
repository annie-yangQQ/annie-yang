#ifndef BOX.H
#define BOX.H
  class Box{

  public:
    Box(int a,int b,int c);
    bool operator <(const Box& aBox) const;
    bool operator =(const Box& aBox) const;
    bool operator >(const Box& aBox) const;
    int volume()const;


  private:
    int length;
    int breadth;
    int height;


};


#endif // BOX
