/* Ghidra address: 0181f800 */
/* Ghidra symbol: FUN_0181f800 */


void FUN_0181f800(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00415bd0(param_2,param_1 + 0x10,0x7fffffff);
  }
  else {
    FUN_004156b0(&local_10,param_2,&LAB_0181f8c4);
    FUN_00415bd0(local_10,param_1 + 0x10,0x7fffffff);
  }
  iVar1 = FUN_00414cd0(*(undefined8 *)(param_1 + 0x10));
  if (0x1000 < iVar1) {
    FUN_0181f7b0(param_1);
  }
  FUN_004144d0(&local_10);
  return;
}

