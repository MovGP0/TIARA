/* Ghidra address: 00ec4120 */
/* Ghidra symbol: FUN_00ec4120 */


undefined8 FUN_00ec4120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (DAT_01ef6a40 == '\0') {
    FUN_00ec0240();
  }
  FUN_00414480(param_1);
  FUN_00414480(&local_28);
  FUN_00eaebb0(&local_28,L"DigitalICs",local_res10);
  if (local_28 == 0) {
    plVar3 = (longlong *)FUN_00eae5f0(L"tina",local_res18);
    if (plVar3 != (longlong *)0x0) {
      FUN_00ea9ca0(&local_50,local_res10);
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,L"DigitalICs",local_50,0);
      FUN_0043ea00(local_20,local_48);
      if (local_20[0] != 0) {
        FUN_00ea99b0(&local_58,local_20);
        FUN_00ea9ef0(param_1,local_58);
      }
    }
  }
  else {
    iVar1 = FUN_004170c0(&DAT_00ec43c4,local_28,1);
    if (iVar1 < 1) {
      FUN_00ea9ef0(param_1,local_28);
    }
    else {
      iVar1 = FUN_004170c0(&DAT_00ec43c4,local_28,1);
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00416dc0(&local_30,local_28,iVar1 + 2,uVar2);
      FUN_00ea9ef0(param_1,local_30);
      uVar2 = FUN_004170c0(&DAT_00ec43c4,local_28,1);
      FUN_00416dc0(&local_40,local_28,1,uVar2);
      FUN_00416ad0(&local_40,local_res10);
      FUN_00ea9ef0(&local_38,local_40);
      FUN_00414b50(&local_res10,local_38);
    }
  }
  FUN_00414560(&local_58,8);
  FUN_00414560(&local_res10,2);
  return param_1;
}

