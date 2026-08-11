/* Ghidra address: 01232e90 */
/* Ghidra symbol: FUN_01232e90 */


void FUN_01232e90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
  *(undefined8 *)(PTR_DAT_020040b8 + 0xb0) = uVar1;
  return;
}

