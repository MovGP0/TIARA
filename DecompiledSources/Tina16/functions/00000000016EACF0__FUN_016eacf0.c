/* Ghidra address: 016eacf0 */
/* Ghidra symbol: FUN_016eacf0 */


undefined1 FUN_016eacf0(undefined4 *param_1,char param_2,char param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  char local_19 [9];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  puVar2 = (undefined1 *)FUN_01b05ad0(param_1,param_2,0,local_19,&local_1a,&local_1b);
  if (local_19[0] == '\b') {
    cVar1 = FUN_01d39ea0(*param_1,param_2 + -1);
    if (cVar1 == param_3) {
      local_41 = *puVar2;
      goto code_r0x016eadd6;
    }
  }
  FUN_01b20020(&local_38,*(undefined8 *)(param_1 + 0x4a),&DAT_016eae2c);
  FUN_0043f750(&local_40,param_2);
  FUN_00416cd0(local_30,3,local_38,&DAT_016eae3c,local_40);
  FUN_01b04d70(0x213,&PTR_DAT_016eae18,local_30[0]);
code_r0x016eadd6:
  FUN_00414560(&local_40,3);
  return local_41;
}

