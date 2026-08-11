/* Ghidra address: 016eaa90 */
/* Ghidra symbol: FUN_016eaa90 */


undefined2 FUN_016eaa90(longlong param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  undefined1 local_a;
  char local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  puVar1 = (undefined2 *)FUN_01b05ad0(param_1,param_2,0,&local_9,&local_a,&local_b);
  if (local_9 == '\x02') {
    local_32 = *puVar1;
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016eabac);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&DAT_016eabbc,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016eab98,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return local_32;
}

