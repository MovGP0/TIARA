/* Ghidra address: 010e1950 */
/* Ghidra symbol: FUN_010e1950 */


void FUN_010e1950(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_010e17c0(*(undefined1 *)(param_1 + 0x7f9),0);
  *(longlong *)(param_1 + 0x8c0) = lVar1;
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(lVar1 + 0x408);
  *(longlong *)
   (*(longlong *)(param_1 + 0x8c0) + -0x38 + (ulonglong)*(byte *)(param_1 + 0x7fa) * 0x40 +
    (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20 + (longlong)*(int *)(param_1 + 0x7e8) * 8) =
       param_1;
  if (*(char *)(param_1 + 0x7fa) != '\x03') {
    FUN_010db750();
  }
  return;
}

