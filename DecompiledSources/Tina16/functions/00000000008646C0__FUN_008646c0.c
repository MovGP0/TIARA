/* Ghidra address: 008646c0 */
/* Ghidra symbol: FUN_008646c0 */


undefined4 FUN_008646c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_3 = 0;
  FUN_00863030(&local_30,param_2);
  uVar2 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                    (*(longlong **)(param_1 + 0x18),local_30,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(param_3,local_28);
  local_20 = 0;
  FUN_00417840(&local_30,&LAB_0069aa08,2);
  return local_20;
}

