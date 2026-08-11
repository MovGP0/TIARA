/* Ghidra address: 00887e00 */
/* Ghidra symbol: FUN_00887e00 */


undefined4
FUN_00887e00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong in_stack_ffffffffffffff90;
  undefined8 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  if (DAT_01e21a38 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020048b0);
    local_20 = L"WSAConnect";
    local_18 = 0x11;
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffff00000000;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x276d,local_10,&local_20,in_stack_ffffffffffffff90);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00416740(L"WSAConnect");
  pcVar3 = (code *)FUN_00427c10(DAT_01e21a38,uVar2);
  if (pcVar3 == (code *)0x0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020048b0);
    local_20 = L"WSAConnect";
    local_18 = 0x11;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,0x2726,local_28,&local_20,
                         in_stack_ffffffffffffff90 & 0xffffffff00000000);
    pcVar3 = (code *)FUN_004134c0(uVar2);
  }
  PTR_FUN_01e21818 = pcVar3;
  uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return uVar1;
}

