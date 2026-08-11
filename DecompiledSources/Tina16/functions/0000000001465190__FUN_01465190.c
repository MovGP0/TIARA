/* Ghidra address: 01465190 */
/* Ghidra symbol: FUN_01465190 */


void FUN_01465190(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"KeepresultsMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  FUN_007e2d20(*(longlong *)(param_1 + 0x7e8),
               *(char *)(*(longlong *)(param_1 + 0x7e8) + 0x80) == '\0');
  FUN_00414480(&local_10);
  return;
}

