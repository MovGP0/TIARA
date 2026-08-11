/* Ghidra address: 018a72e0 */
/* Ghidra symbol: FUN_018a72e0 */


void FUN_018a72e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_38 [4];
  int local_34;
  
  plVar3 = (longlong *)FUN_018a73a0(param_1);
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2 + -1);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0040c770(((double)param_3 +
                           *(double *)(lVar4 + 0x1e0) * *(double *)PTR_DAT_02002c30) *
                           *(double *)(param_1 + 0x548));
    }
    uVar2 = FUN_0064d0b0(param_1);
    FUN_018a5310(*(undefined8 *)(param_1 + 0x528),local_38,param_2 + -1,uVar2,
                 *(undefined8 *)(param_1 + 0x548),*(undefined1 *)(param_1 + 0x550));
    FUN_018933f0(param_1,local_34 + iVar1 + -10);
  }
  return;
}

