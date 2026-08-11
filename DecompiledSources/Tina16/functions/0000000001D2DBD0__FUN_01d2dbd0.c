/* Ghidra address: 01d2dbd0 */
/* Ghidra symbol: FUN_01d2dbd0 */


void FUN_01d2dbd0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    FUN_01d2dc30(param_2,*(int *)((longlong)param_1 + 0x14) + 2,(int)param_1[3] + -1,
                 *(int *)((longlong)param_1 + 0x1c) + 1,(int)param_1[4] + 1,0xffffff);
  }
  return;
}

