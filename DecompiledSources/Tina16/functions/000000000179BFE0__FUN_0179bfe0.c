/* Ghidra address: 0179bfe0 */
/* Ghidra symbol: FUN_0179bfe0 */


void FUN_0179bfe0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  (**(code **)(**(longlong **)(param_1 + 0xb10) + 0xe8))
            (*(longlong **)(param_1 + 0xb10),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),(int)uVar1 != -1) & 0xffffffff);
  return;
}

