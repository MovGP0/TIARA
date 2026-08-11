/* Ghidra address: 017b9200 */
/* Ghidra symbol: FUN_017b9200 */


void FUN_017b9200(longlong *param_1,undefined8 param_2)

{
  if (((*(char *)((longlong)param_1 + 10) == '\0') &&
      (*(char *)((longlong)param_1 + 0x24) != '\x01')) &&
     (*(undefined1 *)((longlong)param_1 + 10) = 1, (char)param_1[1] != '\0')) {
    (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
  }
  return;
}

