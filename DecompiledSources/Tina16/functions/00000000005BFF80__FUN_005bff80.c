/* Ghidra address: 005bff80 */
/* Ghidra symbol: FUN_005bff80 */


undefined8 FUN_005bff80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  
  uVar3 = 0;
  lVar1 = param_3[3] - param_3[2];
  if (lVar1 != 0) {
    if (lVar1 < 1) {
      cVar2 = FUN_005bff10(auStack_48,*param_3);
      if ((cVar2 != '\0') && (cVar2 = FUN_005bfec0(auStack_48,*param_3,lVar1), cVar2 != '\0')) {
        return 3;
      }
      cVar2 = FUN_005bfea0(auStack_48,param_3[1]);
      if ((cVar2 != '\0') && (cVar2 = FUN_005bff30(auStack_48,param_3[1],-lVar1), cVar2 != '\0')) {
        return 2;
      }
    }
    else {
      cVar2 = FUN_005bfea0(auStack_48,*param_3);
      if ((cVar2 != '\0') && (cVar2 = FUN_005bff30(auStack_48,*param_3,lVar1), cVar2 != '\0')) {
        return 3;
      }
      cVar2 = FUN_005bff10(auStack_48,param_3[1]);
      if ((cVar2 != '\0') && (cVar2 = FUN_005bfec0(auStack_48,param_3[1],-lVar1), cVar2 != '\0')) {
        return 2;
      }
    }
    cVar2 = FUN_005bbeb0(*param_3,param_3[1]);
    if (((cVar2 < '\0') && (cVar2 = FUN_005bfea0(auStack_48,*param_3), cVar2 != '\0')) &&
       (cVar2 = FUN_005bff10(auStack_48,param_3[1]), cVar2 != '\0')) {
      return 1;
    }
    cVar2 = FUN_005bbeb0(*param_3,param_3[1]);
    if ('\0' < cVar2) {
      cVar2 = FUN_005bfea0(auStack_48,*param_3);
      if ((cVar2 == '\0') && (cVar2 = FUN_005bff10(auStack_48,param_3[1]), cVar2 == '\0')) {
        return 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

