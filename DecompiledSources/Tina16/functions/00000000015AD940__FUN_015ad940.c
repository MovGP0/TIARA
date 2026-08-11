/* Ghidra address: 015ad940 */
/* Ghidra symbol: FUN_015ad940 */


undefined1 FUN_015ad940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  short *local_28;
  int local_20;
  undefined1 local_19;
  
  local_28 = (short *)0x0;
  local_19 = 0;
  if (param_1 != 0) {
    FUN_0043ea00(&local_28,param_2);
    if (local_28 == (short *)0x0) {
      FUN_00410ae0(param_1,&local_28);
      if (*local_28 == 0x54) {
        FUN_00416e20(&local_28,1,1);
      }
      local_20 = FUN_004170c0(&DAT_015ada94,local_28,1);
      if (0 < local_20) {
        FUN_00416e20(&local_28,1,local_20);
      }
    }
    FUN_00416cd0(&local_28,3,local_28,&LAB_015adaa4,param_3);
    plVar1 = (longlong *)FUN_015adab0();
    local_20 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    if (local_20 < 0) {
      plVar1 = (longlong *)FUN_015adab0();
      (**(code **)(*plVar1 + 0x80))(plVar1,local_28,param_1);
    }
    else {
      plVar1 = (longlong *)FUN_015adab0();
      (**(code **)(*plVar1 + 0x40))(plVar1,local_20,local_28);
    }
    local_19 = 1;
  }
  FUN_00414480(&local_28);
  return local_19;
}

