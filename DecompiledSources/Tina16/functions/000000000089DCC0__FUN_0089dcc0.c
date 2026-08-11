/* Ghidra address: 0089dcc0 */
/* Ghidra symbol: FUN_0089dcc0 */


undefined8 * FUN_0089dcc0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0043f780(&local_10,*(uint *)(param_1 + 8) >> 0x18);
    FUN_00416ba0(param_2,local_10,&LAB_0089de28);
    FUN_0043f780(&local_18,*(uint *)(param_1 + 8) >> 0x10 & 0xff);
    FUN_00416cd0(param_2,3,*param_2,local_18,&LAB_0089de28);
    FUN_0043f780(&local_20,*(uint *)(param_1 + 8) >> 8 & 0xff);
    FUN_00416cd0(param_2,3,*param_2,local_20,&LAB_0089de28);
    FUN_0043f780(&local_28,*(uint *)(param_1 + 8) & 0xff);
    FUN_00416ad0(param_2,local_28);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414560(&local_28,4);
  return param_2;
}

