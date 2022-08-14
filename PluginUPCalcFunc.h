#ifndef __PLUGIN_TCALC_FUNC
#define __PLUGIN_TCALC_FUNC
#pragma pack(push,1) 

//函数(数据个数,输出,输入a,输入b,输入c)
typedef void(*pPluginUPCalcFUNC)(int,double*,double*,double*,double*);

typedef struct tagPluginUPCalcFuncInfo
{
	unsigned short		nFuncMark;//函数编号
	pPluginUPCalcFUNC			pCallFunc;//函数地址
}PluginUPCalcFuncInfo;

typedef BOOL(*pRegisterPluginUPCalcFUNC)(PluginUPCalcFuncInfo**);  

#pragma pack(pop)
#endif
