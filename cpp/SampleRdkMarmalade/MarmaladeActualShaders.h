
#pragma once

#include "MarmaladeShader.h"

#define MARM_SHADER_COLOR        L"color"
#define MARM_SHADER_TRANSPARENCY L"transparency"
#define MARM_SHADER_IOR          L"ior"
#define MARM_SHADER_SILKINESS    L"silkiness"
#define MARM_SHADER_ROUGHNESS    L"roughness"
#define MARM_SHADER_GRAININESS   L"graininess"
#define MARM_SHADER_BUBBLINESS   L"bubbliness"
#define MARM_SHADER_COLOR_CSN    MARM_SHADER_COLOR

#define MARM_SHADER_TEXTURE_ON      MARM_SHADER_COLOR L"-" FS_MAT_POSTFIX_ON
#define MARM_SHADER_TEXTURE_AMOUNT  MARM_SHADER_COLOR L"-" FS_MAT_POSTFIX_AMOUNT

#define MARM_TEXTURE_COLOR_1     L"color-1"
#define MARM_TEXTURE_COLOR_2     L"color-2"

class CMarmaladeOrangeShader : public CMarmaladeShader
{
public:
	CMarmaladeOrangeShader(void);

	virtual UUID Uuid(void) const;
	virtual ON_wString Name(void)         const { return L"orange"; }
	virtual ON_wString FriendlyName(void) const { return L"Marmalade Orange"; }
	virtual ON_wString Description(void)  const { return L"Marmalade orange shader"; }
	virtual CMarmaladeShader* Clone(void) const { return new CMarmaladeOrangeShader; }
};

class CMarmaladeSatinShader : public CMarmaladeShader
{
public:
	CMarmaladeSatinShader();

	virtual UUID Uuid(void) const;
	virtual ON_wString Name(void)         const { return L"satin"; }
	virtual ON_wString FriendlyName(void) const { return L"Marmalade Satin"; }
	virtual ON_wString Description(void)  const { return L"Marmalade satin shader"; }
	virtual CMarmaladeShader* Clone(void) const { return new CMarmaladeSatinShader; }
};

class CMarmaladeLemonCurdShader : public CMarmaladeShader
{
public:
	CMarmaladeLemonCurdShader();

	virtual UUID Uuid(void) const;
	virtual ON_wString Name(void)         const { return L"lemon_curd"; }
	virtual ON_wString FriendlyName(void) const { return L"Marmalade Lemon Curd"; }
	virtual ON_wString Description(void)  const { return L"Marmalade lemon curd shader"; }
	virtual CMarmaladeShader* Clone(void) const { return new CMarmaladeLemonCurdShader; }
};
