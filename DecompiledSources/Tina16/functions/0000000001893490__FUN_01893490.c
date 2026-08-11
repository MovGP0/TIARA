/* Ghidra address: 01893490 */
/* Ghidra symbol: FUN_01893490 */


void FUN_01893490(longlong param_1,int param_2)

{
  if ((*(longlong *)(param_1 + 0x4c0) != 0) && (-1 < param_2 - *(int *)(param_1 + 0x4b0))) {
    (**(code **)(param_1 + 0x4c0))
              (*(undefined8 *)(param_1 + 0x4c8),param_1,1,param_2 - *(int *)(param_1 + 0x4b0));
  }
  *(int *)(param_1 + 0x4b8) = param_2;
  FUN_018935f0(param_1,param_2,*(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b4),1);
  return;
}

