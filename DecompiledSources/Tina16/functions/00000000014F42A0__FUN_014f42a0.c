/* Ghidra address: 014f42a0 */
/* Ghidra symbol: FUN_014f42a0 */


void FUN_014f42a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x268))
            (*(longlong **)(param_1 + 0x7e8),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),(int)uVar1 != 2) & 0xffffffff);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x128))
            (*(longlong **)(param_1 + 0x7e8),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),(int)uVar1 != 2) & 0xffffffff);
  return;
}

