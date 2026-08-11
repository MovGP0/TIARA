/* Ghidra address: 01b05ad0 */
/* Ghidra symbol: FUN_01b05ad0 */


undefined1 *
FUN_01b05ad0(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,char *param_5,
            undefined1 *param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_R13;
  
  puVar1 = (undefined1 *)FUN_01b05820(param_1,param_2,param_4);
  *param_5 = '\0';
  *param_6 = 0;
  uVar2 = (ulonglong)*param_4;
  if (uVar2 < 7) {
    if ((uVar2 == 6) || (uVar2 < 4)) {
      return puVar1;
    }
    if (uVar2 != 4) {
      if (uVar2 != 5) {
        return unaff_R13;
      }
      *param_6 = *puVar1;
      puVar4 = (undefined1 *)FUN_01b05a70(puVar1,param_3,param_5);
      if (*param_5 == '\0') {
        return puVar1;
      }
      return puVar4;
    }
  }
  else if (uVar2 != 7) {
    if (uVar2 - 8 < 10) {
      return puVar1;
    }
    return unaff_R13;
  }
  uVar3 = FUN_01b058d0(param_1,param_2,param_6);
  puVar4 = (undefined1 *)FUN_01b059b0(uVar3,param_3,param_5);
  if (*param_5 == '\0') {
    puVar4 = puVar1;
  }
  return puVar4;
}

