/* Ghidra address: 00f51be0 */
/* Ghidra symbol: FUN_00f51be0 */


void FUN_00f51be0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (*(char *)(param_1 + 0x49c) != '\x01') {
    if (*(char *)(param_1 + 0x325) == '\0') {
      FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x118));
      FUN_016f5430(param_1,1,0);
      FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_016f6430(param_1,1,0);
      FUN_016f3620(param_1,0,1);
    }
    if (*(char *)(param_1 + 0x324) != '\0') {
      if (param_2 == '\0') {
        uVar1 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_1);
        FUN_004134c0(uVar1);
      }
      else {
        FUN_00de8980(&local_10,0x10a,*(undefined8 *)(param_1 + 0x1310));
        FUN_01b05000(local_10,0);
      }
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(&local_res20);
  return;
}

