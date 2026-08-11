/* Ghidra address: 00ccec60 */
/* Ghidra symbol: FUN_00ccec60 */


void FUN_00ccec60(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00cb9dd0(param_1);
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  uVar1 = FUN_00ccddb0(&LAB_00cc6b58,1);
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}

