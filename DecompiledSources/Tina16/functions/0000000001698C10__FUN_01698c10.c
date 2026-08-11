/* Ghidra address: 01698c10 */
/* Ghidra symbol: FUN_01698c10 */


void FUN_01698c10(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_2 != (int *)0x0) {
    if (((*param_2 == 2) || (*param_2 == 3)) && (*(char *)((longlong)param_2 + 0x52) == '\0')) {
      FUN_004167a0(&local_30,*(undefined8 *)(param_2 + 0x10));
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb0))
                        (*(longlong **)(param_1 + 0x50),local_30);
      if (-1 < iVar1) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),iVar1);
        uVar2 = FUN_016a92e0(uVar2,0);
        FUN_00409a70(uVar2,param_2,0xd0);
      }
    }
    if ((param_2[0x13] == 0x32) && (*(longlong *)(param_2 + 0x18) != 0)) {
      iVar1 = param_2[0x15];
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          FUN_01698c10(param_1,*(undefined8 *)
                                (*(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 0x10));
          FUN_01698c10(param_1,*(undefined8 *)
                                (*(longlong *)(param_2 + 0x18) + 8 + (longlong)iVar3 * 0x10));
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_01698c10(param_1,*(undefined8 *)(param_2 + 2));
    FUN_01698c10(param_1,*(undefined8 *)(param_2 + 4));
  }
  FUN_00414480(&local_30);
  return;
}

