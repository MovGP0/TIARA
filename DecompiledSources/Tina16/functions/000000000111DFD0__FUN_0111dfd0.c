/* Ghidra address: 0111dfd0 */
/* Ghidra symbol: FUN_0111dfd0 */


void FUN_0111dfd0(longlong *param_1)

{
  char cVar1;
  
  *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
  *(undefined1 *)((longlong)param_1 + 0x163) = 5;
  while( true ) {
    if (0x20 < *(ushort *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2)) {
      return;
    }
    cVar1 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    if (cVar1 != '\0') break;
    *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
  }
  return;
}

