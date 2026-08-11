/* Ghidra address: 016fd6b0 */
/* Ghidra symbol: FUN_016fd6b0 */


void FUN_016fd6b0(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  code *local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00448ed0();
  uVar1 = FUN_005bba20();
  local_20 = (code *)CONCAT44(local_20._4_4_,(uint)uVar1);
  local_18 = local_18 & 0xffffffffffffff00;
  FUN_00442f70(&local_10,L"Copyright 1993-%d DesignSoft, Inc.",&local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_10);
  uVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,param_1);
  *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  FUN_00742ed0(uVar2,3000);
  local_20 = FUN_016fd7f0;
  local_18 = param_1;
  FUN_00742ef0(*(undefined8 *)(param_1 + 0x6e8),&local_20);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6e8),1);
  FUN_00414480(&local_10);
  return;
}

