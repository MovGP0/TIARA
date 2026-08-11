/* Ghidra address: 01a4c330 */
/* Ghidra symbol: FUN_01a4c330 */


char FUN_01a4c330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_34;
  undefined8 local_30;
  char local_21;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\Design Tool");
  FUN_00416ba0(&local_48,local_30,L"\\*.tsc");
  local_20 = (longlong *)FUN_01603790(local_48,0x20);
  local_21 = FUN_01b22620(local_20,local_res10,&local_34,1);
  if (local_21 == '\0') {
    FUN_01a3c8e0(&local_58,local_res10);
    FUN_00414b50(&local_res10,local_58);
    local_21 = FUN_01b22620(local_20,local_res10,&local_34,1);
    if (local_21 != '\0') {
      (**(code **)(*local_20 + 0x18))(local_20,&local_60,local_34);
      FUN_00414ad0(local_res18,local_60);
    }
  }
  else {
    (**(code **)(*local_20 + 0x18))(local_20,&local_50,local_34);
    FUN_00414ad0(local_res18,local_50);
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_60,4);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res10);
  return local_21;
}

