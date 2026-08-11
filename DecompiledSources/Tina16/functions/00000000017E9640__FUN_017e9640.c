/* Ghidra address: 017e9640 */
/* Ghidra symbol: FUN_017e9640 */


void FUN_017e9640(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                 longlong param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong local_d0;
  char local_c1;
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_010d1500(param_4,&local_c1);
  if (local_c1 == '\0') {
    local_d0 = param_5;
    FUN_010d1490(param_3,param_5);
    param_5 = param_4;
  }
  else {
    FUN_010d1490(param_3,param_4);
    local_d0 = param_4;
  }
  iVar1 = *(int *)(local_d0 + 0x10);
  FUN_013b4bc0(param_5,0,local_90);
  for (iVar3 = 0; iVar3 <= iVar1 + -1; iVar3 = iVar3 + 1) {
    FUN_013b4bc0(param_3,iVar3,local_60);
    cVar2 = FUN_010c7d50(local_60,local_90);
    if (cVar2 == '\0') {
      FUN_010c7a80(local_60);
      FUN_010c7a80(local_90);
    }
    FUN_017e2ae0(param_1,local_60,local_90,param_2);
    cVar2 = FUN_017e28e0(param_1);
    if (cVar2 != '\0') break;
    if (local_c1 == '\0') {
      FUN_010c8e00(param_2,local_90,local_60,local_c0);
    }
    else {
      FUN_010c8e00(param_2,local_60,local_90,local_c0);
    }
    FUN_013b4860(param_3,iVar3,local_c0);
  }
  FUN_00414480(local_30);
  return;
}

