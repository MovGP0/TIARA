/* Ghidra address: 0044a4b0 */
/* Ghidra symbol: FUN_0044a4b0 */


undefined1 FUN_0044a4b0(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  char local_19;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_11 = 0;
  puVar1 = auStack_58;
  if (param_3 != 0) {
    FUN_0044a3c0(param_1,param_2);
    local_18 = 0;
    if (param_3 != 0) {
      local_18 = *(undefined4 *)(param_3 + -4);
    }
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,param_1,*param_2,local_18);
    iVar2 = FUN_0043e6d0(param_3,local_10);
    local_19 = iVar2 == 0;
    FUN_00414480(&local_10);
    puVar1 = local_30;
    if (local_19 != '\0') {
      local_20 = 0;
      if (param_3 != 0) {
        local_20 = *(int *)(param_3 + -4);
      }
      *param_2 = *param_2 + local_20;
      local_11 = 1;
    }
  }
  local_30 = puVar1;
  FUN_00414480(&local_10);
  return local_11;
}

