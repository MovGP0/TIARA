/* Ghidra address: 017b9240 */
/* Ghidra symbol: FUN_017b9240 */


void FUN_017b9240(longlong *param_1,undefined8 param_2)

{
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
    }
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  return;
}

