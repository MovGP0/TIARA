/* Ghidra address: 010dccb0 */
/* Ghidra symbol: FUN_010dccb0 */


undefined8 FUN_010dccb0(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((byte)(*param_2 + 0x98) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_4 >> 8),1) << (*param_2 + 0x98 & 0x1f) & 0xc0U)
            != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    bVar1 = *param_2;
    if (bVar1 < 0x70) {
      bVar3 = ((byte)(&DAT_010dcd19)[(longlong)(short)(bVar1 & 0x7f) >> 3] >> (bVar1 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = 1;
    }
    else {
      *param_2 = *(byte *)(param_1 + 0x58);
    }
  }
  return uVar2;
}

