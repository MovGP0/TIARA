/* Ghidra address: 00866910 */
/* Ghidra symbol: FUN_00866910 */


undefined4
FUN_00866910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_30 = (longlong *)0x0;
  *param_4 = 0;
  FUN_00866490(param_1,&local_30);
  uVar2 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(*local_30 + 0x88))(local_30,uVar2);
  FUN_0041d630(uVar1);
  FUN_004168e0(&local_38,param_3);
  FUN_004168e0(&local_40,param_2);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x60))(local_28,local_38,local_40,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(&local_18,local_20);
  FUN_0041b890(param_4,local_18,&DAT_00866a90);
  local_10 = 0;
  FUN_004145c0(&local_40,2);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

