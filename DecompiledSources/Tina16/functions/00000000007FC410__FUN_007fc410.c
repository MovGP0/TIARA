/* Ghidra address: 007fc410 */
/* Ghidra symbol: FUN_007fc410 */


void FUN_007fc410(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x90) + 0x6a8);
  *pbVar1 = *pbVar1 & 0xfe;
  FUN_00654410(*(undefined8 *)(param_2 + 0x90));
  return;
}

