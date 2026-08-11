/* Ghidra address: 00f70180 */
/* Ghidra symbol: FUN_00f70180 */


undefined8 FUN_00f70180(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_28;
  
  if (param_2 == 0) {
    lVar1 = FUN_00f6f060(param_1,0);
    local_28 = **(undefined8 **)(lVar1 + 0x20);
  }
  else {
    lVar1 = FUN_00f6f060(param_1,*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -3);
    local_28 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 8);
  }
  return local_28;
}

