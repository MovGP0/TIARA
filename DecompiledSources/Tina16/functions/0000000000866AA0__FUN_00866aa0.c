/* Ghidra address: 00866aa0 */
/* Ghidra symbol: FUN_00866aa0 */


undefined4 FUN_00866aa0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  *param_3 = 0;
  FUN_00866490(param_1,&local_20);
  FUN_004168e0(&local_28,param_2);
  uVar2 = FUN_0041b800(&local_18);
  uVar1 = (**(code **)(*local_20 + 400))(local_20,local_28,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862fb0(param_3,local_18);
  local_10 = 0;
  FUN_00414520(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

