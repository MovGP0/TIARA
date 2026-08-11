/* Ghidra address: 01aa7180 */
/* Ghidra symbol: FUN_01aa7180 */


void FUN_01aa7180(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = *param_2;
    uVar1 = FUN_00409570(2);
    *(undefined8 *)(param_1 + 0x41e8) = uVar1;
  }
  return;
}

