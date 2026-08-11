/* Ghidra address: 017c9900 */
/* Ghidra symbol: FUN_017c9900 */


void FUN_017c9900(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*PTR_DAT_020052b8 != '\0') {
    uVar1 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 6U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      return;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x218) == '\0') {
    if (10 < *(int *)(param_1 + 0x30c)) {
      FUN_01b04d70(0x103,&LAB_017c99a8,0);
    }
  }
  else if (200 < *(int *)(param_1 + 0x30c)) {
    FUN_01b04d70(0x103,&LAB_017c99a8,0);
  }
  return;
}

