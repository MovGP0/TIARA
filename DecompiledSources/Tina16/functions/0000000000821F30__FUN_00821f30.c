/* Ghidra address: 00821f30 */
/* Ghidra symbol: FUN_00821f30 */


undefined8 FUN_00821f30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_004aea80(*(undefined8 *)(param_1 + 0x570));
  uVar1 = FUN_00410e60(&DAT_00820230,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x570),uVar1);
  FUN_0068b4f0(param_1,param_2,uVar1);
  return uVar1;
}

