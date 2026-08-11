/* Ghidra address: 01893360 */
/* Ghidra symbol: FUN_01893360 */


void FUN_01893360(longlong param_1,int param_2)

{
  if ((*(longlong *)(param_1 + 0x4c0) != 0) && (-1 < param_2 - *(int *)(param_1 + 0x49c))) {
    (**(code **)(param_1 + 0x4c0))
              (*(undefined8 *)(param_1 + 0x4c8),param_1,0,param_2 - *(int *)(param_1 + 0x49c));
  }
  *(int *)(param_1 + 0x4a4) = param_2;
  FUN_018935f0(param_1,param_2,*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(param_1 + 0x4a0),0);
  return;
}

