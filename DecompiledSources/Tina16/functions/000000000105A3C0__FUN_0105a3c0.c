/* Ghidra address: 0105a3c0 */
/* Ghidra symbol: FUN_0105a3c0 */


undefined8 FUN_0105a3c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e1a0(local_20,local_res18[0]);
  FUN_00414b50(local_res18,local_20[0]);
  cVar1 = FUN_0105a310(param_1,local_res18[0]);
  if (cVar1 != '\0') {
    cVar1 = FUN_00440b00(*(undefined8 *)(param_1 + 0x58),1);
    if (cVar1 != '\0') {
      FUN_00416ba0(param_2,*(undefined8 *)(param_1 + 0x58),&DAT_0105a4bc);
      goto code_r0x0105a458;
    }
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x50));
code_r0x0105a458:
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

