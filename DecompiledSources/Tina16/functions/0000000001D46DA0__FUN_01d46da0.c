/* Ghidra address: 01d46da0 */
/* Ghidra symbol: FUN_01d46da0 */


void FUN_01d46da0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,local_20,0);
  FUN_00416cd0(&local_28,6,local_20[0],&DAT_01d46e98,param_2,L".htm",&LAB_01d46ec4,param_3);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
  uVar2 = FUN_00416740(local_28);
  FUN_0042a560(uVar1,uVar2,0,0);
  FUN_00414560(&local_28,2);
  return;
}

