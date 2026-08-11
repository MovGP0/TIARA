/* Ghidra address: 00a54150 */
/* Ghidra symbol: FUN_00a54150 */


undefined1 FUN_00a54150(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_19;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x570);
  if (cVar1 == '\0') {
    local_19 = 0;
  }
  else {
    local_19 = 1;
    FUN_00467e90(&local_10,param_1 + 0x570);
    iVar2 = FUN_00416db0(local_10,L"left");
    if (iVar2 == 0) {
      *param_2 = 5;
    }
    else {
      iVar2 = FUN_00416db0(local_10,L"right");
      if (iVar2 == 0) {
        *param_2 = 6;
      }
      else {
        iVar2 = FUN_00416db0(local_10,L"none");
        if (iVar2 == 0) {
          *param_2 = 0;
        }
        else {
          local_19 = 0;
        }
      }
    }
  }
  FUN_00414480(&local_10);
  return local_19;
}

