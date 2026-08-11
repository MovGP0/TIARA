/* Ghidra address: 00805030 */
/* Ghidra symbol: FUN_00805030 */


void FUN_00805030(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0xf0) + 0x6a8);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}

