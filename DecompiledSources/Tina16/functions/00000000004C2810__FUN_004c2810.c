/* Ghidra address: 004c2810 */
/* Ghidra symbol: FUN_004c2810 */


void FUN_004c2810(longlong param_1)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  uVar1 = FUN_004c23c0(*(undefined8 *)(param_1 + 0x40));
  FUN_004c8510(*(undefined8 *)(param_1 + 0x48),uVar1);
  do {
    FUN_004c1d80(*(undefined8 *)(param_1 + 0x40),&local_10);
    FUN_004c8440(*(undefined8 *)(param_1 + 0x48),local_10);
  } while (local_10 != 0);
  FUN_00414480(&local_10);
  return;
}

