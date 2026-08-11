/* Ghidra address: 00865c50 */
/* Ghidra symbol: FUN_00865c50 */


undefined4 FUN_00865c50(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  FUN_008659d0(param_1,&local_20);
  uVar1 = (**(code **)(*local_20 + 0x168))(local_20,local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  local_10 = 0;
  FUN_0041b800(&local_20);
  return local_10;
}

