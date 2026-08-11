/* Ghidra address: 0180d020 */
/* Ghidra symbol: FUN_0180d020 */


void FUN_0180d020(longlong *param_1,longlong param_2,short param_3)

{
  int iVar1;
  longlong local_res10;
  short local_res18;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (local_res10 != 0) {
    FUN_00416780(&local_38,local_res18);
    iVar1 = FUN_00416db0(local_res10,local_38);
    if (iVar1 != 0) {
      FUN_004b3260(param_1);
      local_1c = FUN_00414cb0(local_res10);
      local_20 = 1;
      local_24 = 1;
      if (0 < local_1c) {
        do {
          if ((*(short *)(local_res10 + -2 + (longlong)local_20 * 2) == local_res18) &&
             (local_24 < local_20)) {
LAB_0180d102:
            if (local_20 == local_1c) {
              local_20 = local_20 + 1;
            }
            FUN_00416dc0(&local_40,local_res10,local_24,local_20 - local_24);
            (**(code **)(*param_1 + 0x78))(param_1,local_40);
            local_24 = local_20 + 1;
          }
          else if (local_20 == local_1c) {
            iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
            if (0 < iVar1) goto LAB_0180d102;
          }
          local_20 = local_20 + 1;
        } while (local_20 <= local_1c);
      }
      FUN_004b3390(param_1);
    }
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_res10);
  return;
}

