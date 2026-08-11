/* Ghidra address: 007dd140 */
/* Ghidra symbol: FUN_007dd140 */


void FUN_007dd140(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[4] + 0xac) = param_2;
  }
  return;
}

