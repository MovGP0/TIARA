/* Ghidra address: 01d46cc0 */
/* Ghidra symbol: FUN_01d46cc0 */


void FUN_01d46cc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,&local_10,0);
  FUN_0040d200(&local_38,0x28,0);
  local_38 = 0x28;
  local_30 = FUN_00416740(param_2);
  local_34 = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xffffffff;
  local_18 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
  FUN_0042a5f0(uVar1,local_10,3,&local_38);
  FUN_00414480(&local_10);
  return;
}

