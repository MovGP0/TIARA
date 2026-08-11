/* Ghidra address: 013b6e10 */
/* Ghidra symbol: FUN_013b6e10 */


undefined4 FUN_013b6e10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))
            (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_30);
  FUN_013bc030(*(undefined8 *)(param_1 + 0x40),&local_28,local_30,1,0);
  uVar1 = FUN_013b71b0(param_1,local_28);
  FUN_00414560(&local_30,3);
  return uVar1;
}

