/* Ghidra address: 016eabc0 */
/* Ghidra symbol: FUN_016eabc0 */


void FUN_016eabc0(longlong param_1,undefined1 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
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
    *puVar1 = param_3;
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016eacdc);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&DAT_016eacec,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016eacc8,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return;
}

