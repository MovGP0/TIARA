/* Ghidra address: 014b7ba0 */
/* Ghidra symbol: FUN_014b7ba0 */


void FUN_014b7ba0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  *PTR_DAT_02004f10 = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))
            (*(longlong **)(param_1 + 0x6d8),*PTR_DAT_02004f10);
  return;
}

