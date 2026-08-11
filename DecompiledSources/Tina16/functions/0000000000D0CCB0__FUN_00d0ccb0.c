/* Ghidra address: 00d0ccb0 */
/* Ghidra symbol: FUN_00d0ccb0 */


undefined1 FUN_00d0ccb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char *local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = (char *)0x0;
  local_59 = 0;
  if (param_1 != 0) {
    FUN_00416880(&local_38,param_2);
    FUN_0043ea00(local_30,local_38);
    FUN_00415dd0(&local_20,local_30[0],0);
    if (local_20 == (char *)0x0) {
      FUN_00410ae0(param_1,&local_40);
      FUN_00415dd0(&local_20,local_40,0);
      if (*local_20 == 'T') {
        FUN_00415b50(&local_20,1,1);
      }
      FUN_00416880(&local_48,local_20);
      iVar1 = FUN_004170c0(&DAT_00d0cedc,local_48,1);
      if (0 < iVar1) {
        FUN_00415b50(&local_20,1,iVar1);
      }
    }
    FUN_00415980(&local_20,3,local_20,&DAT_00d0ceec,param_3);
    plVar2 = (longlong *)FUN_00d0cef0();
    iVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1);
    if (iVar1 < 0) {
      plVar2 = (longlong *)FUN_00d0cef0();
      FUN_00416880(&local_50,local_20);
      (**(code **)(*plVar2 + 0x80))(plVar2,local_50,param_1);
    }
    else {
      plVar2 = (longlong *)FUN_00d0cef0();
      FUN_00416880(&local_58,local_20);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar1,local_58);
    }
    local_59 = 1;
  }
  FUN_00414560(&local_58,6);
  FUN_004144d0(&local_20);
  return local_59;
}

