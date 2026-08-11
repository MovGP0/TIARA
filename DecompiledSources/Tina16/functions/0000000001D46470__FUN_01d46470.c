/* Ghidra address: 01d46470 */
/* Ghidra symbol: FUN_01d46470 */


void FUN_01d46470(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,&local_10,0);
  local_48 = 0x38;
  local_40 = FUN_00416740(param_2);
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
  FUN_01d46fd0(param_1,uVar1,local_10,&local_48);
  FUN_00414480(&local_10);
  return;
}

