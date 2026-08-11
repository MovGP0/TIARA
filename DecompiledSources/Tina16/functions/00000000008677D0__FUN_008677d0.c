/* Ghidra address: 008677d0 */
/* Ghidra symbol: FUN_008677d0 */


undefined4 FUN_008677d0(longlong param_1,undefined4 param_2,undefined8 *param_3)

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
  *param_3 = 0;
  FUN_0041b890(&local_28,*(undefined8 *)(param_1 + 0x18),&DAT_008678dc);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x198))(local_28,param_2,uVar2);
  FUN_0041d630(uVar1);
  FUN_00862f00(&local_18,local_20);
  FUN_0041b890(param_3,local_18,&DAT_008678ec);
  local_10 = 0;
  FUN_00417840(&local_28,&LAB_0069ac78,2);
  FUN_0041b800(&local_18);
  return local_10;
}

