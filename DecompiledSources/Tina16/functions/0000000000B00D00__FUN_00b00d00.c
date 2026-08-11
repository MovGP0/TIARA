/* Ghidra address: 00b00d00 */
/* Ghidra symbol: FUN_00b00d00 */


void FUN_00b00d00(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x730);
  *(undefined8 *)(param_1 + 0x730) = 0;
  FUN_00410f20(uVar1);
  return;
}

