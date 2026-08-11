/* Ghidra address: 00c82300 */
/* Ghidra symbol: FUN_00c82300 */


bool FUN_00c82300(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  bool local_31;
  short *local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = (short *)0x0;
  local_20[0] = 0;
  FUN_00414480(param_1 + 0x98);
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  local_31 = *param_3 < iVar1;
  if (local_31) {
    while ((iVar1 = (**(code **)(*param_2 + 0x28))(param_2), *param_3 < iVar1 &&
           ((FUN_00b90780(&local_28,*(undefined8 *)(param_1 + 0x98)), local_28 == 0 ||
            (FUN_00b90780(&local_30,*(undefined8 *)(param_1 + 0x98)), *local_30 == 0x3b))))) {
      (**(code **)(*param_2 + 0x18))(param_2,local_20,*param_3);
      FUN_00414b50(param_1 + 0x98,local_20[0]);
      local_31 = *(longlong *)(param_1 + 0x98) != 0;
      *param_3 = *param_3 + 1;
    }
  }
  FUN_00414560(&local_30,3);
  return local_31;
}

