/* Ghidra address: 010c0b00 */
/* Ghidra symbol: FUN_010c0b00 */


undefined8 FUN_010c0b00(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_3);
  if (*param_4 == '\x01') {
    iVar2 = FUN_004170c0(&DAT_010c0d24,local_res10[0],1);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      bVar1 = iVar2 < iVar3;
    }
    if (bVar1) {
      FUN_00416dc0(param_3,local_res10[0],iVar2 + 1,2);
      *param_4 = '\x01';
    }
    else {
      *param_4 = '\0';
    }
  }
  if (*param_4 == '\x02') {
    iVar2 = FUN_004170c0(&DAT_010c0d38,local_res10[0],1);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      bVar1 = iVar2 < iVar3;
    }
    if (bVar1) {
      FUN_00416dc0(param_3,local_res10[0],iVar2 + 1,2);
      *param_4 = '\x02';
    }
    else {
      *param_4 = '\0';
    }
  }
  if (*param_4 == '\x03') {
    iVar2 = FUN_004170c0(&DAT_010c0d4c,local_res10[0],1);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      bVar1 = iVar2 < iVar3;
    }
    if (bVar1) {
      FUN_00416dc0(param_3,local_res10[0],iVar2 + 1,2);
      *param_4 = '\x03';
    }
    else {
      *param_4 = '\0';
    }
  }
  if (*param_4 == '\x04') {
    iVar2 = FUN_004170c0(L":DIG",local_res10[0],1);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      bVar1 = iVar2 < iVar3;
    }
    if (bVar1) {
      FUN_00416dc0(param_3,local_res10[0],iVar2 + 1,3);
      *param_4 = '\x04';
    }
    else {
      *param_4 = '\0';
    }
  }
  FUN_010c04f0(local_res10);
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

