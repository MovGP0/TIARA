/* Ghidra address: 00886c50 */
/* Ghidra symbol: FUN_00886c50 */


undefined8
FUN_00886c50(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  if (DAT_01e21a38 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020048b0);
    local_20 = L"WSAAsyncGetServByName";
    local_18 = 0x11;
    uVar1 = FUN_00883110(&PTR_FUN_00882c78,1,0x276d,local_10,&local_20,0);
    FUN_004134c0(uVar1);
  }
  uVar1 = FUN_00416740(L"WSAAsyncGetServByName");
  pcVar2 = (code *)FUN_00427c10(DAT_01e21a38,uVar1);
  if (pcVar2 == (code *)0x0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020048b0);
    local_20 = L"WSAAsyncGetServByName";
    local_18 = 0x11;
    uVar1 = FUN_00883110(&PTR_FUN_00882c78,1,0x2726,local_28,&local_20,0);
    pcVar2 = (code *)FUN_004134c0(uVar1);
  }
  PTR_FUN_01e217a8 = pcVar2;
  uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return uVar1;
}

