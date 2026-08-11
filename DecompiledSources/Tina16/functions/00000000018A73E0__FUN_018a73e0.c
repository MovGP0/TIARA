/* Ghidra address: 018a73e0 */
/* Ghidra symbol: FUN_018a73e0 */


undefined4 FUN_018a73e0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_38 [4];
  int local_34;
  
  uVar1 = 0;
  plVar2 = (longlong *)FUN_018a73a0(param_1);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2,*(int *)(*(longlong *)(param_1 + 0x538) + 0x528) + -1);
  if (lVar3 != 0) {
    uVar1 = FUN_0064d0b0(param_1);
    FUN_018a5310(*(undefined8 *)(param_1 + 0x528),local_38,
                 *(int *)(*(longlong *)(param_1 + 0x538) + 0x528) + -1,uVar1,
                 *(undefined8 *)(param_1 + 0x548),*(undefined1 *)(param_1 + 0x550));
    uVar1 = FUN_0040c770((double)((*(int *)(param_1 + 0x4b4) - local_34) + 10) /
                         *(double *)(param_1 + 0x548) -
                         *(double *)(lVar3 + 0x1e0) * *(double *)PTR_DAT_02002c30);
  }
  return uVar1;
}

