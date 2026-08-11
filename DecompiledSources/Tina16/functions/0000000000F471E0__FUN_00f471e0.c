/* Ghidra address: 00f471e0 */
/* Ghidra symbol: FUN_00f471e0 */


void FUN_00f471e0(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00f470c0(param_1);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) == 0) {
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
    }
    *pbVar1 = *pbVar1 | param_4;
  }
  return;
}

