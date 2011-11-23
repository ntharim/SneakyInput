#ifndef __SNEAKY_BUTTON_H__
#define __SNEAKY_BUTTON_H__

#include "cocos2d.h"

class SneakyButton : public cocos2d::CCSprite, public cocos2d::CCTargetedTouchDelegate
{
protected:
	cocos2d::CCPoint center;
	float radiusSq;

	cocos2d::CCRect bounds;

	CC_SYNTHESIZE(bool, status, _status);
	CC_SYNTHESIZE_READONLY(bool, active, _active);
	CC_SYNTHESIZE_READONLY(bool, value, _value);
	CC_SYNTHESIZE(bool, isHoldable, _isHoldable);
	CC_SYNTHESIZE(bool, isToggleable, _isToggleable);
	CC_SYNTHESIZE(float, rateLimit, _rateLimit);

	CC_SYNTHESIZE(float, radius, _radius);

	//Public methods
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	bool initWithRect(cocos2d::CCRect rect);
	void limiter(float delta);
	void setRadius(float r);
	virtual bool ccTouchBegan(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchMoved(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchEnded(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchCancelled(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
};

#endif