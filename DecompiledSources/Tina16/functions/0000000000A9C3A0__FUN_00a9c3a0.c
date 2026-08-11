/* Ghidra address: 00a9c3a0 */
/* Ghidra symbol: FUN_00a9c3a0 */


ulonglong FUN_00a9c3a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                      undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar2 = (ulonglong)param_6;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_00ac3910(param_1,iVar3);
      uVar2 = (**(code **)(*plVar1 + 0x58))
                        (plVar1,param_2,&local_38,*(undefined8 *)(param_1 + 0x38),param_5,param_7,
                         param_8);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2;
}

