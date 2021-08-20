class Box {
    private:
       int length;
       int width;
       int height;

    public:
       void setLength(int bLength);
       void setWidth(int bWidth);
       void setHeight(int bHeight);

       int getLength();
       int getWidth();
       int getHeight();
 
       int calcVolume();
};
