#ifndef __SNEAKY_BUTTON_SKINNED_H__
#define __SNEAKY_BUTTON_SKINNED_H__

#include "SneakyButton.h"

class SneakyButtonSkinnedBase : public cocos2d::CCSprite 
{
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, defaultSprite, _defaultSprite);
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, activatedSprite, _activatedSprite);
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, disabledSprite, _disabledSprite);
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite *, pressSprite, _pressSprite);

	CC_SYNTHESIZE_READONLY(SneakyButton *, button, _button); //Not sure about this

	//Public methods
	virtual ~SneakyButtonSkinnedBase();
	LAYER_NODE_FUNC(SneakyButtonSkinnedBase);
	bool init();
	void watchSelf(cocos2d::ccTime delta);
	void setContentSize(cocos2d::CCSize s);
	void setDefaultSprite(cocos2d::CCSprite *aSprite);
	void setActivatedSprite(cocos2d::CCSprite *aSprite);
	void setDisabledSprite(cocos2d::CCSprite *aSprite);
	void setPressSprite(cocos2d::CCSprite *aSprite);
	void setButton(SneakyButton *aButton);
};

#endif
