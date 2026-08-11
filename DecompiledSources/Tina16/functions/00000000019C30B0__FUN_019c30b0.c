/* Ghidra address: 019c30b0 */
/* Ghidra symbol: FUN_019c30b0 */


ulonglong FUN_019c30b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    iVar7 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x88) + -8);
  }
  iVar2 = 0;
  if (iVar7 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 8);
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar1 + -8);
      }
      iVar6 = 0;
      if (iVar5 - 1U < 0x80000000) {
        do {
          if ((*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 8) +
                (longlong)iVar6 * 0x18) == *param_2) &&
             (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 8) + 8 +
                      (longlong)iVar6 * 0x18) == (int)param_2[1])) {
            return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 4);
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"GetGraphNumForPin: pin not found");
  uVar4 = FUN_004134c0(uVar3);
  return uVar4;
}

