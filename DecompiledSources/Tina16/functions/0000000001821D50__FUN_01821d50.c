/* Ghidra address: 01821d50 */
/* Ghidra symbol: FUN_01821d50 */


char FUN_01821d50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_21 = '\0';
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x84);
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 + (longlong)iVar2 * 2) ==
      0x23) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
    *piVar1 = *piVar1 + 1;
    local_21 = FUN_01822070(*(undefined8 *)(param_1 + 0x70));
    if (local_21 == '\0') {
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x84) = iVar2;
    }
    else {
      FUN_00416dc0(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xa8),iVar2 + 1,
                   (*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) - iVar2) + -1);
      uVar3 = FUN_0043fc00(local_20[0]);
      FUN_00416780(param_1 + 0x40,uVar3);
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

