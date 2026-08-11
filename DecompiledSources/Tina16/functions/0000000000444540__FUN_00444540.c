/* Ghidra address: 00444540 */
/* Ghidra symbol: FUN_00444540 */


ulonglong FUN_00444540(longlong param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = (ulonglong)param_3;
  if (param_2 == (char *)0x0) {
    uVar5 = 0;
  }
  else if (param_4 == 0xffffffff) {
    uVar1 = FUN_00414ce0(param_2);
    uVar5 = (ulonglong)uVar1;
  }
  else {
    uVar5 = (ulonglong)param_4;
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)uVar5)) {
    uVar5 = (ulonglong)param_3;
  }
  iVar2 = (int)uVar5;
  if (((param_2 == (char *)0x0) || (*param_2 != '-')) || (*(char *)(param_1 + 0x16b) == 'S')) {
    iVar8 = 0;
    uVar7 = uVar5;
  }
  else {
    uVar5 = (ulonglong)(iVar2 - 1);
    iVar8 = 1;
    uVar7 = (ulonglong)(iVar2 - 1);
  }
  if (*(char *)(param_1 + 0x157) == '\0') {
    uVar1 = FUN_004444b0(param_1,uVar5,iVar8);
    uVar3 = (ulonglong)uVar1;
    if ((char)uVar1 != '\0') {
      return uVar3;
    }
  }
  uVar4 = (undefined7)(uVar3 >> 8);
  pcVar6 = param_2;
  if (iVar8 == 1) {
    if (*(int *)(param_1 + 0x160) == 0) {
      return CONCAT71(uVar4,1);
    }
    pcVar6 = param_2 + 1;
    **(undefined1 **)(param_1 + 0x158) = 0x2d;
    *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 1;
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
  }
  if (((*(int *)(param_1 + 0x16c) != -1) && ((int)uVar5 < *(int *)(param_1 + 0x16c))) &&
     (*(char *)(param_1 + 0x16b) != 'S')) {
    iVar2 = (int)uVar5 + 1;
    if (iVar2 <= *(int *)(param_1 + 0x16c)) {
      iVar2 = (*(int *)(param_1 + 0x16c) - iVar2) + 1;
      do {
        if (*(int *)(param_1 + 0x160) == 0) {
          return CONCAT71(uVar4,1);
        }
        **(undefined1 **)(param_1 + 0x158) = 0x30;
        *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 1;
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    bVar9 = *(uint *)(param_1 + 0x160) < (uint)uVar7;
    uVar3 = CONCAT71(uVar4,bVar9);
    if (bVar9) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x160);
    }
    FUN_00409a70(pcVar6,*(undefined8 *)(param_1 + 0x158),uVar7);
    *(ulonglong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + uVar7;
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) - (int)uVar7;
  }
  if (*(char *)(param_1 + 0x157) != '\0') {
    uVar1 = FUN_004444b0(param_1,uVar5,iVar8);
    uVar3 = (ulonglong)uVar1;
  }
  return uVar3;
}

