/* Ghidra address: 00c59f40 */
/* Ghidra symbol: FUN_00c59f40 */


void FUN_00c59f40(longlong *param_1,short *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*param_2);
  if (cVar1 == '\0') {
    *param_2 = 0;
    thunk_FUN_03f3ed6d(0);
  }
  if (*param_2 != 0) {
    FUN_00680e40(param_1,param_2);
  }
  return;
}

