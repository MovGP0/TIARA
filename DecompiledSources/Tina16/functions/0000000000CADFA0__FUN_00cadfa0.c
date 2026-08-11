/* Ghidra address: 00cadfa0 */
/* Ghidra symbol: FUN_00cadfa0 */


undefined8 *
FUN_00cadfa0(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  
  FUN_0041b910(param_6);
  FUN_00cada90(param_1,param_2,param_4,param_6);
  iVar2 = FUN_00416db0(*param_2,param_5);
  if (iVar2 == 0) {
    *param_3 = 1;
  }
  else {
    cVar1 = FUN_00879090(*param_2,&LAB_00cae074);
    if (cVar1 != '\0') {
      FUN_00416e20(param_2,1,1);
    }
    *param_3 = 0;
  }
  FUN_0041b800(&param_6);
  return param_2;
}

