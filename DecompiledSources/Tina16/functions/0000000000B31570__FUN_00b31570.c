/* Ghidra address: 00b31570 */
/* Ghidra symbol: FUN_00b31570 */


void FUN_00b31570(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong local_28;
  int local_1c [3];
  
  local_28 = 0;
  **(undefined1 **)(param_1 + 0x38) = 1;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,3)
  ;
  bVar1 = **(byte **)(*(longlong *)(param_1 + 0x38) + 2);
  local_1c[0] = 0;
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 1,local_1c,2);
  FUN_004144d0(&local_28);
  iVar4 = 0x4e;
  piVar3 = (int *)(PTR_PTR_02005938 + 8);
  do {
    if (*piVar3 == local_1c[0]) {
      FUN_00414c70(&local_28,*(undefined8 *)(piVar3 + -2));
      break;
    }
    piVar3 = piVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (local_1c[0] == 0xff) {
    **(undefined1 **)(param_1 + 0x38) = 2;
  }
  if (local_28 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8) = 0xffffffff;
  }
  else {
    FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,local_28);
    *(uint *)(*(longlong *)(param_1 + 0x38) + 0x12) = (uint)bVar1;
  }
  FUN_004144d0(&local_28);
  return;
}

