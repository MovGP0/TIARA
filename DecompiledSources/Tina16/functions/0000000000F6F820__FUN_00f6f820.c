/* Ghidra address: 00f6f820 */
/* Ghidra symbol: FUN_00f6f820 */


undefined8 FUN_00f6f820(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_00f6f0c0();
  if (lVar1 == 0) {
    FUN_00f60670(0);
  }
  else {
    local_20 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar1 + 0x80) + 4 + (longlong)param_2 * 8),
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x80) + (longlong)param_2 * 8));
  }
  return local_20;
}

