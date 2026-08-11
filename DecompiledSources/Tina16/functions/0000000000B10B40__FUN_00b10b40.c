/* Ghidra address: 00b10b40 */
/* Ghidra symbol: FUN_00b10b40 */


void FUN_00b10b40(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00b11070(param_1);
  iVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2,param_2);
  *param_3 = iVar1;
  if (*param_3 != -1) {
    *param_3 = *param_3 + *(int *)(param_1 + 0x4c0);
  }
  return;
}

