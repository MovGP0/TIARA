/* Ghidra address: 00d44540 */
/* Ghidra symbol: FUN_00d44540 */


void FUN_00d44540(longlong *param_1,longlong param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 10);
  if ((((sVar1 == 10) || (sVar1 == 9)) || (sVar1 == 8)) || ((sVar1 == 7 || (sVar1 == 1)))) {
    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  return;
}

