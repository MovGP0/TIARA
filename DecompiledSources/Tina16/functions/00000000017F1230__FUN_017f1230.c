/* Ghidra address: 017f1230 */
/* Ghidra symbol: FUN_017f1230 */


undefined1
FUN_017f1230(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined *local_40;
  ulonglong local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_10 = 0;
  local_48 = 0;
  local_40 = (undefined *)CONCAT71(local_40._1_7_,1);
  FUN_017f0f40(param_1,param_2,param_3,*param_4);
  cVar1 = FUN_017e28e0(param_1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_4,*(undefined8 *)(param_1 + 0x2e0));
    FUN_00414480(&local_10);
    local_20 = *(undefined8 *)(param_1 + 0x570);
    local_48 = local_48 & 0xffffffff00000000;
    local_40 = PTR_DAT_02004830;
    FUN_00448510(&local_10,local_20,0,0x12);
    FUN_00414ad0(param_5,local_10);
    FUN_00414480(&local_10);
    FUN_004169a0(&local_38,param_1 + 0x5f9);
    local_48 = local_38;
    local_40 = &LAB_017f1428;
    FUN_00416cd0(param_5,4,*param_5,&PTR_DAT_017f1414);
    local_11 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x2d8) == 0xc) {
      local_11 = 3;
    }
    else {
      local_11 = 2;
    }
    FUN_00414480(param_5);
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return local_11;
}

