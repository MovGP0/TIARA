/* Ghidra address: 00867730 */
/* Ghidra symbol: FUN_00867730 */


undefined4 FUN_00867730(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *local_18;
  undefined4 local_10;
  
  local_18 = (longlong *)0x0;
  FUN_00866490(param_1,&local_18);
  uVar1 = (**(code **)(*local_18 + 0x198))(local_18);
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

