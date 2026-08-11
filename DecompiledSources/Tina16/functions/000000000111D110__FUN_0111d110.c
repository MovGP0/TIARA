/* Ghidra address: 0111d110 */
/* Ghidra symbol: FUN_0111d110 */


void FUN_0111d110(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x163) = 0;
  *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    if (cVar1 != '\0') break;
    *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
  }
  return;
}

