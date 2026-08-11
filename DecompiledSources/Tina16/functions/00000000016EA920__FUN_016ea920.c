/* Ghidra address: 016ea920 */
/* Ghidra symbol: FUN_016ea920 */


undefined8 FUN_016ea920(undefined4 *param_1,char param_2,char param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  char local_19 [9];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  puVar2 = (undefined8 *)FUN_01b05ad0(param_1,param_2,0,local_19,&local_1a,&local_1b);
  if (local_19[0] == '\r') {
    cVar1 = FUN_01d39ee0(*param_1,param_2 + -1);
    if (cVar1 == param_3) {
      local_48 = *puVar2;
      *param_4 = *(undefined1 *)(puVar2 + 1);
      goto code_r0x016eaa1b;
    }
  }
  FUN_01b20020(&local_38,*(undefined8 *)(param_1 + 0x4a),&DAT_016eaa7c);
  FUN_0043f750(&local_40,param_2);
  FUN_00416cd0(local_30,3,local_38,&DAT_016eaa8c,local_40);
  FUN_01b04d70(0x213,&PTR_DAT_016eaa68,local_30[0]);
code_r0x016eaa1b:
  FUN_00414560(&local_40,3);
  return local_48;
}

