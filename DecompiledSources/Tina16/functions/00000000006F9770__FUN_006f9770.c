/* Ghidra address: 006f9770 */
/* Ghidra symbol: FUN_006f9770 */


void FUN_006f9770(longlong param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if (((char)param_2 == '\0') && (-1 < param_4)) {
    iVar1 = FUN_0064d0b0(param_1);
    if ((param_4 < iVar1) && (-1 < param_5)) {
      iVar1 = FUN_0064d120(param_1);
      if ((param_5 <= iVar1) && (*(char *)(param_1 + 0x33a) == '\x02')) {
        FUN_006fa3b0(param_1,0);
      }
    }
  }
  return;
}

