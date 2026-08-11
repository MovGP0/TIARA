/* Ghidra address: 01bfc030 */
/* Ghidra symbol: FUN_01bfc030 */


char FUN_01bfc030(longlong param_1)

{
  int iVar1;
  char local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  local_21 = FUN_005b4b00(param_1);
  if (local_21 != '\0') {
    FUN_01bfd990(*(undefined8 *)(param_1 + 0x20),&local_10);
    iVar1 = FUN_00416db0(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xd0));
    local_21 = iVar1 == 0;
    if ((!(bool)local_21) &&
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x30) != '\0')) {
      FUN_01bfd990(*(undefined8 *)(param_1 + 0x20),&local_20);
      FUN_007e8d80(&local_18,local_20);
      iVar1 = FUN_00416db0(local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xd0));
      local_21 = iVar1 == 0;
    }
  }
  FUN_00414560(&local_20,3);
  return local_21;
}

