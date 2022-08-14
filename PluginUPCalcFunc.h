#ifndef __PLUGIN_TCALC_FUNC
#define __PLUGIN_TCALC_FUNC
#pragma pack(push,1) 

//����(���ݸ���,���,����a,����b,����c)
typedef void(*pPluginUPCalcFUNC)(int,double*,double*,double*,double*);

typedef struct tagPluginUPCalcFuncInfo
{
	unsigned short		nFuncMark;//�������
	pPluginUPCalcFUNC			pCallFunc;//������ַ
}PluginUPCalcFuncInfo;

typedef BOOL(*pRegisterPluginUPCalcFUNC)(PluginUPCalcFuncInfo**);  

#pragma pack(pop)
#endif
