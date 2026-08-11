/* Ghidra address: 0077ea30 */
/* Ghidra symbol: FUN_0077ea30 */


void FUN_0077ea30(longlong *param_1)

{
  undefined1 uVar1;
  
  if (*(char *)((longlong)param_1 + 0x6a) != '\0') {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uVar1 = FUN_0061b360();
  *(undefined1 *)((longlong)param_1 + 0x6a) = uVar1;
  return;
}

