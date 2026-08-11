/* Ghidra address: 01b5a4d0 */
/* Ghidra symbol: FUN_01b5a4d0 */


void FUN_01b5a4d0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xcf8) + 0x260))(*(longlong **)(param_1 + 0xcf8));
  (**(code **)(**(longlong **)(param_1 + 0xd58) + 0xf0))(*(longlong **)(param_1 + 0xd58),uVar1);
  return;
}

