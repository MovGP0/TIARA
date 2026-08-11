/* Ghidra address: 0074c260 */
/* Ghidra symbol: FUN_0074c260 */


void FUN_0074c260(longlong *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,param_2);
  if (((cVar1 != '\0') && (*param_2 <= *(int *)((longlong)param_1 + 0x34c))) &&
     ((char)param_1[100] != '\0')) {
    *param_2 = 0;
  }
  return;
}

