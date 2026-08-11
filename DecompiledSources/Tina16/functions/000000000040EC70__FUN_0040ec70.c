/* Ghidra address: 0040ec70 */
/* Ghidra symbol: FUN_0040ec70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ec70(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414840(&local_10,*(longlong *)(param_1 + 0x30) + 0x2ec,
               (longlong)*(char *)(*(longlong *)(param_1 + 0x30) + 0x2ea),_DAT_02006a28);
  FUN_0040f200(*(undefined8 *)(param_1 + 0x30),local_10);
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x2ea) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x2eb) = 0;
  FUN_00414480(&local_10);
  return;
}

