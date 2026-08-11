/* Ghidra address: 00b3a500 */
/* Ghidra symbol: FUN_00b3a500 */


undefined8
FUN_00b3a500(longlong param_1,undefined8 param_2,char param_3,char param_4,char param_5,byte param_6
            )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong local_38;
  int local_2c [3];
  
  local_38 = 0;
  FUN_00414520(param_2);
  if (param_5 == '\0') {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x98) + 3) {
    uVar3 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
    FUN_004134c0(uVar3);
  }
  FUN_00409a70(*(longlong *)(param_1 + 200) + -1 + (longlong)*(int *)(param_1 + 0x98),local_2c,4);
  *(uint *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + (uint)param_6 + 4;
  iVar5 = local_2c[0];
  if (param_3 != '\0') {
    iVar5 = local_2c[0] * iVar6;
  }
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x98) + iVar5 + -1) {
    uVar3 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
    FUN_004134c0(uVar3);
  }
  FUN_00415d10(&local_38,iVar5,0);
  if (1 < iVar5) {
    uVar3 = FUN_00414df0(&local_38);
    FUN_00409a70(*(longlong *)(param_1 + 200) + -1 + (longlong)*(int *)(param_1 + 0x98),uVar3,
                 (longlong)iVar5);
  }
  if (param_4 != '\0') {
    iVar1 = 0;
    if (local_38 != 0) {
      iVar1 = *(int *)(local_38 + -4);
    }
    iVar1 = iVar1 / iVar6;
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        iVar4 = iVar2 * iVar6;
        if ((*(char *)(local_38 + -1 + (longlong)((iVar4 - iVar6) + 1)) == '\0') &&
           (*(char *)(local_38 + -1 + (longlong)iVar4) == '\0')) {
          FUN_00415ad0(&local_38,local_38,1,iVar4 + -1);
          break;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar5;
  if (param_5 == '\0') {
    FUN_00b15390(param_2,local_38);
  }
  else {
    FUN_00b15310(param_2,local_38);
  }
  FUN_004144d0(&local_38);
  return param_2;
}

