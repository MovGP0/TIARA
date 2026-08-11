/* Ghidra address: 014f5550 */
/* Ghidra symbol: FUN_014f5550 */


void FUN_014f5550(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = param_1[0x61];
  iVar1 = *(int *)((longlong)param_1 + 0x31c);
  FUN_016f5570(param_1);
  iVar2 = (int)param_1[0x61];
  iVar3 = *(int *)((longlong)param_1 + 0x31c);
  if (iVar2 != (int)lVar4) {
    FUN_017c58c0(param_1[0x1b],iVar2);
    (**(code **)(*param_1 + 0x18))(param_1,iVar2);
    FUN_0040d200(param_1[0x277],(longlong)(*(int *)((longlong)param_1 + 0x691) * 8),0);
  }
  if (iVar3 != iVar1) {
    FUN_017c53f0(param_1 + 0x37,param_1 + 0x3f,param_1 + 0x30,param_1 + 0x31,param_1 + 0x32,
                 param_1 + 0x33,iVar3);
  }
  FUN_016f66e0(param_1);
  return;
}

