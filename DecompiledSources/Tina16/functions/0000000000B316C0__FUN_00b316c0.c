/* Ghidra address: 00b316c0 */
/* Ghidra symbol: FUN_00b316c0 */


void FUN_00b316c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  longlong local_28;
  int local_1c;
  
  local_28 = 0;
  **(undefined1 **)(param_1 + 0x38) = 1;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,2)
  ;
  local_1c = 0;
  iVar3 = -1;
  uVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar2,&local_1c,2);
  FUN_004144d0(&local_28);
  iVar1 = 0x4e;
  piVar4 = (int *)(PTR_PTR_02005938 + 8);
  do {
    if (*piVar4 == local_1c) {
      FUN_00414c70(&local_28,*(undefined8 *)(piVar4 + -2));
      iVar3 = piVar4[1];
      break;
    }
    piVar4 = piVar4 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((iVar3 < 0) || (local_28 == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8) = 0xffffffff;
  }
  else {
    FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,local_28);
    *(int *)(*(longlong *)(param_1 + 0x38) + 0x12) = iVar3;
  }
  FUN_004144d0(&local_28);
  return;
}

