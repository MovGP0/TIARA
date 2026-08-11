/* Ghidra address: 016ea450 */
/* Ghidra symbol: FUN_016ea450 */


undefined8 FUN_016ea450(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  undefined1 local_a;
  char local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_01b05ad0(param_2,param_3,0,&local_9,&local_a,&local_b);
  if (local_9 == '\x01') {
    FUN_00415020(param_1,uVar1,0x1e);
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_2 + 0x128),&DAT_016ea57c);
    FUN_0043f750(&local_30,param_3);
    FUN_00416cd0(local_20,3,local_28,&DAT_016ea58c,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016ea568,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return param_1;
}

