/* Ghidra address: 016d4b30 */
/* Ghidra symbol: FUN_016d4b30 */


bool FUN_016d4b30(longlong *param_1)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined4 *)(param_1[(longlong)(int)param_1[0xa4] + 0xa5] + 0x18) = 2;
  iVar1 = thunk_FUN_03a4f73f(param_1[0xb4],param_1[(longlong)(int)param_1[0xa4] + 0xa5],0x30);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0xa4) = ((int)param_1[0xa4] + 1) % (int)param_1[0x94];
  }
  else {
    FUN_016d3a80(local_20,iVar1);
    FUN_00414ad0(param_1 + 0xae,local_20[0]);
    (**(code **)(*param_1 + 0x270))(param_1);
  }
  FUN_00414480(local_20);
  return iVar1 == 0;
}

