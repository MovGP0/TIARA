/* Ghidra address: 013b6140 */
/* Ghidra symbol: FUN_013b6140 */


undefined4 FUN_013b6140(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x58));
  FUN_013bc030(*(undefined8 *)(param_1 + 0x58),&local_18,*(undefined8 *)(param_1 + 0x30),1,0);
  uVar1 = FUN_013b6260(param_1,local_18);
  FUN_00414560(&local_30,5);
  return uVar1;
}

