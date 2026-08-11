/* Ghidra address: 007dd080 */
/* Ghidra symbol: FUN_007dd080 */


void FUN_007dd080(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1[4] + 0x150) = param_2;
  }
  return;
}

