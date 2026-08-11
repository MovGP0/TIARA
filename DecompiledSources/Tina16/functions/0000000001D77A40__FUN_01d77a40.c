/* Ghidra address: 01d77a40 */
/* Ghidra symbol: FUN_01d77a40 */


void FUN_01d77a40(undefined8 param_1,int param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar6;
  ulonglong uVar5;
  
  if (param_2 <= *(int *)(*(longlong *)PTR_DAT_02001b18 + 0x10)) {
    iVar3 = (*(int *)(*(longlong *)PTR_DAT_02001b18 + 0x10) - param_2) + 1;
    uVar5 = param_3;
    do {
      lVar1 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,param_2);
      bVar2 = *(char *)(lVar1 + 0x33) - 8;
      if (bVar2 < 8) {
        uVar4 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar2 & 0x1f);
        uVar5 = (ulonglong)uVar4;
        bVar6 = (uVar4 & 0x21) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if (*(char *)(lVar1 + 0x33) == '\b') {
          *(int *)(lVar1 + 0x36) = *(int *)(lVar1 + 0x36) + (int)param_3;
        }
        else {
          *(int *)(lVar1 + 0x46) = *(int *)(lVar1 + 0x46) + (int)param_3;
        }
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

