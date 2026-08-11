/* Ghidra address: 0086ae40 */
/* Ghidra symbol: FUN_0086ae40 */


undefined4 FUN_0086ae40(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_28;
  longlong *local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  FUN_008687d0(param_1,&local_28);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x1e0))(local_28,uVar2);
  FUN_0041d630(uVar1);
  uVar1 = (**(code **)(*local_20 + 0x58))(local_20,local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  local_10 = 0;
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return local_10;
}

