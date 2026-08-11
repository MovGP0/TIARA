/* Ghidra address: 00606e30 */
/* Ghidra symbol: FUN_00606e30 */


void FUN_00606e30(longlong param_1,longlong *param_2)

{
  int iVar1;
  int local_1c;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_1c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_1c,4);
    local_1c = FUN_004b6da0(param_2);
    local_1c = local_1c + -4;
    if (*(char *)(param_1 + 0x50) == '\0') {
      FUN_00606f90(param_1,param_2);
    }
    else {
      FUN_00606ee0(param_1,param_2);
    }
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)local_1c,0);
    iVar1 = (**(code **)*param_2)(param_2);
    local_1c = iVar1 - local_1c;
    (**(code **)(*param_2 + 0x20))(param_2,&local_1c,4);
    (**(code **)(*param_2 + 0x50))(param_2,0,2);
  }
  return;
}

