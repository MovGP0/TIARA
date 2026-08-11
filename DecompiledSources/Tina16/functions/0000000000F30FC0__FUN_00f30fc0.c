/* Ghidra address: 00f30fc0 */
/* Ghidra symbol: FUN_00f30fc0 */


int FUN_00f30fc0(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 local_res18;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_res18 = param_3 + 1;
  uVar1 = (ulonglong)param_3;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x7b;
  if (0 < iVar5) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + -8) == 0)) {
      lVar2 = FUN_00410a90();
    }
    local_res18 = FUN_00f30110(*(undefined8 *)(lVar2 + lVar3 * 8),param_2,local_res18);
  }
  iVar5 = iVar5 + -1;
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      uVar1 = (ulonglong)local_res18;
      if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
        uVar1 = FUN_00410a90();
      }
      *(undefined1 *)(param_2 + uVar1) = 0x2c;
      uVar1 = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar1)) {
        lVar2 = FUN_00410a90();
      }
      local_res18 = FUN_00f30110(*(undefined8 *)(lVar2 + uVar1 * 8),param_2,local_res18 + 1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = (ulonglong)local_res18;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x7d;
  return local_res18 + 1;
}

