/* Ghidra address: 00879820 */
/* Ghidra symbol: FUN_00879820 */


int FUN_00879820(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if (*(char *)((longlong)param_1 + 0x4a) == param_3) {
    local_3c = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    iVar3 = 0;
    local_3c = -1;
    if (-1 < iVar1 + -1) {
      do {
        if (param_3 == '\0') {
          FUN_004b3cf0(param_1,&local_38,iVar3);
          iVar2 = FUN_0043e6d0(local_38,param_2);
        }
        else {
          FUN_004b3cf0(param_1,local_30,iVar3);
          iVar2 = FUN_00416db0(local_30[0],param_2);
        }
        local_3c = iVar3;
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
        local_3c = -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  return local_3c;
}

