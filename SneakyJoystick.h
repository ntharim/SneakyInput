#ifndef __SNEAKY_JOYSTICK_H__
#define __SNEAKY_JOYSTICK_H__

#include "cocos2d.h"

class SneakyJoystick : public cocos2d::CCSprite, public cocos2d::CCTargetedTouchDelegate 
{
protected:
	float joystickRadiusSq;
	float thumbRadiusSq;
	float deadRadiusSq;

	CC_SYNTHESIZE_READONLY(cocos2d::CCPoint, stickPosition, _stickPosition);
	CC_SYNTHESIZE_READONLY(float, degrees, _degrees);
	CC_SYNTHESIZE_READONLY(cocos2d::CCPoint, velocity, _velocity);
	CC_SYNTHESIZE(bool, autoCenter, _autoCenter);
	CC_SYNTHESIZE(bool, isDPad, _isDPad);
	CC_SYNTHESIZE(bool, hasDeadzone, _hasDeadzone);
	CC_SYNTHESIZE(int, numberOfDirections, _numberOfDirections);

	CC_SYNTHESIZE(float, joystickRadius, _joystickRadius);
	CC_SYNTHESIZE(float, thumbRadius, _thumbRadius);
	CC_SYNTHESIZE(float, deadRadius, _deadRadius);

	virtual ~SneakyJoystick();

	bool initWithRect(cocos2d::CCRect rect);
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	void setIsDPad(bool b);
	void setJoystickRadius(float r);
	void setThumbRadius(float r);
	void setDeadRadius(float r);
	virtual bool ccTouchBegan(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchMoved(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchEnded(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);
	virtual void ccTouchCancelled(cocos2d::CCTouch *touch, cocos2d::CCEvent *event);

private:
	void updateVelocity(cocos2d::CCPoint point);
	void setTouchRadius();

};
#endif
