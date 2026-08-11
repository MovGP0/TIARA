/* Ghidra address: 004125a0 */
/* Ghidra symbol: FUN_004125a0 */


undefined1 FUN_004125a0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_28 = FUN_00411cd0(param_2);
  local_20 = (**(code **)(PTR_PTR_020069a0 + 0x10))();
  local_38 = *(undefined4 *)(param_2 + 4);
  FUN_00412340(param_1,&local_30);
  *(undefined4 *)(param_2 + 4) = 1;
  FUN_004120d0(param_2);
  iVar1 = (**(code **)(PTR_PTR_020069a0 + 0x20))(0,local_20,param_3);
  local_31 = iVar1 == 0;
  FUN_00411f00(param_2,0xffffffff);
  FUN_004123f0(param_1,&local_30);
  *(undefined4 *)(param_2 + 4) = local_38;
  (**(code **)(PTR_PTR_020069a0 + 0x18))(local_20);
  return local_31;
}

