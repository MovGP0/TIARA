/* Ghidra address: 01952f00 */
/* Ghidra symbol: FUN_01952f00 */


void FUN_01952f00(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x80) + 0xd1);
  *pbVar1 = *pbVar1 & 0xf7;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x90) + 0xd1);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  return;
}

