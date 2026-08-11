/* Ghidra address: 004b6f60 */
/* Ghidra symbol: FUN_004b6f60 */


void FUN_004b6f60(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined *local_38;
  undefined ***local_30;
  undefined *local_28;
  longlong *local_20;
  
  local_28 = *(undefined **)(*param_1 + 0x50);
  local_20 = param_1;
  for (local_40 = (undefined **)*param_1;
      (local_40 != (undefined **)0x0 && (local_40 != &PTR_FUN_00478eb0));
      local_40 = (undefined **)FUN_00410ca0(local_40)) {
  }
  if (local_40 == (undefined **)0x0) {
    FUN_004b6ed0(auStack_68);
  }
  local_30 = &local_40;
  local_38 = local_40[10];
  if (local_28 == local_38) {
    FUN_004b6ed0(auStack_68);
  }
  (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2,param_3);
  return;
}

