/* Ghidra address: 0086a0c0 */
/* Ghidra symbol: FUN_0086a0c0 */


undefined4 FUN_0086a0c0(undefined8 param_1,char param_2)

{
  undefined4 uVar1;
  longlong *local_18;
  undefined4 local_10;
  
  local_18 = (longlong *)0x0;
  FUN_008687d0(param_1,&local_18);
  uVar1 = (**(code **)(*local_18 + 0x240))(local_18,-(ushort)(param_2 != '\0'));
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

