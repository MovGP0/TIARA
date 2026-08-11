/* Ghidra address: 006d5070 */
/* Ghidra symbol: FUN_006d5070 */


longlong FUN_006d5070(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0xe0))(param_1,param_2);
  uVar1 = FUN_0065b870(param_1);
  FUN_004701b0(uVar1,0x1328,0,param_2,1);
  if (*(char *)((longlong)param_1 + 0x4c2) == '\0') {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  }
  return param_2;
}

