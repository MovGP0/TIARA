/* Ghidra address: 00464c70 */
/* Ghidra symbol: FUN_00464c70 */


float FUN_00464c70(ushort *param_1)

{
  ushort uVar1;
  double dVar2;
  float fVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar1 = *param_1;
  if (uVar1 < 0x11) {
    if (uVar1 == 0x10) {
      return (float)(int)(char)param_1[4];
    }
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        return (float)*(int *)(param_1 + 4);
      }
      if (uVar1 == 0) {
        return 0.0;
      }
      if (uVar1 == 1) {
        if (DAT_01dc436a != '\0') {
          FUN_00460110(1,4);
        }
        return 0.0;
      }
      if (uVar1 == 2) {
        return (float)(int)(short)param_1[4];
      }
    }
    else {
      if (uVar1 == 4) {
        return *(float *)(param_1 + 4);
      }
      if (uVar1 == 0xb) {
        return (float)(int)(short)param_1[4];
      }
    }
  }
  else if (uVar1 < 0x14) {
    if (uVar1 == 0x13) {
      return (float)*(uint *)(param_1 + 4);
    }
    if (uVar1 == 0x11) {
      return (float)(byte)param_1[4];
    }
    if (uVar1 == 0x12) {
      return (float)param_1[4];
    }
  }
  else {
    if (uVar1 == 0x14) {
      return (float)*(longlong *)(param_1 + 4);
    }
    if (uVar1 == 0x15) {
      fVar3 = (float)*(longlong *)(param_1 + 4);
      if (-1 < *(longlong *)(param_1 + 4)) {
        return fVar3;
      }
      return fVar3 + 1.8446744e+19;
    }
  }
  local_20 = auStack_48;
  dVar2 = (double)FUN_00464710(param_1);
  return (float)dVar2;
}

