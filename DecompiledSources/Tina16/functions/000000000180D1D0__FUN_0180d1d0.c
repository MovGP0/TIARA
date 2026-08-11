/* Ghidra address: 0180d1d0 */
/* Ghidra symbol: FUN_0180d1d0 */


longlong FUN_0180d1d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_14;
  longlong local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_14 = FUN_004170c0(&DAT_0180d418,param_2,1);
  if (local_14 == 0) {
    if (param_1 != 0) {
      local_10 = FUN_004d3a80(param_1,param_2);
    }
    if (local_10 == 0) {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_0193aeb8);
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
        local_10 = FUN_004d3a80(*(undefined8 *)(param_1 + 8),param_2);
      }
    }
  }
  else {
    FUN_00416dc0(&local_20,param_2,1,local_14 + -1);
    FUN_00416dc0(&local_28,param_2,local_14 + 1,0xff);
    lVar2 = FUN_004a4fd0(local_20);
    if (lVar2 != 0) {
      local_14 = FUN_004170c0(&DAT_0180d418,local_28,1);
      if (local_14 == 0) {
        local_10 = FUN_004d3a80(lVar2,local_28);
      }
      else {
        FUN_00416dc0(&local_20,local_28,1,local_14 + -1);
        FUN_00416dc0(&local_28,local_28,local_14 + 1,0xff);
        lVar2 = FUN_004d3a80(lVar2,local_20);
        if (lVar2 != 0) {
          local_10 = FUN_004d3a80(lVar2,local_28);
        }
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  return local_10;
}

