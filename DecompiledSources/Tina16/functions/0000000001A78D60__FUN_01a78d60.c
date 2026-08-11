/* Ghidra address: 01a78d60 */
/* Ghidra symbol: FUN_01a78d60 */


void FUN_01a78d60(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"KeepResultsMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  FUN_007e2d20(*(longlong *)(param_1 + 0x8a0),
               *(char *)(*(longlong *)(param_1 + 0x8a0) + 0x80) == '\0');
  FUN_00414480(&local_10);
  return;
}

