/* Ghidra address: 00d01ba0 */
/* Ghidra symbol: FUN_00d01ba0 */


undefined8
FUN_00d01ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_0041b910(param_5);
  local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_38 = param_5;
  FUN_00d01990(param_1,local_res18,local_res20,local_18);
  FUN_004b6dc0(local_18,0);
  lVar2 = FUN_00d05df0(param_1);
  FUN_008b0660(param_2,local_18,*(undefined8 *)(lVar2 + 0x20));
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  FUN_00414480(&local_res18);
  FUN_0041b800(&param_5);
  return param_2;
}

