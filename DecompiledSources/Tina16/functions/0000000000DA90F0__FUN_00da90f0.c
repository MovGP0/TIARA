/* Ghidra address: 00da90f0 */
/* Ghidra symbol: FUN_00da90f0 */


void FUN_00da90f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_4b8 [32];
  undefined *local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined1 *local_470;
  undefined8 local_460;
  undefined2 local_452;
  undefined8 local_450;
  undefined1 local_444 [522];
  undefined1 local_23a [522];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_470 = auStack_4b8;
  local_488 = 0;
  local_478 = 0;
  local_480 = 0;
  local_28 = 0;
  local_30 = 0;
  local_450 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_452 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00414480(local_20);
  local_460 = FUN_00448ed0();
  FUN_00448450(local_20,local_460,PTR_DAT_02004830);
  FUN_00415dd0(&local_450,local_20[0],0);
  FUN_00414480(local_20);
  local_498 = (undefined *)local_450;
  FUN_00415980(&local_30,3,local_30,&DAT_00da93b8);
  local_498 = &DAT_00da93e0;
  FUN_00415980(&local_480,3,&DAT_00da93e0,local_450);
  FUN_00da8fa0(&local_478,local_480);
  local_498 = (undefined *)local_478;
  FUN_00415980(&local_30,3,local_30,&DAT_00da93cc);
  FUN_00414b50(&local_28,local_res8[0]);
  uVar1 = FUN_00442620(local_23a,local_28);
  FUN_00416880(&local_488,local_30);
  uVar2 = FUN_00442620(local_444,local_488);
  local_498 = (undefined *)0x0;
  local_490 = 5;
  thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"open",uVar1,uVar2);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_452;
  FUN_00414480(&local_488);
  FUN_00414590(&local_480,2);
  FUN_004144d0(&local_450);
  FUN_004144d0(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return;
}

