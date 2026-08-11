/* Ghidra address: 01812600 */
/* Ghidra symbol: FUN_01812600 */


bool FUN_01812600(longlong param_1)

{
  int iVar1;
  bool local_11;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x100) == 0) {
    local_11 = *(longlong *)(param_1 + 0x38) == 0;
  }
  else {
    FUN_0058ce80(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x100),
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xb0) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0xac) * 8));
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),local_10);
    local_11 = iVar1 == 0;
  }
  FUN_00414480(&local_10);
  return local_11;
}

