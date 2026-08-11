/* Ghidra address: 00453b00 */
/* Ghidra symbol: FUN_00453b00 */


void FUN_00453b00(longlong param_1,int param_2,longlong param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *local_78;
  undefined1 local_70;
  int local_68;
  undefined1 local_60;
  wchar_t *local_58;
  undefined1 local_50;
  int local_48;
  undefined1 local_40;
  wchar_t *local_38;
  undefined1 local_30;
  
  if (param_5 < 0) {
    local_38 = L"Count";
    local_30 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_38,0);
    FUN_004134c0(uVar1);
  }
  if (param_4 < 0) {
    local_38 = L"DestinationIndex";
    local_30 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_38,0);
    FUN_004134c0(uVar1);
  }
  lVar2 = 0;
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_3 + -8);
  }
  if (lVar2 < param_4 + param_5) {
    local_78 = L"DestinationIndex";
    local_70 = 0x11;
    local_60 = 0;
    local_58 = L"Count";
    local_50 = 0x11;
    local_48 = param_5;
    local_40 = 0;
    local_68 = param_4;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02002f78,&local_78,3);
    FUN_004134c0(uVar1);
  }
  if (0 < param_5) {
    FUN_00453ab0(param_1,param_2);
    FUN_00453ab0(param_1,param_2 + param_5 + -1);
    lVar2 = FUN_00414de0(param_1 + 8);
    FUN_00409a70(lVar2 + (longlong)param_2 * 2,param_3 + (longlong)param_4 * 2,
                 (longlong)(param_5 * 2));
  }
  return;
}

