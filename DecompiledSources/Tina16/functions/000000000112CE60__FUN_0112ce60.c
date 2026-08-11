/* Ghidra address: 0112ce60 */
/* Ghidra symbol: FUN_0112ce60 */


undefined2 * FUN_0112ce60(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  short sVar1;
  int iVar2;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 6);
  sVar1 = param_3[8];
  if ((sVar1 != 0) || (param_3[9] != 0)) {
    FUN_00448c80(*param_2,param_2[1],param_2[2]);
    iVar2 = (uint)(ushort)param_3[3] * 0x3c + (uint)(ushort)param_3[4];
    if (sVar1 < 1) {
      iVar2 = iVar2 + sVar1 * -0x3c + (int)(short)param_3[9];
    }
    else {
      iVar2 = (iVar2 + sVar1 * -0x3c) - (int)(short)param_3[9];
    }
    if (iVar2 < 0) {
      FUN_005bbc50();
      iVar2 = iVar2 + 0x5a0;
    }
    else if (0x59f < iVar2) {
      FUN_005bbc50();
      iVar2 = iVar2 + -0x5a0;
    }
    FUN_00448e20();
    param_2[3] = (short)(iVar2 / 0x3c);
    param_2[4] = (short)(iVar2 % 0x3c);
  }
  return param_2;
}

