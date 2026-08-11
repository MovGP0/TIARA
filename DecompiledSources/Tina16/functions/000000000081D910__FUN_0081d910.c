/* Ghidra address: 0081d910 */
/* Ghidra symbol: FUN_0081d910 */


void FUN_0081d910(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
    if ((param_1[0x14] != 0) && (*(int *)(param_2 + 8) == 5)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

