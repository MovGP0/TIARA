/* Ghidra address: 01bd5c70 */
/* Ghidra symbol: FUN_01bd5c70 */


void FUN_01bd5c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 char *param_5)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = *param_4;
  FUN_00659160(param_1,param_2,param_3,local_20,param_5);
  if (*param_5 == '\0') {
LAB_01bd5ccd:
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf4f40);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_008228b0);
      if (cVar1 == '\0') goto LAB_01bd5ccd;
    }
    cVar1 = '\x01';
  }
  *param_5 = cVar1;
  return;
}

