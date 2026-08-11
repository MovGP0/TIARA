/* Ghidra address: 0088e200 */
/* Ghidra symbol: FUN_0088e200 */


undefined4 FUN_0088e200(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_40;
  undefined8 local_38;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  if (DAT_01e21a40 == 0) {
    DAT_01e21a40 = FUN_00452dc0(L"MSWSOCK.DLL",0x8000);
    if (DAT_01e21a40 == 0) {
      uVar1 = thunk_FUN_03ce33a6();
      FUN_0041ddd0(local_20,PTR_PTR_02003e50);
      local_30 = L"MSWSOCK.DLL";
      local_28 = 0x11;
      uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,uVar1,local_20[0],&local_30,0);
      FUN_004134c0(uVar2);
    }
  }
  if (DAT_01e21a40 == 0) {
    FUN_0041ddd0(&local_38,PTR_PTR_020048b0);
    local_30 = L"WSARecvEx";
    local_28 = 0x11;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x276d,local_38,&local_30,0);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00416740(L"WSARecvEx");
  pcVar3 = (code *)FUN_00427c10(DAT_01e21a40,uVar2);
  if (pcVar3 == (code *)0x0) {
    FUN_0041ddd0(&local_40,PTR_PTR_020048b0);
    local_30 = L"WSARecvEx";
    local_28 = 0x11;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x2726,local_40,&local_30,0);
    pcVar3 = (code *)FUN_004134c0(uVar2);
  }
  PTR_FUN_01e219f8 = pcVar3;
  uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_20);
  return uVar1;
}

