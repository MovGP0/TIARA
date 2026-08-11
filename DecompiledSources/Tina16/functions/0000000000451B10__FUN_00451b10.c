/* Ghidra address: 00451b10 */
/* Ghidra symbol: FUN_00451b10 */


void FUN_00451b10(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x10);
  *puVar1 = DAT_01dc2390;
  puVar1[1] = param_1;
  DAT_01dc2390 = puVar1;
  return;
}

