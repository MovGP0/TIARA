/* Ghidra address: 00d3c920 */
/* Ghidra symbol: FUN_00d3c920 */


longlong FUN_00d3c920(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  FUN_00d3ca40(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1,9);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1,9);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar1;
  }
  return param_2;
}

