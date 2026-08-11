/* Ghidra address: 0197b810 */
/* Ghidra symbol: FUN_0197b810 */


void FUN_0197b810(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414ad0(param_1 + 0x80,param_2);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_00441640(&local_10,*(undefined8 *)(param_1 + 0x80));
    FUN_00414ad0(*(longlong *)(param_1 + 0x128) + 0x90,local_10);
    FUN_00414ad0(*(longlong *)(param_1 + 0x128) + 0x98,*(undefined8 *)(param_1 + 0x80));
  }
  FUN_00414480(&local_10);
  return;
}

