/* Ghidra address: 01ca4be0 */
/* Ghidra symbol: FUN_01ca4be0 */


void FUN_01ca4be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined1 *local_280;
  undefined1 local_271;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_280 = auStack_2b8;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_271 = 1;
  uVar1 = FUN_019a4600();
  FUN_01477340(uVar1,1,&local_10,&local_18);
  uVar1 = FUN_019a4600();
  local_298 = 0;
  local_20 = FUN_01477fa0(&DAT_01476b38,1,uVar1,0);
  FUN_01478130(local_20,local_271);
  local_298 = 0;
  FUN_01478670(local_20,0,local_28,&local_30);
  FUN_01c76fd0(param_1,0);
  uVar1 = FUN_019a4600();
  FUN_01477340(uVar1,0,&local_10,&local_18);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_30);
  FUN_00414560(&local_18,2);
  return;
}

