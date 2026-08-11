/* Ghidra address: 00b678a0 */
/* Ghidra symbol: FUN_00b678a0 */


void FUN_00b678a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_30 [2];
  
  local_30[0] = 0;
  iVar1 = FUN_00b23cf0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_00b23d10(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18),iVar3);
      FUN_00b23610(local_30,uVar2);
      FUN_00b62ce0(param_1,0x31);
      uVar4 = 0;
      if (local_30[0] != 0) {
        uVar4 = *(undefined4 *)(local_30[0] + -4);
      }
      FUN_00b62ce0(param_1,uVar4);
      uVar2 = FUN_00414df0(local_30);
      FUN_00b62d20(param_1,uVar2,uVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004144d0(local_30);
  return;
}

