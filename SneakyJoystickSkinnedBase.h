#ifndef __JOYSTICK_SKINNED_H__
#define __JOYSTICK_SKINNED_H__

#include "cocos2d.h"
#include "SneakyJoystick.h"

class SneakyJoystickSkinnedBase : public cocos2d::CCSprite
{
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, backgroundSprite, BackgroundSprite);
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, thumbSprite, ThumbSprite);
	CC_SYNTHESIZE_READONLY(SneakyJoystick *, joystick, Joystick);	

	//Public methods
	virtual ~SneakyJoystickSkinnedBase();
	LAYER_NODE_FUNC(SneakyJoystickSkinnedBase);
	bool init();
	void updatePositions(cocos2d::ccTime delta);
	void setContentSize(cocos2d::CCSize s);
	void setBackgroundSprite(cocos2d::CCSprite *aSprite);
	void setThumbSprite(CCSprite *aSprite);
	void setJoystick(SneakyJoystick *aJoystick);
};
#endif