/* Ghidra address: 004431e0 */
/* Ghidra symbol: FUN_004431e0 */


ulonglong FUN_004431e0(longlong param_1,short *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  short *psVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar3 = (ulonglong)param_3;
  if (param_2 == (short *)0x0) {
    param_4 = 0;
  }
  else if (param_4 == 0xffffffff) {
    param_4 = FUN_00414d00(param_2);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_4)) {
    param_4 = param_3;
  }
  uVar6 = param_4 * 2;
  if (((param_2 == (short *)0x0) || (*param_2 != 0x2d)) || (*(short *)(param_1 + 0x16a) == 0x53)) {
    iVar7 = 0;
  }
  else {
    uVar6 = uVar6 - 2;
    param_4 = param_4 - 1;
    iVar7 = 1;
  }
  if (*(char *)(param_1 + 0x157) == '\0') {
    uVar1 = FUN_00443140(param_1,param_4,iVar7);
    uVar3 = (ulonglong)uVar1;
    if ((char)uVar1 != '\0') {
      return uVar3;
    }
  }
  uVar4 = (undefined7)(uVar3 >> 8);
  psVar5 = param_2;
  if (iVar7 == 1) {
    if (*(int *)(param_1 + 0x160) == 0) {
      return CONCAT71(uVar4,1);
    }
    psVar5 = param_2 + 1;
    **(undefined2 **)(param_1 + 0x158) = 0x2d;
    *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 2;
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -2;
  }
  if (((*(int *)(param_1 + 0x16c) != -1) && ((int)param_4 < *(int *)(param_1 + 0x16c))) &&
     (*(short *)(param_1 + 0x16a) != 0x53)) {
    if ((int)(param_4 + 1) <= *(int *)(param_1 + 0x16c)) {
      iVar2 = (*(int *)(param_1 + 0x16c) - (param_4 + 1)) + 1;
      do {
        if (*(int *)(param_1 + 0x160) == 0) {
          return CONCAT71(uVar4,1);
        }
        **(undefined2 **)(param_1 + 0x158) = 0x30;
        *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 2;
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (param_2 == (short *)0x0) {
    uVar3 = 0;
  }
  else {
    bVar8 = *(uint *)(param_1 + 0x160) < uVar6;
    uVar3 = CONCAT71(uVar4,bVar8);
    if (bVar8) {
      uVar6 = *(uint *)(param_1 + 0x160);
    }
    FUN_00409a70(psVar5,*(undefined8 *)(param_1 + 0x158),uVar6);
    *(ulonglong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + (ulonglong)uVar6;
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) - uVar6;
  }
  if (*(char *)(param_1 + 0x157) != '\0') {
    uVar6 = FUN_00443140(param_1,param_4,iVar7);
    uVar3 = (ulonglong)uVar6;
  }
  return uVar3;
}

