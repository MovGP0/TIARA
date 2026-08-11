/* Ghidra address: 018af0f0 */
/* Ghidra symbol: FUN_018af0f0 */


void FUN_018af0f0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_018aa2d0(*(undefined8 *)(param_1 + 0x848));
  lVar1 = FUN_018af290(param_1);
  if (*(longlong *)(*(longlong *)(lVar1 + 0x240) + 0x38) == 0) {
    FUN_0180bfe0(&local_10,100);
    FUN_0064de00(param_1,local_10);
  }
  else {
    lVar1 = FUN_018af290(param_1);
    FUN_0064de00(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x240) + 0x38));
  }
  FUN_00414480(&local_10);
  return;
}

