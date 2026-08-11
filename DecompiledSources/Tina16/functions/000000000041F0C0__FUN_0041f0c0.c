/* Ghidra address: 0041f0c0 */
/* Ghidra symbol: FUN_0041f0c0 */


undefined8 *
FUN_0041f0c0(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
            int param_5)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_4;
  if (param_5 < 0) {
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      FUN_00414480(param_2);
      return param_2;
    }
    param_5 = FUN_00414ce0(pcVar1);
  }
  iVar2 = FUN_0041dea0(param_3,0,pcVar1,param_5 + 1,0,0);
  if (iVar2 < 1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004169f0(param_2,iVar2 + -1);
    if (1 < iVar2) {
      FUN_0041dea0(param_3,0,pcVar1,param_5,*param_2,iVar2);
    }
  }
  return param_2;
}

