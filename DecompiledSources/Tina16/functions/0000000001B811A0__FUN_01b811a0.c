/* Ghidra address: 01b811a0 */
/* Ghidra symbol: FUN_01b811a0 */


undefined8 FUN_01b811a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  cVar1 = FUN_01b80cf0(local_res10[0]);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416db0(local_res10[0],&DAT_01b812a0);
    if (iVar2 == 0) {
      FUN_00414ad0(param_1,L"2N3819");
    }
    else {
      cVar1 = FUN_01b80e10(local_res10[0],&local_c);
      if (cVar1 != '\0') {
        if (local_c == 0) {
          FUN_00414ad0(param_1,L"2N2222");
        }
        else {
          FUN_00414ad0(param_1,L"2N2907");
        }
      }
    }
  }
  else {
    FUN_00414ad0(param_1,L"1N4148");
  }
  FUN_00414480(local_res10);
  return param_1;
}

