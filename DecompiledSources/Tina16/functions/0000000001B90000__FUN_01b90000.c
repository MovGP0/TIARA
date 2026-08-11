/* Ghidra address: 01b90000 */
/* Ghidra symbol: FUN_01b90000 */


void FUN_01b90000(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  undefined8 local_4c8;
  undefined8 local_4c0 [5];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined1 *local_460;
  undefined8 local_448 [129];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_460 = auStack_4f8;
  local_498 = 0;
  local_4c0[0] = 0;
  local_4c8 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_478 = 0;
  local_468 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_448[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_468);
  cVar1 = FUN_00440a20(local_468,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"File not found");
    FUN_004134c0(uVar2);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_478);
  FUN_00441710(&local_470,local_478);
  FUN_01b258f0(L"LT_ImportDir",&PTR_DAT_01b90444,local_470);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_480);
  FUN_01b258f0(L"LT_ImportFileName",&PTR_DAT_01b90444,local_480);
  FUN_01c75530(*(undefined8 *)PTR_DAT_02004e40,0);
  uVar2 = FUN_019a4600();
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_488);
  local_4d8 = *(undefined8 *)PTR_DAT_02005010;
  local_28 = FUN_01b81ef0(&DAT_01b7d3b8,1,uVar2,local_488);
  FUN_01b8c4a0(local_28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_490);
  FUN_004414c0(&local_40,local_490,L".tsc");
  FUN_014a1260(local_40,0);
  lVar3 = FUN_019a4600();
  FUN_00414ad0(lVar3 + 0x360,local_40);
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  FUN_00414480(&local_4c8);
  FUN_00414480(local_4c0);
  FUN_00414480(&local_498);
  FUN_00414560(&local_490,4);
  FUN_00414480(&local_470);
  FUN_00414480(&local_468);
  FUN_00414480(local_448);
  FUN_00414560(&local_40,3);
  return;
}

