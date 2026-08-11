/* Ghidra address: 01892110 */
/* Ghidra symbol: FUN_01892110 */


void FUN_01892110(longlong *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0xc) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  else if (iVar1 == 0x46) {
    thunk_FUN_041de41e(param_1[0x9f],*(int *)((longlong)param_1 + 0x5a4) + 3,3,
                       (((int)param_1[0x13] - (int)param_1[0xb1]) -
                       *(int *)((longlong)param_1 + 0x5a4)) + -8,
                       *(int *)((longlong)param_1 + 0x9c) + -6,0xffffffff);
  }
  else if ((iVar1 == 0x210) && ((short)param_2[2] == 1)) {
    if (param_1[0xb3] == 0) {
      if (param_1[0xb6] == 0) {
        param_1[0xb6] = *(longlong *)(param_2 + 4);
      }
      else {
        param_1[0xb7] = *(longlong *)(param_2 + 4);
      }
    }
    else {
      FUN_00429fc0(param_1[0xb7],0xfffffffc,param_1[0xb3]);
      param_1[0xb3] = 0;
      param_1[0xb6] = *(longlong *)(param_2 + 4);
    }
  }
  FUN_00687130(param_1,param_2);
  return;
}

