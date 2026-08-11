/* Ghidra address: 00865090 */
/* Ghidra symbol: FUN_00865090 */


undefined4 FUN_00865090(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  uVar2 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                    (*(longlong **)(param_1 + 0x18),param_2,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(param_3,local_28);
  local_20 = 0;
  FUN_0041b800(&local_28);
  return local_20;
}

