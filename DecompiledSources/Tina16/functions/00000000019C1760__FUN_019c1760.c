/* Ghidra address: 019c1760 */
/* Ghidra symbol: FUN_019c1760 */


undefined8 FUN_019c1760(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = (int)*(undefined8 *)(param_2 + -8);
  }
  uVar5 = 0;
  if (-1 < iVar8 + -2) {
    iVar8 = iVar8 + -1;
    do {
      iVar4 = (int)uVar5;
      uVar1 = *(undefined8 *)(param_2 + (longlong)iVar4 * 8);
      uVar2 = *(undefined8 *)(param_2 + (longlong)(iVar4 + 1) * 8);
      iStack_c = (int)((ulonglong)uVar1 >> 0x20);
      iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
      local_10 = (int)uVar1;
      local_18 = (int)uVar2;
      if ((iStack_c == iStack_14) && (param_1[1] == iStack_c)) {
        iVar7 = local_10;
        if (local_18 <= local_10) {
          iVar7 = local_18;
        }
        bVar3 = iVar7 <= *param_1;
      }
      else {
        bVar3 = false;
      }
      uVar6 = (undefined7)(uVar5 >> 8);
      if (bVar3) {
        iVar7 = local_10;
        if (local_10 <= local_18) {
          iVar7 = local_18;
        }
        if (*param_1 <= iVar7) {
          return CONCAT71(uVar6,1);
        }
      }
      if ((local_10 == local_18) && (*param_1 == local_10)) {
        iVar7 = iStack_c;
        if (iStack_14 <= iStack_c) {
          iVar7 = iStack_14;
        }
        bVar3 = iVar7 <= param_1[1];
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (iStack_c <= iStack_14) {
          iStack_c = iStack_14;
        }
        if (param_1[1] <= iStack_c) {
          return CONCAT71(uVar6,1);
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}

