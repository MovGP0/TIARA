/* Ghidra address: 01d3fd10 */
/* Ghidra symbol: FUN_01d3fd10 */


undefined8 FUN_01d3fd10(longlong param_1,char param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 == '\x04') {
    sVar2 = FUN_01d03160(param_1);
    if (*(longlong *)(param_1 + 0x528) != 0) {
      sVar3 = FUN_01d03160(*(longlong *)(param_1 + 0x528));
      cVar1 = FUN_01d3d8a0(sVar3);
      if ((cVar1 != '\0') || (sVar3 == 0x2900)) {
        sVar2 = sVar3;
      }
    }
    if (param_2 == '\0') {
      cVar1 = FUN_01d3d530(sVar2);
      if ((((((cVar1 == '\0') && (cVar1 = FUN_01d3d590(sVar2), cVar1 == '\0')) ||
            (*PTR_DAT_020052b8 != '\0')) &&
           ((cVar1 = FUN_01d3f210(param_1), cVar1 == '\0' &&
            (cVar1 = FUN_01d05040(param_1), cVar1 == '\0')))) &&
          ((((cVar1 = FUN_01d3e460(sVar2), cVar1 == '\0' || ((sVar2 == 0x271c || (sVar2 == 3000))))
            || (sVar2 == 0x2903)) ||
           (((cVar1 = FUN_01d3d8a0(sVar2), cVar1 != '\0' ||
             (cVar1 = FUN_01d3d600(sVar2), cVar1 != '\0')) || (sVar2 == 0x2900)))))) &&
         ((((sVar2 != 0x3ef && (sVar2 != 0x44f)) &&
           ((sVar2 != 0x889 && ((sVar2 != 0x45d && (sVar2 != 0x464)))))) &&
          (cVar1 = FUN_01d40240(sVar2), cVar1 == '\0')))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = FUN_01d3f210(param_1);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

