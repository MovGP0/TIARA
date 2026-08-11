/* Ghidra address: 01b71000 */
/* Ghidra symbol: FUN_01b71000 */


void FUN_01b71000(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [160];
  undefined1 local_108 [256];
  
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  PTR_DAT_02004010[0x7c6] = uVar1;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (*PTR_DAT_02003450 != cVar2) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    if (cVar2 == '\0') {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      *PTR_DAT_02003450 = uVar1;
      FUN_010db7e0(*(undefined8 *)PTR_DAT_020049a0,*(undefined8 *)PTR_DAT_02005360,
                   *(undefined8 *)PTR_DAT_02005010);
      FUN_01c8f340(*(undefined8 *)PTR_DAT_02004e40);
    }
    else {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
      thunk_FUN_041b2403(uVar3,0x53e,0,0);
      FUN_010db950();
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      *PTR_DAT_02003450 = uVar1;
    }
  }
  FUN_00409da0(&local_1b0,0);
  FUN_00416910(local_108,local_1b0,0xff);
  FUN_004169a0(&local_1c0,local_108);
  FUN_00441640(&local_1b8,local_1c0);
  FUN_00416910(local_108,local_1b8,0xff);
  FUN_00416cd0(&local_1c8,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b71248,L"TINA.INI");
  FUN_00442620(local_1a8,local_1c8);
  if (*PTR_DAT_02003450 == '\0') {
    thunk_FUN_03a9a12c(L"Schematic Editor",L"Measurement",L"Enabled",local_1a8);
  }
  else {
    thunk_FUN_03a9a12c(L"Schematic Editor",L"Measurement",L"Disabled",local_1a8);
  }
  FUN_00414560(&local_1c8,4);
  return;
}

