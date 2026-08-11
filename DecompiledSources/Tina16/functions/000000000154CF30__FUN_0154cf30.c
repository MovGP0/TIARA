/* Ghidra address: 0154cf30 */
/* Ghidra symbol: FUN_0154cf30 */


undefined8 FUN_0154cf30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  
  sVar2 = FUN_01d03160(param_2);
  cVar1 = FUN_01d3d590(sVar2);
  if (((((((cVar1 == '\0') && (sVar2 != 0x3ef)) && (sVar2 != 0x44f)) &&
        ((sVar2 != 0x3f7 && (sVar2 != 0x889)))) &&
       ((sVar2 != 0x38a4 && ((sVar2 != 0x38a5 && (sVar2 != 0x38a6)))))) &&
      (cVar1 = FUN_015f22d0(sVar2), cVar1 == '\0')) &&
     (((((sVar2 != 0x8f && (sVar2 != 0x462)) && (sVar2 != 0x2903)) &&
       (((sVar2 != 0x464 && (sVar2 != 0x34)) &&
        ((sVar2 != 0x3b &&
         ((cVar1 = FUN_01d3f2d0(sVar2), cVar1 == '\0' &&
          (cVar1 = FUN_01d40240(sVar2), cVar1 == '\0')))))))) && (sVar2 != 0x43)))) {
    return 0;
  }
  return 1;
}

