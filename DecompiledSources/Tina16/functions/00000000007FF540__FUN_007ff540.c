/* Ghidra address: 007ff540 */
/* Ghidra symbol: FUN_007ff540 */


void FUN_007ff540(longlong param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  undefined8 in_R11;
  bool bVar2;
  
  *param_2 = *param_2 & 0x7f3bff7f;
  *param_3 = *param_3 & 0xfffffe7e;
  *param_4 = *param_4 & 0xffffd7ff;
  bVar1 = *(byte *)(param_1 + 0x4d1);
  if (*(char *)(param_1 + 0x4d6) == '\x01') {
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)in_R11 >> 8),1) << (bVar1 & 0x1f) & 9U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      bVar1 = 2;
    }
  }
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
        *param_2 = *param_2 | 0x80c00000;
      }
      else {
        *param_2 = *param_2 | 0xc00000;
      }
      *param_3 = *param_3 | 0x101;
      if (*PTR_DAT_02003210 == '\0') {
        *param_2 = *param_2 | 0x400080;
      }
      *param_4 = *param_4 | 0x2808;
      goto LAB_007ff63b;
    }
    if (bVar1 == 0) {
      if ((*(longlong *)(param_1 + 0x78) == 0) && (*(longlong *)(param_1 + 0x358) == 0)) {
        *param_2 = *param_2 | 0x80000000;
      }
      goto LAB_007ff63b;
    }
    if (bVar1 == 1) goto LAB_007ff5ea;
    if (bVar1 != 2) goto LAB_007ff63b;
  }
  else {
    if (bVar1 == 4) {
LAB_007ff5ea:
      *param_2 = *param_2 | 0xc00000;
      goto LAB_007ff63b;
    }
    if (bVar1 != 5) goto LAB_007ff63b;
  }
  *param_2 = *param_2 | 0xc40000;
LAB_007ff63b:
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x30U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x4d6) != '\x01')) {
    *param_3 = *param_3 | 0x80;
  }
  return;
}

