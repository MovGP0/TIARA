/* Ghidra address: 005d1ea0 */
/* Ghidra symbol: FUN_005d1ea0 */


undefined8 FUN_005d1ea0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    FUN_00414ad0(param_1,param_3);
  }
  else if (param_3 == 0) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    if (param_4 != '\0') {
      cVar1 = FUN_005d2930(param_2,1);
      if (cVar1 == '\0') {
        uVar3 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_PTR_02005ad8);
        FUN_004134c0(uVar3);
      }
      cVar1 = FUN_005d2930(param_3,1);
      if (cVar1 == '\0') {
        uVar3 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_PTR_02005ad8);
        FUN_004134c0(uVar3);
      }
    }
    cVar1 = FUN_005d2d60(param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_005d2bc0(param_3);
      if (cVar1 == '\0') {
        iVar2 = 0;
        if (param_2 != 0) {
          iVar2 = *(int *)(param_2 + -4);
        }
        cVar1 = FUN_005d2d70(*(undefined2 *)(param_2 + -2 + (longlong)iVar2 * 2));
        if (cVar1 == '\0') {
          FUN_00416780(&local_10,DAT_02011f42);
          FUN_00416cd0(param_1,3,param_2,local_10,param_3);
        }
        else {
          FUN_00416ba0(param_1,param_2,param_3);
        }
        goto code_r0x005d1feb;
      }
    }
    FUN_00414ad0(param_1,param_3);
  }
code_r0x005d1feb:
  FUN_00414480(&local_10);
  return param_1;
}

