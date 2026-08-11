/* Ghidra address: 004d09e0 */
/* Ghidra symbol: FUN_004d09e0 */


undefined4 FUN_004d09e0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_1d;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  lVar1 = FUN_0041f930();
  *(longlong **)(lVar1 + 0x230) = param_1;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(char *)((longlong)param_1 + 0x1a) == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  local_1c = (undefined4)param_1[4];
  local_1d = *(char *)((longlong)param_1 + 0x1c);
  (**(code **)*param_1)(param_1);
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  FUN_004d06e0();
  if (local_1d != '\0') {
    FUN_00410f20(param_1);
  }
  FUN_00414320(local_1c);
  return local_1c;
}

