/* Ghidra address: 008644d0 */
/* Ghidra symbol: FUN_008644d0 */


undefined4 FUN_008644d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *param_4 = 0;
  FUN_00863030(&local_30,param_2);
  FUN_00863030(&local_38,param_3);
  FUN_00468a90(&local_50,local_38);
  uVar2 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))
                    (*(longlong **)(param_1 + 0x18),local_30,&local_50,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(param_4,local_28);
  local_20 = 0;
  FUN_00460ba0(&local_50);
  FUN_00417840(&local_38,&LAB_0069aa08,3);
  return local_20;
}

