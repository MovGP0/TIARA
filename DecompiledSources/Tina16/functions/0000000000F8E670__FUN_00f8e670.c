/* Ghidra address: 00f8e670 */
/* Ghidra symbol: FUN_00f8e670 */


undefined4 FUN_00f8e670(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_10 [8];
  
  lVar1 = FUN_00f8c610(param_1,local_10);
  return *(undefined4 *)(lVar1 + 0x100);
}

