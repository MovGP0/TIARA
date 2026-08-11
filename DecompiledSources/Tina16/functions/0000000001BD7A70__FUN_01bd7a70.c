/* Ghidra address: 01bd7a70 */
/* Ghidra symbol: FUN_01bd7a70 */


void FUN_01bd7a70(longlong *param_1)

{
  char cVar1;
  
  FUN_01c00b50(param_1);
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),(int)param_1[0x13]
             ,*(undefined4 *)((longlong)param_1 + 0x9c));
  cVar1 = FUN_01c02d10(param_1);
  if (cVar1 == '\0') {
    FUN_01bd7380(param_1);
  }
  return;
}

