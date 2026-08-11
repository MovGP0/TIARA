/* Ghidra address: 01ccb1f0 */
/* Ghidra symbol: FUN_01ccb1f0 */


void FUN_01ccb1f0(undefined8 param_1,double param_2,double *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  do {
    cVar1 = FUN_01ccb3a0(param_1,param_3,&local_50,&local_58);
    if (cVar1 == '\0') break;
  } while (*param_3 <= param_2 && param_2 != *param_3);
  local_48 = local_50;
  local_40 = local_58;
  FUN_00c44940(&local_68,&local_48);
  *param_4 = local_68;
  param_4[1] = uStack_60;
  return;
}

