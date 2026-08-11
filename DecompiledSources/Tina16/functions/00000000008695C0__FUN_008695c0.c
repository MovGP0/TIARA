/* Ghidra address: 008695c0 */
/* Ghidra symbol: FUN_008695c0 */


undefined4 FUN_008695c0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  *param_2 = 0;
  FUN_008687d0(param_1,&local_28);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x168))(local_28,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(&local_18,local_20);
  FUN_0041b890(param_2,local_18,&DAT_008696bc);
  local_10 = 0;
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

