/* Ghidra address: 016eaf70 */
/* Ghidra symbol: FUN_016eaf70 */


undefined8 FUN_016eaf70(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  undefined1 local_a;
  char local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  puVar1 = (undefined8 *)FUN_01b05ad0(param_1,param_2,0,&local_9,&local_a,&local_b);
  if (local_9 == '\x10') {
    local_38 = *puVar1;
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016eb08c);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&DAT_016eb09c,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016eb078,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return local_38;
}

