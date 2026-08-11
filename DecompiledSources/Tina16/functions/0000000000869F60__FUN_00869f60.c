/* Ghidra address: 00869f60 */
/* Ghidra symbol: FUN_00869f60 */


undefined4 FUN_00869f60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *local_20;
  short local_18 [4];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  FUN_008687d0(param_1,&local_20);
  uVar1 = (**(code **)(*local_20 + 0x228))(local_20,local_18);
  FUN_0041d630(uVar1);
  *(bool *)param_2 = local_18[0] != 0;
  local_10 = 0;
  FUN_0041b800(&local_20);
  return local_10;
}

