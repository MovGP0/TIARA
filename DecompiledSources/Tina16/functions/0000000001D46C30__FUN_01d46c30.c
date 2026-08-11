/* Ghidra address: 01d46c30 */
/* Ghidra symbol: FUN_01d46c30 */


void FUN_01d46c30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,&local_10,0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
  FUN_0042a5b0(uVar1,local_10,2,param_2);
  FUN_00414480(&local_10);
  return;
}

