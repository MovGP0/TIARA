/* Ghidra address: 0179fc90 */
/* Ghidra symbol: FUN_0179fc90 */


void FUN_0179fc90(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  (**(code **)(**(longlong **)(param_1 + 0xc28) + 0xe8))
            (*(longlong **)(param_1 + 0xc28),
             CONCAT31((int3)(iVar1 - 1U >> 8),iVar1 - 1U < 0x80000000));
  return;
}

