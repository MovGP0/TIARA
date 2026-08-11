/* Ghidra address: 008672b0 */
/* Ghidra symbol: FUN_008672b0 */


undefined4 FUN_008672b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  *param_3 = 0;
  FUN_00866490(param_1,&local_28);
  FUN_00863030(&local_30,param_2);
  FUN_0041b890(&local_38,local_30,&DAT_008673ec);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x180))(local_28,local_38,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(&local_18,local_20);
  FUN_0041b890(param_3,local_18,&DAT_008673fc);
  local_10 = 0;
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

