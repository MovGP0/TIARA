/* Ghidra address: 00a94360 */
/* Ghidra symbol: FUN_00a94360 */


void FUN_00a94360(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar1 = FUN_00410e60(&DAT_00a4d720,1);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  return;
}

