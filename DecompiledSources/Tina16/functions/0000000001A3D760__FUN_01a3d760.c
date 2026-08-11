/* Ghidra address: 01a3d760 */
/* Ghidra symbol: FUN_01a3d760 */


undefined1 FUN_01a3d760(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_35;
  int local_34;
  int local_30;
  undefined1 local_29;
  short *local_28;
  undefined1 local_19;
  
  local_40 = auStack_68;
  local_28 = (short *)0x0;
  local_29 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_28,0);
    local_30 = 0;
    if (local_28 != (short *)0x0) {
      local_30 = *(int *)(local_28 + -2);
    }
    if ((local_30 < 1) || ((*local_28 != 0x7b && (*local_28 != 0x5b)))) {
      local_34 = 0;
      if (local_28 != (short *)0x0) {
        local_34 = *(int *)(local_28 + -2);
      }
      if ((local_34 < 3) || (iVar1 = FUN_004170c0(&DAT_01a3d884,local_28,1), iVar1 != 1)) {
        local_35 = 0;
      }
      else {
        local_35 = 1;
      }
    }
    else {
      local_35 = 1;
    }
    local_29 = local_35;
  }
  local_19 = local_29;
  FUN_00414480(&local_28);
  return local_19;
}

