/* Ghidra address: 00b4d6b0 */
/* Ghidra symbol: FUN_00b4d6b0 */


undefined1 FUN_00b4d6b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  return *(undefined1 *)(lVar1 + 5);
}

