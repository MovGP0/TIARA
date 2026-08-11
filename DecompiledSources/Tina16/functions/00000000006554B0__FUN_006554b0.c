/* Ghidra address: 006554b0 */
/* Ghidra symbol: FUN_006554b0 */


void FUN_006554b0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_004be030(param_2,1);
  uVar1 = FUN_004c06c0(param_2);
  *(undefined4 *)(param_1 + 0x47c) = uVar1;
  uVar1 = FUN_004c06c0(param_2);
  *(undefined4 *)(param_1 + 0x480) = uVar1;
  *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) | 0x20;
  FUN_004be030(param_2,0);
  return;
}

