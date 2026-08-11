/* Ghidra address: 00e07c70 */
/* Ghidra symbol: FUN_00e07c70 */


void FUN_00e07c70(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  if (iVar2 + 1 <= (int)(uint)*(byte *)(param_1 + 0x245c)) {
    iVar2 = ((uint)*(byte *)(param_1 + 0x245c) - (iVar2 + 1)) + 1;
    do {
      uVar1 = FUN_00e07960(param_1);
      FUN_00416780(local_20,uVar1);
      FUN_00416ad0(param_1 + 0x20,local_20[0]);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + -1;
  FUN_00414480(local_20);
  return;
}

