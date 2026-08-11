/* Ghidra address: 014b7c70 */
/* Ghidra symbol: FUN_014b7c70 */


void FUN_014b7c70(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *PTR_DAT_02001ab0 = uVar1;
  return;
}

