/* Ghidra address: 0086a2d0 */
/* Ghidra symbol: FUN_0086a2d0 */


undefined4 FUN_0086a2d0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  FUN_008687d0(param_1,&local_20);
  uVar1 = (**(code **)(*local_20 + 0x1d8))(local_20,local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  local_10 = 0;
  FUN_0041b800(&local_20);
  return local_10;
}

