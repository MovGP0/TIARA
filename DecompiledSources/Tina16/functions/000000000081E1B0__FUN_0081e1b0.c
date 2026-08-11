/* Ghidra address: 0081e1b0 */
/* Ghidra symbol: FUN_0081e1b0 */


void FUN_0081e1b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_28 [4];
  int local_24;
  int local_1c;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 != '\0') {
    FUN_00785c20(param_1,param_2);
    FUN_00819760(param_1,local_28);
    *(int *)(*(longlong *)(param_2 + 0x10) + 0x1c) = local_24 + local_1c;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

