/* Ghidra address: 00865ad0 */
/* Ghidra symbol: FUN_00865ad0 */


undefined4 FUN_00865ad0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *local_18;
  undefined4 local_10;
  
  local_18 = (longlong *)0x0;
  FUN_008659d0(param_1,&local_18);
  uVar1 = (**(code **)(*local_18 + 0x188))(local_18,param_2,param_3);
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

