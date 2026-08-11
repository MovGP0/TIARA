/* Ghidra address: 00867090 */
/* Ghidra symbol: FUN_00867090 */


undefined4 FUN_00867090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_28 = (longlong *)0x0;
  FUN_00866490(param_1,&local_28);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x88))(local_28,uVar2);
  FUN_0041d630(uVar1);
  FUN_004168e0(&local_30,param_3);
  FUN_004168e0(&local_38,param_2);
  uVar2 = FUN_0041b800(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x68))(local_20,local_30,local_38,uVar2);
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_004145c0(&local_38,2);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

