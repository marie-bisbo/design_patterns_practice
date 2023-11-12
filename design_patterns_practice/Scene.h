#pragma once

#include "FrameBuffer.h"

class Scene
{
public:
	Scene()
		: current_(&buffers_[0]), next_(&buffers_[1]) {}

	void Draw()
	{
		next_->clear();

		next_->draw(1, 1);
		next_->draw(4, 1);
		next_->draw(1, 3);
		next_->draw(2, 4);
		next_->draw(3, 4);
		next_->draw(4, 3);

		Swap();
	}

	FrameBuffer& getBuffer() { return *current_; }

private:
	void Swap()
	{
		FrameBuffer* temp = current_;
		current_ = next_;
		next_ = temp;
	}

	FrameBuffer buffers_[2];
	FrameBuffer* current_;
	FrameBuffer* next_;
};

