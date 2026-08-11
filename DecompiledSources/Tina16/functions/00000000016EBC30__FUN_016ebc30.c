/* Ghidra address: 016ebc30 */
/* Ghidra symbol: FUN_016ebc30 */


undefined1 FUN_016ebc30(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  undefined1 local_a;
  byte local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_01b05ad0(param_1,param_2,0,&local_9,&local_a,&local_b);
  if (local_9 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (local_9 & 0x1f) & 0x90U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_31 = local_b;
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016ebd70);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&LAB_016ebd80,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016ebd5c,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return local_31;
}

