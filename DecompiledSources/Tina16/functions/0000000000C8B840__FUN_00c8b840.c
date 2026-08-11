/* Ghidra address: 00c8b840 */
/* Ghidra symbol: FUN_00c8b840 */


int FUN_00c8b840(longlong param_1,char param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_14 = -1;
  if (0 < *(int *)(param_1 + 0x30)) {
    if ((param_3 < 0) || (*(int *)(param_1 + 0x30) <= param_3)) {
      FUN_0041ddd0(&local_10,PTR_PTR_020028b8);
      uVar1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_10);
      FUN_004134c0(uVar1);
    }
    param_3 = *(int *)(param_1 + 0x1c) + param_3;
    iVar2 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30) + -1;
    if (param_3 <= iVar2) {
      iVar2 = (iVar2 - param_3) + 1;
      do {
        if (*(char *)(*(longlong *)(param_1 + 8) + (longlong)param_3) == param_2) {
          local_14 = param_3 - *(int *)(param_1 + 0x1c);
          break;
        }
        param_3 = param_3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(&local_10);
  return local_14;
}

