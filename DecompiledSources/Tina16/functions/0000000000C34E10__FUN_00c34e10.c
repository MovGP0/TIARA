/* Ghidra address: 00c34e10 */
/* Ghidra symbol: FUN_00c34e10 */


void FUN_00c34e10(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00c35490(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_00410f20(uVar1);
  return;
}

