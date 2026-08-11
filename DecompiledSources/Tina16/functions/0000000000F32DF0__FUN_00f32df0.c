/* Ghidra address: 00f32df0 */
/* Ghidra symbol: FUN_00f32df0 */


undefined8 FUN_00f32df0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8);
  if ((lVar1 == 0) || (*(ulonglong *)(lVar1 + -8) <= uVar2)) {
    lVar1 = FUN_00410a90();
  }
  return *(undefined8 *)(lVar1 + uVar2 * 8);
}

