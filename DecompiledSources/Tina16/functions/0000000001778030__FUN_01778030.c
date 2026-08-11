/* Ghidra address: 01778030 */
/* Ghidra symbol: FUN_01778030 */


ulonglong FUN_01778030(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  lVar8 = param_2;
  uVar5 = FUN_01769b90(param_1,param_2);
  uVar9 = uVar5 & 0xffffffff;
  uVar6 = uVar5;
  if (*(char *)(param_1 + 0x62) != '\0') {
    if (*(byte *)(param_2 + 0x78) < 8) {
      uVar1 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f);
      uVar6 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x31) != 0);
    }
    else {
      uVar6 = 0;
    }
    if ((char)uVar6 != '\0') {
      uVar7 = 0;
      goto LAB_01778079;
    }
  }
  uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_01778079:
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar8 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
             0x31U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    uVar9 = (ulonglong)((int)uVar5 + 1);
  }
  if ((char)uVar7 != '\0') {
    iVar2 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xb0));
    iVar3 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xe8));
    iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xf0));
    uVar7 = FUN_01d321c0(*(undefined8 *)(param_1 + 0xf8));
    uVar9 = (ulonglong)(uint)((int)uVar9 + iVar2 + iVar3 + iVar4 + (int)uVar7);
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
             0x31U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x100));
    uVar9 = (ulonglong)(uint)((int)uVar9 + iVar2);
  }
  return uVar9;
}

