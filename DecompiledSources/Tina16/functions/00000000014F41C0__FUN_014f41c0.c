/* Ghidra address: 014f41c0 */
/* Ghidra symbol: FUN_014f41c0 */


void FUN_014f41c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768));
  (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x128))
            (*(longlong **)(param_1 + 0x8b0),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),(int)uVar1 != 0) & 0xffffffff);
  return;
}

