/* Ghidra address: 00d45c70 */
/* Ghidra symbol: FUN_00d45c70 */


void FUN_00d45c70(longlong *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  iVar3 = *param_2;
  if (iVar3 == 10) {
    cVar2 = FUN_00787f80(param_1[3]);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  else if (iVar3 == 0xc) {
    FUN_00788400(param_1,param_2);
    cVar2 = FUN_00787f80(param_1[3]);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  else if (iVar3 == 0xf) {
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
      cVar2 = FUN_00788df0(param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_00d456b0(param_1);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          FUN_00787f40(param_1[3],local_20);
          iVar3 = 0;
          if (local_20[0] != 0) {
            iVar3 = *(int *)(local_20[0] + -4);
          }
          bVar1 = 0 < iVar3;
        }
        if (bVar1) {
          FUN_007899d0(param_1,param_2);
        }
        else {
          FUN_00788400(param_1,param_2);
        }
        goto code_r0x00d45d91;
      }
    }
    FUN_00788400(param_1,param_2);
  }
  else {
    FUN_007899d0(param_1,param_2);
  }
code_r0x00d45d91:
  FUN_00414480(local_20);
  return;
}

