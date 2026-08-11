/* Ghidra address: 004c9bf0 */
/* Ghidra symbol: FUN_004c9bf0 */


void FUN_004c9bf0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = (undefined1 *)0x0;
  FUN_00419430(&local_28,&DAT_00406578);
  FUN_00419260(&local_28,&DAT_00406578,1,2);
  *local_28 = 0x20;
  local_28[1] = 0x20;
  FUN_004194b0(local_20,local_28,&DAT_00406578);
  iVar2 = *(int *)(param_1 + 0x1ec);
  if (0 < iVar2) {
    do {
      uVar1 = 0;
      if (local_20[0] != 0) {
        uVar1 = *(undefined8 *)(local_20[0] + -8);
      }
      FUN_004c3c80(*(undefined8 *)(param_1 + 0x1e0),local_20[0],uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00417840(&local_28,&DAT_00406578,2);
  return;
}

