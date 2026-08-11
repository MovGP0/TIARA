/* Ghidra address: 006fd9a0 */
/* Ghidra symbol: FUN_006fd9a0 */


uint FUN_006fd9a0(longlong param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_5c;
  byte local_58 [40];
  
  if ((((int)param_2 < 0) ||
      (local_5c = param_2, 1 < *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10))) &&
     (local_5c = 0, *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10) != 0)) {
    uVar7 = 0;
    uVar8 = 0;
    iVar6 = 0x7fffffff;
    uVar9 = 0;
    for (; (0 < iVar6 && ((int)local_5c < *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10)));
        local_5c = local_5c + 1) {
      uVar2 = local_5c;
      if (local_5c != param_2) {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),local_5c);
        cVar1 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
        if (((cVar1 != '\0') && (*(char *)(lVar4 + 0x339) != '\0')) ||
           (uVar2 = uVar9, local_5c == *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10) - 1U)) {
          uVar2 = param_4 - *(int *)(lVar4 + 0x94);
          uVar5 = (int)uVar2 >> 0x1f;
          iVar3 = (uVar2 ^ uVar5) - uVar5;
          if (iVar3 < iVar6) {
            iVar6 = iVar3;
            uVar9 = local_5c;
            uVar8 = uVar7;
          }
          uVar7 = local_5c + 1;
          uVar2 = uVar9;
        }
      }
      uVar9 = uVar2;
    }
    local_5c = uVar8;
    if ((int)uVar8 <= (int)uVar9) {
      iVar6 = (uVar9 - uVar8) + 1;
      do {
        if ((local_5c != param_2) &&
           (lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),local_5c),
           param_3 <= *(int *)(lVar4 + 0x90))) break;
        local_5c = local_5c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_5c == param_2 + 1) {
      FUN_0040f6a0(uVar8,uVar9,0x20,local_58);
      if (param_2 < 0x100) {
        bVar10 = (local_58[(longlong)(ulonglong)param_2 >> 3] >> ((ulonglong)param_2 & 7) & 1) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        local_5c = param_2;
      }
    }
  }
  return local_5c;
}

