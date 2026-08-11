/* Ghidra address: 00866c70 */
/* Ghidra symbol: FUN_00866c70 */


undefined4 FUN_00866c70(undefined8 param_1,undefined8 param_2,short *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined1 *local_18;
  undefined4 local_10;
  
  local_18 = auStack_58;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  FUN_00866490(param_1,&local_28);
  FUN_004168e0(&local_30,param_2);
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*local_28 + 0x178))(local_28,local_30,uVar2);
  FUN_0041d630(uVar1);
  *param_3 = -(ushort)(local_20 != 0);
  local_10 = 0;
  FUN_00414520(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return local_10;
}

