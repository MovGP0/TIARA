/* Ghidra address: 00cd9a00 */
/* Ghidra symbol: FUN_00cd9a00 */


void FUN_00cd9a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 local_38;
  undefined8 local_30;
  wchar_t *local_28;
  wchar_t *local_20;
  
  local_30 = 0;
  local_38 = 0;
  cVar2 = *(char *)(param_1 + 0x88);
  if (cVar2 == '\x01') {
    local_28 = L"Content-Type";
    local_20 = L"Content-Disposition";
    iVar1 = FUN_00874bb0(param_2,&local_28,1,0);
    if (iVar1 != -1) {
      cVar2 = '\x02';
    }
  }
  else if (cVar2 == '\x02') {
    local_28 = L"Content-Type";
    local_20 = L"Content-Disposition";
    iVar1 = FUN_00874bb0(param_2,&local_28,1,0);
    if (iVar1 == -1) {
      cVar2 = '\x01';
    }
  }
  FUN_00cd9270(param_1,&local_38,param_2);
  FUN_008af9f0(&local_30,local_38,param_3,param_4,cVar2);
  FUN_00cd98b0(param_1,param_2,local_30);
  FUN_00414560(&local_38,2);
  return;
}

