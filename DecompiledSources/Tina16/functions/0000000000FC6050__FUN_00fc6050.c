/* Ghidra address: 00fc6050 */
/* Ghidra symbol: FUN_00fc6050 */


void FUN_00fc6050(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  double local_20;
  double local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_38);
  iVar1 = FUN_00f60f70(local_38);
  *(double *)(param_1 + 2000) = (double)iVar1;
  local_24 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))
                       (*(longlong **)(param_1 + 0x6d8));
  local_20 = 1.0 / *(double *)(param_1 + 2000);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),local_20);
  local_18 = (double)FUN_00fc5910(param_1,local_24,local_20);
  FUN_00414480(&local_10);
  lVar2 = FUN_0040c840(local_18 + 0.5);
  FUN_00448450(&local_10,(double)lVar2,PTR_DAT_02004830);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return;
}

