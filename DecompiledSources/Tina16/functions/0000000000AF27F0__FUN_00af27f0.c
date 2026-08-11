/* Ghidra address: 00af27f0 */
/* Ghidra symbol: FUN_00af27f0 */


void FUN_00af27f0(longlong param_1,int *param_2)

{
  int local_1c;
  
  if (param_2[1] != 0) {
    local_1c = *(int *)(*(longlong *)(param_1 + 0x758) + 0x494) + param_2[1];
    FUN_00af2730(param_1,0,4,&local_1c);
    FUN_0068e980(*(undefined8 *)(param_1 + 0x758),local_1c);
  }
  if (*param_2 != 0) {
    local_1c = *(int *)(*(longlong *)(param_1 + 0x750) + 0x494) + *param_2;
    FUN_00af2660(param_1,0,4,&local_1c);
    FUN_0068e980(*(undefined8 *)(param_1 + 0x750),local_1c);
  }
  return;
}

