/* Ghidra address: 00863710 */
/* Ghidra symbol: FUN_00863710 */


undefined4 FUN_00863710(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  *param_3 = 0;
  FUN_00863030(&local_10,param_2);
  FUN_0041b800(&local_18);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))
                    (*(longlong **)(param_1 + 0x18),local_10,&local_18);
  FUN_0041d630(uVar1);
  if (local_18 == local_10) {
    FUN_0041b840(param_3,param_2);
  }
  else {
    FUN_00862f00(param_3,local_18);
  }
  FUN_00417840(&local_18,&LAB_0069aa08,2);
  return 0;
}

