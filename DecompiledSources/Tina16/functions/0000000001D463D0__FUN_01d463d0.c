/* Ghidra address: 01d463d0 */
/* Ghidra symbol: FUN_01d463d0 */


void FUN_01d463d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,local_20,0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
  FUN_01d46f70(param_1,uVar1,local_20[0]);
  uVar2 = FUN_00416740(local_20[0]);
  FUN_0042a560(uVar1,uVar2,0,0);
  FUN_00414480(local_20);
  return;
}

