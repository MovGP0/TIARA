/* Ghidra address: 01634b90 */
/* Ghidra symbol: FUN_01634b90 */


undefined4 FUN_01634b90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x578) + 0x30))(*(longlong **)(param_1 + 0x578));
  return *(undefined4 *)(lVar1 + 0xc);
}

