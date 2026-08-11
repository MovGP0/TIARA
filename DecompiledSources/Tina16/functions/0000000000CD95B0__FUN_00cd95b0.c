/* Ghidra address: 00cd95b0 */
/* Ghidra symbol: FUN_00cd95b0 */


undefined8 FUN_00cd95b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  wchar_t *local_38;
  wchar_t *local_30;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00cd9270(param_1,local_20,param_3);
  if (local_20[0] == 0) {
    FUN_00414480(param_2);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x88);
    if (cVar2 == '\x01') {
      local_38 = L"Content-Type";
      local_30 = L"Content-Disposition";
      iVar1 = FUN_00874bb0(param_3,&local_38,1,0);
      if (iVar1 != -1) {
        cVar2 = '\x02';
      }
    }
    else if (cVar2 == '\x02') {
      local_38 = L"Content-Type";
      local_30 = L"Content-Disposition";
      iVar1 = FUN_00874bb0(param_3,&local_38,1,0);
      if (iVar1 == -1) {
        cVar2 = '\x01';
      }
    }
    FUN_008af950(param_2,local_20[0],param_4,cVar2);
  }
  FUN_00414480(local_20);
  return param_2;
}

