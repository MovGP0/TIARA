/* Ghidra address: 00af1f60 */
/* Ghidra symbol: FUN_00af1f60 */


ulonglong FUN_00af1f60(longlong param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_R13;
  bool bVar6;
  undefined1 local_3c [4];
  int local_38;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) ||
     ((0 < *(int *)(param_1 + 0x908) && (0 < *(int *)(param_1 + 0x918))))) {
    uVar4 = FUN_00af1a50(param_1,local_3c,*(undefined4 *)(param_1 + 0x918),
                         *(undefined4 *)(param_1 + 0x908));
    bVar2 = *(byte *)(param_1 + 0xad);
    if (bVar2 < 8) {
      uVar3 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar2 & 0x1f);
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x19) != 0);
    }
    else {
      uVar5 = 0;
    }
    if ((char)uVar5 != '\0') {
      *param_2 = *(int *)(param_1 + 0x918) + local_38;
      uVar5 = *(ulonglong *)(param_1 + 0x758);
      if (*(char *)(uVar5 + 0xa9) != '\0') {
        puVar1 = (uint *)(uVar5 + 0x98);
        uVar5 = (ulonglong)*puVar1;
        *param_2 = *param_2 + *puVar1;
      }
    }
    if (bVar2 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar2 & 0x1f) & 7U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *param_3 = *(int *)(param_1 + 0x908) + local_38;
      if (*(char *)(*(longlong *)(param_1 + 0x750) + 0xa9) != '\0') {
        *param_3 = *param_3 + *(int *)(*(longlong *)(param_1 + 0x750) + 0x98);
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1) & 0xffffffff;
}

