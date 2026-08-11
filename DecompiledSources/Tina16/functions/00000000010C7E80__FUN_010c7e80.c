/* Ghidra address: 010c7e80 */
/* Ghidra symbol: FUN_010c7e80 */


bool FUN_010c7e80(undefined8 *param_1)

{
  longlong lVar1;
  char *pcVar2;
  char local_48 [48];
  
  pcVar2 = local_48;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pcVar2 = *param_1;
    param_1 = param_1 + 1;
    pcVar2 = (char *)((longlong)pcVar2 + 8);
  }
  return local_48[0] == '\x01';
}

