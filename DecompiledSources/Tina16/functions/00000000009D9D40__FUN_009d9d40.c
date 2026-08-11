/* Ghidra address: 009d9d40 */
/* Ghidra symbol: FUN_009d9d40 */


undefined4 FUN_009d9d40(longlong *param_1,short *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_20;
  int local_18 [2];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,uVar2);
  FUN_0041d630(uVar1);
  uVar1 = (**(code **)(*local_20 + 0x20))(local_20,local_18);
  FUN_0041d630(uVar1);
  *param_2 = -(ushort)(0 < local_18[0]);
  local_10 = 0;
  FUN_0041b800(&local_20);
  return local_10;
}

