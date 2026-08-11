/* Ghidra address: 00aad9a0 */
/* Ghidra symbol: FUN_00aad9a0 */


void FUN_00aad9a0(undefined8 param_1,longlong param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  uint3 uVar2;
  byte bVar3;
  bool bVar4;
  
  bVar3 = (byte)param_4;
  uVar2 = (uint3)((uint)param_4 >> 8);
  if (bVar3 == 1) {
    if (*param_3 < 8) {
      bVar4 = ((int)CONCAT71((uint7)uVar2,1) << (*param_3 & 0x1f) & 2U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return;
    }
  }
  else if (bVar3 == 2) {
    if (*param_3 < 8) {
      bVar4 = ((int)CONCAT71((uint7)uVar2,1) << (*param_3 & 0x1f) & 6U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return;
    }
  }
  else {
    if (bVar3 != 3) {
      return;
    }
    if (*param_3 < 8) {
      bVar4 = ((int)CONCAT71((uint7)uVar2,1) << (*param_3 & 0x1f) & 0xeU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return;
    }
  }
  piVar1 = (int *)(param_2 + (ulonglong)*param_3 * 4);
  *piVar1 = *piVar1 + -1;
  piVar1 = (int *)(param_2 + (ulonglong)bVar3 * 4);
  *piVar1 = *piVar1 + 1;
  *param_3 = bVar3;
  return;
}

