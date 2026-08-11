/* Ghidra address: 00848d60 */
/* Ghidra symbol: FUN_00848d60 */


void FUN_00848d60(longlong *param_1,char param_2)

{
  char cVar1;
  
  if ((char)param_1[0x59] != param_2) {
    FUN_006525b0(param_1,param_2);
    cVar1 = FUN_00781870();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

