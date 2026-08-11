/* Ghidra address: 0164cc10 */
/* Ghidra symbol: FUN_0164cc10 */


int FUN_0164cc10(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int local_34;
  short *local_30 [2];
  
  local_30[0] = (short *)0x0;
  local_34 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
      if (*local_30[0] == 0x56) {
        local_34 = local_34 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return local_34;
}

