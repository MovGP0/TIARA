/* Ghidra address: 004be3d0 */
/* Ghidra symbol: FUN_004be3d0 */


longlong * FUN_004be3d0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  char local_29;
  
  if (param_1[0x10] == 0) {
    local_29 = '\x01';
  }
  else {
    lVar1 = FUN_00411840(*param_3,param_4);
    *param_2 = lVar1;
    param_2[1] = (longlong)param_3;
    local_29 = *param_2 == 0;
    (*(code *)param_1[0x10])(param_1[0x11],param_1,param_4,param_2,&local_29);
  }
  if (local_29 != '\0') {
    param_2[1] = (longlong)param_3;
    lVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4);
    *param_2 = lVar1;
  }
  return param_2;
}

