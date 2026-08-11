/* Ghidra address: 00b4d170 */
/* Ghidra symbol: FUN_00b4d170 */


undefined2 FUN_00b4d170(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  return *(undefined2 *)(lVar1 + 2);
}

