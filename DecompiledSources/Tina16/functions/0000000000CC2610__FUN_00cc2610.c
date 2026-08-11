/* Ghidra address: 00cc2610 */
/* Ghidra symbol: FUN_00cc2610 */


void FUN_00cc2610(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00882a80(param_1);
  uVar1 = FUN_00cbfa90(&LAB_00cbf178,1);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}

