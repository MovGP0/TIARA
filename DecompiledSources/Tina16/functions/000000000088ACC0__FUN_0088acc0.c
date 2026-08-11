/* Ghidra address: 0088acc0 */
/* Ghidra symbol: FUN_0088acc0 */


undefined4
FUN_0088acc0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_ffffffffffffffa8;
  wchar_t **ppwVar4;
  undefined8 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_28 = 0;
  local_10 = 0;
  if (DAT_01e21a38 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020048b0);
    local_20 = L"WSAWaitForMultipleEvents";
    local_18 = 0x11;
    ppwVar4 = &local_20;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x276d,local_10,ppwVar4,0);
    uVar1 = (undefined4)((ulonglong)ppwVar4 >> 0x20);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00416740(L"WSAWaitForMultipleEvents");
  pcVar3 = (code *)FUN_00427c10(DAT_01e21a38,uVar2);
  if (pcVar3 == (code *)0x0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020048b0);
    local_20 = L"WSAWaitForMultipleEvents";
    local_18 = 0x11;
    ppwVar4 = &local_20;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x2726,local_28,ppwVar4,0);
    uVar1 = (undefined4)((ulonglong)ppwVar4 >> 0x20);
    pcVar3 = (code *)FUN_004134c0(uVar2);
  }
  PTR_FUN_01e219d0 = pcVar3;
  uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4,CONCAT44(uVar1,param_5));
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return uVar1;
}

