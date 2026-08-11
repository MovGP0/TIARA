/* Ghidra address: 0194f9f0 */
/* Ghidra symbol: FUN_0194f9f0 */


void FUN_0194f9f0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x58) + 0xd1);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}

