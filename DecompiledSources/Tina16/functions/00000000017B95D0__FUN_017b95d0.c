/* Ghidra address: 017b95d0 */
/* Ghidra symbol: FUN_017b95d0 */


undefined8 * FUN_017b95d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x10);
  uVar2 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *puVar1 = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  puVar1[1] = uVar2;
  FUN_00c3c480(*(undefined8 *)(param_1 + 0x40),puVar1 + 1);
  return puVar1;
}

