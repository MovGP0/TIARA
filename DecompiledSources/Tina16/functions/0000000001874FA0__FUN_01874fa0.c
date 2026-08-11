/* Ghidra address: 01874fa0 */
/* Ghidra symbol: FUN_01874fa0 */


void FUN_01874fa0(undefined8 param_1,int *param_2,uint param_3,uint param_4,uint param_5,int param_6
                 ,undefined4 param_7,int param_8)

{
  int iVar1;
  
  *param_2 = *param_2 + (param_4 ^ (param_3 | ~param_5)) + param_6 + param_8;
  iVar1 = FUN_01874eb0(param_1,*param_2,param_7);
  *param_2 = iVar1;
  *param_2 = *param_2 + param_3;
  return;
}

