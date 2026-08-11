/* Ghidra address: 00cdde60 */
/* Ghidra symbol: FUN_00cdde60 */


undefined1 FUN_00cdde60(longlong param_1)

{
  int iVar1;
  undefined1 local_89;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00cdda50(param_1,&local_10,L"Basic");
  FUN_00874ee0(local_20,&local_10,&DAT_00cde1d4,1,1);
  while( true ) {
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = *(int *)(local_10 + -4);
    }
    if (iVar1 < 1) break;
    FUN_00874ee0(&local_30,&local_10,&DAT_00cde1e4,1,1);
    FUN_00877c20(&local_28,local_30,&DAT_00cde1f8,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78));
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),local_28);
  }
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x10),&local_40,L"realm");
  FUN_0089ea10(&local_38,local_40);
  FUN_00414ad0(param_1 + 0x28,local_38);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x10),&local_50,L"charset");
  FUN_0089ea10(&local_48,local_50);
  FUN_00414ad0(param_1 + 0x20,local_48);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_00cd9270(*(undefined8 *)(param_1 + 0x10),&local_60,L"accept-charset");
    FUN_0089ea10(&local_58,local_60);
    FUN_00414ad0(param_1 + 0x20,local_58);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_00cd9270(*(undefined8 *)(param_1 + 0x10),&local_70,L"encoding");
      FUN_0089ea10(&local_68,local_70);
      FUN_00414ad0(param_1 + 0x20,local_68);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        FUN_00cd9270(*(undefined8 *)(param_1 + 0x10),&local_80,&DAT_00cde288);
        FUN_0089ea10(&local_78,local_80);
        FUN_00414ad0(param_1 + 0x20,local_78);
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        FUN_00414ad0(param_1 + 0x20,L"ISO-8859-1");
      }
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00cddbf0(param_1,&local_88);
    iVar1 = 0;
    if (local_88 != 0) {
      iVar1 = *(int *)(local_88 + -4);
    }
    if (iVar1 < 1) {
      local_89 = 0;
    }
    else {
      local_89 = 1;
    }
  }
  else {
    local_89 = 2;
  }
  FUN_00414560(&local_88,0xe);
  FUN_00414480(&local_10);
  return local_89;
}

