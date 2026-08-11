/* Ghidra address: 0109f7b0 */
/* Ghidra symbol: FUN_0109f7b0 */


void FUN_0109f7b0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa28) + 0x18);
    FUN_0109f6f0(local_20,*(undefined8 *)(lVar1 + 8));
    FUN_00f7d200(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),local_20[0]);
    FUN_00410f20(lVar1);
    FUN_0109d7c0(param_1,1);
  }
  FUN_00414480(local_20);
  return;
}

