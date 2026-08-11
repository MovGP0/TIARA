/* Ghidra address: 008654f0 */
/* Ghidra symbol: FUN_008654f0 */


undefined4 FUN_008654f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  *param_4 = 0;
  FUN_004168e0(&local_30,param_3);
  FUN_004168e0(&local_38,param_2);
  uVar2 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                    (*(longlong **)(param_1 + 0x18),local_30,local_38,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(param_4,local_28);
  local_20 = 0;
  FUN_004145c0(&local_38,2);
  FUN_0041b800(&local_28);
  return local_20;
}

