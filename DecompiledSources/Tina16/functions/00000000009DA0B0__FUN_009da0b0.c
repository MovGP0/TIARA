/* Ghidra address: 009da0b0 */
/* Ghidra symbol: FUN_009da0b0 */


undefined4 FUN_009da0b0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_30;
  int local_28 [2];
  longlong *local_20;
  int local_18 [2];
  undefined4 local_10;
  
  local_30 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  uVar2 = FUN_0041b800(&local_20);
  uVar1 = FUN_009d9860(*(undefined8 *)(param_1 + 0x18),uVar2);
  FUN_0041d630(uVar1);
  uVar1 = (**(code **)(*local_20 + 0x20))(local_20,local_18);
  FUN_0041d630(uVar1);
  uVar2 = FUN_0041b800(&local_30);
  uVar1 = FUN_009d9ad0(*(undefined8 *)(param_1 + 0x18),uVar2);
  FUN_0041d630(uVar1);
  uVar1 = (**(code **)(*local_30 + 0x20))(local_30,local_28);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0] + local_28[0];
  local_10 = 0;
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_20);
  return local_10;
}

