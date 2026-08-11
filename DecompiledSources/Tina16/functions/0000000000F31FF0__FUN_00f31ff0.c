/* Ghidra address: 00f31ff0 */
/* Ghidra symbol: FUN_00f31ff0 */


longlong FUN_00f31ff0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong local_88;
  undefined8 local_80 [3];
  longlong local_68;
  longlong local_30;
  
  local_80[0] = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      uVar3 = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar3)) {
        lVar2 = FUN_00410a90();
      }
      local_88 = *(longlong *)(lVar2 + uVar3 * 8);
      (**(code **)(**(longlong **)(local_88 + 0x10) + 0x18))
                (*(longlong **)(local_88 + 0x10),local_80);
      iVar1 = FUN_00416db0(local_80[0],param_2);
      if (iVar1 == 0) {
        local_68 = *(longlong *)(param_1 + 0x10) + 8;
        local_30 = local_88;
        FUN_005974f0(local_68,&local_30);
        goto LAB_00f320b5;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_88 = 0;
LAB_00f320b5:
  FUN_00414480(local_80);
  return local_88;
}

