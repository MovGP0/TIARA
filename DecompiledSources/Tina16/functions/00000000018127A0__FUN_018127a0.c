/* Ghidra address: 018127a0 */
/* Ghidra symbol: FUN_018127a0 */


undefined1 FUN_018127a0(longlong param_1)

{
  undefined1 local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x100) == 0) {
    local_31 = 0;
  }
  else {
    FUN_0058d710(&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x100),
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xb0) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xac) * 8));
    local_31 = FUN_0046f320(param_1 + 0x38,&local_30);
  }
  FUN_00460ba0(&local_30);
  return local_31;
}

