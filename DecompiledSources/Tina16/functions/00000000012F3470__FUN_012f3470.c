/* Ghidra address: 012f3470 */
/* Ghidra symbol: FUN_012f3470 */


void FUN_012f3470(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_18 = 0;
  local_10 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
  thunk_FUN_04122806(uVar1,49000,3,0x23);
  FUN_00414480(&local_10);
  local_20 = FUN_00448ed0();
  FUN_0044a3a0(&local_10,L"yyyymmddhhnnss",local_20,PTR_DAT_02004830);
  FUN_00414b50(&local_18,local_10);
  FUN_00414480(&local_10);
  local_48 = 0;
  uVar1 = FUN_01318b60(&DAT_013080e0,1,local_18,local_res8);
  *(undefined8 *)PTR_DAT_02003e70 = uVar1;
  *(undefined1 *)(*(longlong *)PTR_DAT_02003e70 + 0x98) = local_res10;
  FUN_0131aef0(*(undefined8 *)PTR_DAT_02003e70);
  uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
  thunk_FUN_04132740(uVar1,49000);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res8);
  return;
}

