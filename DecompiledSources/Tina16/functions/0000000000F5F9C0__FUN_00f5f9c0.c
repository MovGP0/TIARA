/* Ghidra address: 00f5f9c0 */
/* Ghidra symbol: FUN_00f5f9c0 */


void FUN_00f5f9c0(longlong param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))
            (*(longlong **)(param_1 + 0x748),
             CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x740) >> 8),
                      *(char *)(*(longlong *)(param_1 + 0x740) + 0x4a8) == '\x01'));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0xf0))(*(longlong **)(param_1 + 0x748));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x128))(*(longlong **)(param_1 + 0x750),uVar1);
  return;
}

