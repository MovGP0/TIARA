/* Ghidra address: 00b060d0 */
/* Ghidra symbol: FUN_00b060d0 */


void FUN_00b060d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_248 [568];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_0064dbe0(param_1,1);
  uVar2 = FUN_0065b870(param_1);
  FUN_00b05e80(auStack_248,uVar2);
  uVar1 = (**(code **)(*(longlong *)param_1[0x94] + 0xb0))((longlong *)param_1[0x94],local_res18);
  (**(code **)(*param_1 + 0x268))(param_1,uVar1);
  FUN_00414480(&local_res18);
  return;
}

