/* Ghidra address: 004c6810 */
/* Ghidra symbol: FUN_004c6810 */


undefined1 FUN_004c6810(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_30 = 0;
  FUN_0058f370(local_18,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  lVar2 = 0;
  if (*(char *)(param_1 + 0x7f) != '\0') {
    FUN_0058f370(local_28,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    lVar2 = local_28[0];
  }
  if (local_18[0] == lVar2) {
LAB_004c6899:
    uVar1 = 1;
  }
  else {
    if (local_18[0] != 0) {
      FUN_004c67a0(param_1,&local_30,local_18);
      if (local_30 == 0) goto LAB_004c6899;
    }
    uVar1 = 0;
  }
  FUN_00414480(&local_30);
  return uVar1;
}

