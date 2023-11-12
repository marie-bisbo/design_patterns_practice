#pragma once

class FrameBuffer
{
public:
	FrameBuffer() { clear(); }

	void clear()
	{
		for (int i = 0; i < WIDTH * HEIGHT; i++)
		{
			pixels_[i] = 0;
		}
	}

	void draw(int x, int y)
	{
		pixels_[(WIDTH * y) + x] = 1;
	}

	const char* getPixels()
	{
		return pixels_;
	}

private:
	static const int WIDTH = 160;
	static const int HEIGHT = 120;

	char pixels_[WIDTH * HEIGHT];
};

