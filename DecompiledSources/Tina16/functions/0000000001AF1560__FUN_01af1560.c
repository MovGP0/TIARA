/* Ghidra address: 01af1560 */
/* Ghidra symbol: FUN_01af1560 */


void FUN_01af1560(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x9c);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x9c);
  *(int *)(param_1 + 0x7ac) =
       *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c) -
       *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x9c);
  uVar1 = FUN_00b89270();
  FUN_00b8ac60(uVar1,param_1,*(undefined8 *)(param_1 + 0x778));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_10);
  FUN_00414ad0(param_1 + 0x7c8,local_10);
  FUN_00648720(&local_18,*(undefined8 *)(param_1 + 0x7c8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_18);
  DAT_01fd1944 = 0;
  uVar1 = FUN_00b89270();
  FUN_00b8d110(uVar1,param_1);
  FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_20);
  FUN_0064dd90(param_1,&local_28);
  FUN_00416cd0(param_1 + 2000,4,local_20,&DAT_01af1768,local_28,L" - %d%%");
  FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_30);
  FUN_00414ad0(param_1 + 0x7d8,local_30);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return;
}

