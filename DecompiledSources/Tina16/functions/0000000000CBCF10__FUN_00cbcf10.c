/* Ghidra address: 00cbcf10 */
/* Ghidra symbol: FUN_00cbcf10 */


void FUN_00cbcf10(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = (longlong *)param_1[0x20];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x120))(plVar1);
    (**(code **)(*param_1 + 200))(param_1,0);
  }
  lVar2 = param_1[0x21];
  param_1[0x21] = 0;
  FUN_00410f20(lVar2);
  lVar2 = param_1[0x1e];
  param_1[0x1e] = 0;
  FUN_00410f20(lVar2);
  FUN_00c8d2a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

