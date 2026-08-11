/* Ghidra address: 01a88980 */
/* Ghidra symbol: FUN_01a88980 */


void FUN_01a88980(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *local_38;
  longlong local_30;
  
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xb00),0);
  local_38 = FUN_01a88bf0;
  local_30 = param_1;
  FUN_00f834f0(&local_38);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1068) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x1068),iVar2);
      FUN_01ab4370(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),
                   (double)*(int *)(param_1 + 0x1070) / 1000.0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_016d7000();
  return;
}

