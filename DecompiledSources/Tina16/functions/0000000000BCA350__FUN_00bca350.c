/* Ghidra address: 00bca350 */
/* Ghidra symbol: FUN_00bca350 */


int FUN_00bca350(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong in_R11;
  bool bVar6;
  
  iVar3 = 0;
  puVar4 = (ushort *)*param_2;
  if ((puVar4 < *(ushort **)(param_1 + 0x38)) && (*puVar4 == 0x7b)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    puVar4 = puVar4 + 1;
  }
  if ((puVar4 < *(ushort **)(param_1 + 0x38)) && (*puVar4 == 0x26)) {
    puVar4 = puVar4 + 1;
  }
  else {
    for (; (puVar4 < *(ushort **)(param_1 + 0x38) && (*puVar4 < 0x100)); puVar4 = puVar4 + 1) {
      bVar2 = (char)*puVar4 - 0x30;
      if (bVar2 < 0x10) {
        uVar5 = (int)CONCAT62((int6)(in_R11 >> 0x10),1) << (bVar2 & 0x1f);
        in_R11 = (ulonglong)uVar5;
        bVar6 = (uVar5 & 0x3ff) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) break;
      iVar3 = iVar3 * 10 + (uint)*puVar4 + -0x30;
    }
  }
  if (bVar1) {
    if ((puVar4 < *(ushort **)(param_1 + 0x38)) && (*puVar4 == 0x7d)) {
      puVar4 = puVar4 + 1;
    }
    else {
      puVar4 = (ushort *)*param_2;
    }
  }
  if (puVar4 == (ushort *)*param_2) {
    iVar3 = -1;
  }
  *param_2 = puVar4;
  return iVar3;
}

