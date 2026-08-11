/* Ghidra address: 01bbdba0 */
/* Ghidra symbol: FUN_01bbdba0 */


int FUN_01bbdba0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e130(local_20,local_res10[0]);
  FUN_00414b50(local_res10,local_20[0]);
  cVar1 = FUN_01bbaaa0(local_res10[0],L"POWER",L"CLAMP");
  if (cVar1 == '\0') {
    cVar1 = FUN_01bbaaa0(local_res10[0],&DAT_01bbdd04,L"CLAMP");
    if (cVar1 == '\0') {
      iVar2 = FUN_00416db0(local_res10[0],L"PULLUP");
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = FUN_00416db0(local_res10[0],L"PULLDOWN");
        if (iVar2 == 0) {
          iVar2 = 3;
        }
        else {
          iVar2 = -1;
        }
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & iVar2 == -1) != 0) {
    FUN_01bbc400(param_1,L"GetClamp");
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return iVar2;
}

