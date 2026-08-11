/* Ghidra address: 01419490 */
/* Ghidra symbol: FUN_01419490 */


void FUN_01419490(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_014181d0(param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0xf8c) != 3)) {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xf8c));
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6b0),2);
  }
  *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
  *(undefined1 *)(param_1 + 0x768) = 1;
  return;
}

