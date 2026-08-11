/* Ghidra address: 009479a0 */
/* Ghidra symbol: FUN_009479a0 */


undefined8 FUN_009479a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar2 = FUN_00417170(&LAB_00947a90,param_1,1);
  if (iVar2 == 0) {
    FUN_00414520(param_2);
    cVar1 = FUN_00900990(param_1);
    if (cVar1 == '\0') {
      FUN_00414520(param_3);
      uVar4 = 0;
    }
    else {
      FUN_00414b90(param_3,param_1);
      uVar4 = 1;
    }
  }
  else {
    FUN_00416430(param_2,param_1,1,iVar2 + -1);
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_00416430(param_3,param_1,iVar2 + 1,uVar3 - iVar2);
    cVar1 = FUN_009009a0(*param_2);
    if ((cVar1 != '\0') && (cVar1 = FUN_00900990(*param_3), cVar1 != '\0')) {
      return 1;
    }
    FUN_00414520(param_2);
    FUN_00414520(param_3);
    uVar4 = 0;
  }
  return uVar4;
}

