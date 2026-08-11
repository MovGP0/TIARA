/* Ghidra address: 01cfde70 */
/* Ghidra symbol: FUN_01cfde70 */


undefined1 *
FUN_01cfde70(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,char *param_5,
            undefined1 *param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_R13;
  
  puVar1 = (undefined1 *)FUN_01cfdc40(param_1,param_2,param_4);
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
      puVar4 = (undefined1 *)FUN_01cfde10(param_1,puVar1,param_3,param_5);
      if (*param_5 == '\0') {
        return puVar1;
      }
      return puVar4;
    }
  }
  else if (uVar2 != 7) {
    if (uVar2 - 8 < 0xd) {
      return puVar1;
    }
    return unaff_R13;
  }
  uVar3 = FUN_01cfdcb0(param_1,param_2,param_6);
  puVar4 = (undefined1 *)FUN_01cfdd50(param_1,uVar3,param_3,param_5);
  if (*param_5 == '\0') {
    puVar4 = puVar1;
  }
  return puVar4;
}

