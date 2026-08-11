/* Ghidra address: 01b81050 */
/* Ghidra symbol: FUN_01b81050 */


undefined8 FUN_01b81050(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 local_c [4];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01b80cf0(local_res10[0]);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416db0(local_res10[0],&DAT_01b81158);
    if (iVar2 == 0) {
      FUN_00414ad0(param_1,&DAT_01b8116c);
    }
    else {
      cVar1 = FUN_01b80e10(local_res10[0],local_c);
      if (cVar1 == '\0') {
        cVar1 = FUN_01b80fa0(local_res10[0]);
        if (cVar1 == '\0') {
          FUN_00414ad0(param_1,&DAT_01b81194);
        }
        else {
          FUN_00414ad0(param_1,&DAT_01b81194);
        }
      }
      else {
        FUN_00414ad0(param_1,&DAT_01b81180);
      }
    }
  }
  else {
    FUN_00414ad0(param_1,&DAT_01b81144);
  }
  FUN_00414480(local_res10);
  return param_1;
}

