/* Ghidra address: 005944f0 */
/* Ghidra symbol: FUN_005944f0 */


code * FUN_005944f0(byte param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  code *pcVar2;
  
  if (param_2 == (byte *)0x0) {
    if (param_1 == 0) {
      pcVar2 = (code *)FUN_005933f0(0,param_3);
    }
    else if (param_1 == 1) {
      pcVar2 = (code *)FUN_00593470(0,param_3);
    }
    else {
      FUN_004098e0(4);
      pcVar2 = (code *)0x0;
    }
  }
  else {
    pbVar1 = &DAT_01de2750 + (ulonglong)*param_2 * 0x10 + (ulonglong)param_1 * 0x170;
    pcVar2 = *(code **)(pbVar1 + 8);
    if ((*pbVar1 & 2) != 0) {
      pcVar2 = (code *)(*pcVar2)(param_2,param_3);
    }
    if ((*pbVar1 & 1) != 0) {
      pcVar2 = (code *)FUN_00592ba0(pcVar2,param_2,param_3);
    }
  }
  return pcVar2;
}

