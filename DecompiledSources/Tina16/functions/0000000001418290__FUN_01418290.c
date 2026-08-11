/* Ghidra address: 01418290 */
/* Ghidra symbol: FUN_01418290 */


void FUN_01418290(longlong param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
  *(undefined4 *)(param_1 + 0xf8c) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a8);
  cVar1 = FUN_014181d0(param_1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xf8c) == 2)) {
    *(undefined4 *)(param_1 + 0xf8c) = 3;
  }
  if ((*(int *)(param_1 + 0xf88) != 0) && (*(char *)(param_1 + 0x768) != '\0')) {
    FUN_01418bb0(param_1,L"noname.asm");
  }
  FUN_01417bc0(param_1);
  return;
}

