/* Ghidra address: 006d9700 */
/* Ghidra symbol: FUN_006d9700 */


void FUN_006d9700(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((char)param_1[0x95] == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  else {
    iVar1 = 0;
    if (param_1[0x94] != 0) {
      iVar1 = *(int *)(param_1[0x94] + -4);
    }
    *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  }
  return;
}

