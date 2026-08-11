/* Ghidra address: 01c8f060 */
/* Ghidra symbol: FUN_01c8f060 */


void FUN_01c8f060(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_28 = param_2;
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_007d94d0);
  FUN_01c8eff0(auStack_58,local_20,*(undefined8 *)(lVar1 + 0x78));
  local_38 = &DAT_01c8f160;
  FUN_00416cd0(&local_10,3,L"http://",local_20[0]);
  uVar2 = FUN_00416740(local_10);
  local_38 = (undefined *)0x0;
  local_30 = 1;
  thunk_FUN_0419adcc(0,L"open",uVar2,0);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

