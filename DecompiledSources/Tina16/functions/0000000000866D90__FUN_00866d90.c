/* Ghidra address: 00866d90 */
/* Ghidra symbol: FUN_00866d90 */


undefined4 FUN_00866d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  undefined4 local_10;
  
  local_18 = auStack_48;
  local_20 = 0;
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = FUN_00866910(param_1,param_2,param_3,uVar2);
  FUN_0041d630(uVar1);
  *param_4 = -(ushort)(local_20 != 0);
  local_10 = 0;
  FUN_0041b800(&local_20);
  return local_10;
}

