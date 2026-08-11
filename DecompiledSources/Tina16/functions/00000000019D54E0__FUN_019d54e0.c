/* Ghidra address: 019d54e0 */
/* Ghidra symbol: FUN_019d54e0 */


void FUN_019d54e0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  puVar1 = auStack_48;
  if (*(char *)(param_1 + 0x810) == '\0') {
    FUN_019d5d90(param_1,1);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_019d6380(param_1,*(char *)(param_1 + 0x810) == '\0');
  return;
}

