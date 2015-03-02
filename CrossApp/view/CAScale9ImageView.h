//
//  CAScale9ImageView.h
//  CrossApp
//
//  Created by Li Yuanfeng on 14-6-17.
//  Copyright (c) 2014 http://9miao.com All rights reserved.
//

#ifndef __CAScale9ImageView_H__
#define __CAScale9ImageView_H__

#include "CAImageView.h"

NS_CC_BEGIN

class CC_DLL CAScale9ImageView : public CAView
{
public:
    
    CAScale9ImageView();
    
    virtual ~CAScale9ImageView();

    static CAScale9ImageView* create();
    
    static CAScale9ImageView* createWithImage(CAImage* image);
    
    static CAScale9ImageView* createWithFrame(const CCRect& rect);
    
    static CAScale9ImageView* createWithCenter(const CCRect& rect);
    
    virtual bool init();
    
	virtual bool initWithImage(CAImage* image);
    
    virtual void setCapInsets(const CCRect& capInsets);
    
    virtual void setInsetLeft(float insetLeft);
    
    virtual void setInsetTop(float insetTop);
    
    virtual void setInsetRight(float insetRight);
    
    virtual void setInsetBottom(float insetBottom);
    
    virtual void setColor(const CAColor4B& color);
    
    virtual const CAColor4B& getColor();
    
    virtual void setAlpha(float alpha);
    
    virtual CAView* copy();
    
    virtual void setImage(CAImage* image);

    virtual void updateDisplayedAlpha(float parentOpacity);

    virtual void draw(void);
    
public:

    CC_SYNTHESIZE_READONLY(CCSize, m_obOriginalSize, OriginalSize);

    CC_SYNTHESIZE_READONLY(CCRect, m_obCapInsets, CapInsets);

    CC_SYNTHESIZE_READONLY(float, m_fInsetLeft, InsetLeft);

    CC_SYNTHESIZE_READONLY(float, m_fInsetTop, InsetTop);

    CC_SYNTHESIZE_READONLY(float, m_fInsetRight, InsetRight);

    CC_SYNTHESIZE_READONLY(float, m_fInsetBottom, InsetBottom);
    
protected:
    
    void updateCapInset();
    
    void updatePositions();

    void updateWithImage();
    
    virtual void setContentSize(const CCSize & size);

    virtual void updateDisplayedColor(const CrossApp::CAColor4B& parentColor);
    
    virtual bool initWithFrame(const CCRect& rect, const CAColor4B& color4B);
    
    virtual bool initWithCenter(const CCRect& rect, const CAColor4B& color4B);
    
    using CAView::initWithColor;
    
protected:

    CABatchView* m_pScale9ImageView;
    
    CAImageView* m_pImageView[9];
    
    CCRect m_rFrame[9];
    
};

// end of GUI group
/// @}
/// @}

NS_CC_END

#endif // __CAScale9ImageView_H__
