/* Ghidra address: 015c0fa0 */
/* Ghidra symbol: FUN_015c0fa0 */


void FUN_015c0fa0(int param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_1d;
  int local_1c;
  
  iVar2 = param_2 + param_1 + -1;
  if (param_2 <= iVar2) {
    iVar2 = (iVar2 - param_2) + 1;
    local_1c = param_2;
    do {
      local_1d = *(undefined1 *)(*param_3 + (longlong)local_1c);
      uVar1 = FUN_015c0ec0(&local_1d,param_4);
      *(undefined1 *)(*param_3 + (longlong)local_1c) = uVar1;
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

