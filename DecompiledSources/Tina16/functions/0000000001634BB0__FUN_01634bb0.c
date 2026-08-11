/* Ghidra address: 01634bb0 */
/* Ghidra symbol: FUN_01634bb0 */


undefined4 FUN_01634bb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x578) + 0x30))(*(longlong **)(param_1 + 0x578));
  return *(undefined4 *)(lVar1 + 0x10);
}

