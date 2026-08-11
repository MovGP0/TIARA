/* Ghidra address: 00b39aa0 */
/* Ghidra symbol: FUN_00b39aa0 */


void FUN_00b39aa0(longlong param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)((longlong)param_2 + 0x14) != '\0') {
    FUN_00b39c60(param_1,param_2,local_20);
    FUN_00b1ac40(*(undefined8 *)(param_1 + 0x10),local_20);
    (**(code **)(*param_2 + -0x20))(param_2,1);
  }
  FUN_004144d0(local_20);
  return;
}

