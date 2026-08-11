/* Ghidra address: 01bff8e0 */
/* Ghidra symbol: FUN_01bff8e0 */


ulonglong FUN_01bff8e0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 800) == 0)) {
    cVar1 = FUN_01c019e0(param_1);
    if (cVar1 == '\0') {
      uVar7 = 0;
    }
    else {
      lVar6 = FUN_01c019a0(param_1);
      uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x10) + 0x10);
    }
  }
  else {
    uVar3 = FUN_004b1870(*(undefined8 *)(param_2 + 800));
    uVar7 = uVar3 & 0xffffffff;
    uVar4 = uVar3;
    if (param_3 < *(int *)(param_2 + 0x90)) {
      if (*(byte *)(param_1 + 0x4c3) < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (*(byte *)(param_1 + 0x4c3) & 0x1f);
        uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 1) != 0);
      }
      else {
        uVar4 = 0;
      }
      if ((char)uVar4 != '\0') {
        uVar7 = (ulonglong)((int)uVar3 - 1);
      }
    }
    if (param_4 < *(int *)(param_2 + 0x94)) {
      if (*(byte *)(param_1 + 0x4c3) < 8) {
        bVar8 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_1 + 0x4c3) & 0x1f) & 4U) !=
                0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar7 = (ulonglong)((int)uVar7 - 1);
      }
    }
    uVar5 = FUN_0064d000(param_2,local_48);
    if (local_40 < param_3) {
      if (*(byte *)(param_1 + 0x4c3) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                 (*(byte *)(param_1 + 0x4c3) & 0x1f) & 1U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
    }
    uVar5 = FUN_0064d000(param_2,local_48);
    if (local_3c < param_4) {
      if (*(byte *)(param_1 + 0x4c3) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                 (*(byte *)(param_1 + 0x4c3) & 0x1f) & 4U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
    }
    lVar6 = FUN_01c019a0(param_1);
    if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x10) < (int)uVar7) {
      lVar6 = FUN_01c019a0(param_1);
      uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x10) + 0x10);
    }
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
  }
  return uVar7;
}

