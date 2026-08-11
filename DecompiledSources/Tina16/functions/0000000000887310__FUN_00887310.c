/* Ghidra address: 00887310 */
/* Ghidra symbol: FUN_00887310 */


undefined8
FUN_00887310(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_stack_ffffffffffffff98;
  wchar_t **ppwVar3;
  undefined4 uVar4;
  undefined8 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_28 = 0;
  local_10 = 0;
  if (DAT_01e21a38 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020048b0);
    local_20 = L"WSAAsyncGetHostByName";
    local_18 = 0x11;
    ppwVar3 = &local_20;
    uVar1 = FUN_00883110(&PTR_FUN_00882c78,1,0x276d,local_10,ppwVar3,0);
    uVar4 = (undefined4)((ulonglong)ppwVar3 >> 0x20);
    FUN_004134c0(uVar1);
  }
  uVar1 = FUN_00416740(L"WSAAsyncGetHostByName");
  pcVar2 = (code *)FUN_00427c10(DAT_01e21a38,uVar1);
  if (pcVar2 == (code *)0x0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020048b0);
    local_20 = L"WSAAsyncGetHostByName";
    local_18 = 0x11;
    ppwVar3 = &local_20;
    uVar1 = FUN_00883110(&PTR_FUN_00882c78,1,0x2726,local_28,ppwVar3,0);
    uVar4 = (undefined4)((ulonglong)ppwVar3 >> 0x20);
    pcVar2 = (code *)FUN_004134c0(uVar1);
  }
  PTR_FUN_01e217c8 = pcVar2;
  uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,CONCAT44(uVar4,param_5));
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return uVar1;
}

