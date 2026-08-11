/* Ghidra address: 01b22900 */
/* Ghidra symbol: FUN_01b22900 */


undefined1 FUN_01b22900(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = -1;
  local_31 = 0;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      cVar1 = FUN_00ea7dc0(local_30[0],local_res10[0]);
      if (cVar1 != '\0') {
        local_31 = 1;
        *param_3 = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_31;
}

