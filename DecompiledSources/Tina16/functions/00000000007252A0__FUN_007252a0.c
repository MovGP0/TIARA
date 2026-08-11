/* Ghidra address: 007252a0 */
/* Ghidra symbol: FUN_007252a0 */


undefined8 FUN_007252a0(undefined8 param_1,int param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_2 == 0x111) && ((param_3 & 0xffff) == 0x402)) && ((param_3 >> 0x10 & 0xffff) == 0)) {
    FUN_007254b0(DAT_020124e0,param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00721e30();
  }
  return uVar1;
}

