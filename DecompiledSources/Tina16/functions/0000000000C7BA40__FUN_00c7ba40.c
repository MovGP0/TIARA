/* Ghidra address: 00c7ba40 */
/* Ghidra symbol: FUN_00c7ba40 */


void FUN_00c7ba40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_18 = FUN_004ba3c0(&PTR_FUN_0047d288,1,0);
  FUN_00c7b6a0(param_1,local_18);
  FUN_004ba980(local_18,&local_28);
  FUN_00414ad0(param_2,local_28);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  FUN_00414480(&local_28);
  return;
}

