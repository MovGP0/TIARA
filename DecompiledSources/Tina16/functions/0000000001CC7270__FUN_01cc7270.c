/* Ghidra address: 01cc7270 */
/* Ghidra symbol: FUN_01cc7270 */


int FUN_01cc7270(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[0xb] = param_2;
  iVar1 = *(int *)(param_2 + 0x154);
  iVar2 = *(int *)((longlong)param_1 + 0x4c);
  *(int *)((longlong)param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x2c);
  (**(code **)*param_1)(param_1);
  return (iVar1 - iVar2) * 8;
}

