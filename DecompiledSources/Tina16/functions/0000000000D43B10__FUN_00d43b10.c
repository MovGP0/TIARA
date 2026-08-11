/* Ghidra address: 00d43b10 */
/* Ghidra symbol: FUN_00d43b10 */


int * FUN_00d43b10(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_00787be0(param_1[3],param_2);
  thunk_FUN_04176532(param_2,0xfffffffe,0xfffffffe);
  cVar1 = FUN_00787a60(param_1[3]);
  if (cVar1 == '\x01') {
    iVar2 = (**(code **)(*param_1 + 0x50))(param_1,2);
    param_2[2] = *param_2 + iVar2 + -1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x50))(param_1,2);
    *param_2 = (param_2[2] - iVar2) + 1;
  }
  return param_2;
}

