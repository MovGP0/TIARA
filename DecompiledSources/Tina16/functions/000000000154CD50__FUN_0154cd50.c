/* Ghidra address: 0154cd50 */
/* Ghidra symbol: FUN_0154cd50 */


char FUN_0154cd50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  char local_21;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 != '\x04') {
    local_21 = '\0';
    goto LAB_0154cec8;
  }
  sVar2 = FUN_01d03160(param_2);
  cVar1 = FUN_01d3d530(sVar2);
  if ((((cVar1 == '\0') && (sVar2 != 0x3f6)) && (sVar2 != 0x3f0)) &&
     (((sVar2 != 0x44c && (sVar2 != 0x44d)) &&
      ((cVar1 = FUN_01d40050(sVar2), cVar1 == '\0' &&
       ((cVar1 = FUN_01d3f210(param_2), cVar1 == '\0' &&
        (cVar1 = FUN_01d3f2a0(param_2), cVar1 == '\0')))))))) {
    cVar1 = FUN_01d3e460(sVar2);
    if ((((cVar1 != '\0') ||
         ((((((cVar1 = FUN_015f22d0(sVar2), cVar1 != '\0' || (sVar2 == 0x45d)) || (sVar2 == 0x3ef))
            || ((sVar2 == 0x44f || (sVar2 == 0x3f7)))) ||
           ((sVar2 == 0x889 || ((sVar2 == 0x464 || (sVar2 == 0x45e)))))) || (sVar2 == 0x462)))) ||
        (((sVar2 == 0x34 || (sVar2 == 0x3b)) || (cVar1 = FUN_01d3f2d0(sVar2), cVar1 != '\0')))) ||
       (((sVar2 == 900 || (cVar1 = FUN_01d40240(sVar2), cVar1 != '\0')) ||
        ((sVar2 == 0x8f || (sVar2 == 0x43)))))) goto LAB_0154ce92;
    local_21 = '\0';
  }
  else {
LAB_0154ce92:
    local_21 = '\x01';
  }
  if (local_21 == '\0') {
    FUN_01d3f060(&local_20,sVar2);
    FUN_00416ad0(&local_20,L" can\'t be converted");
    FUN_015fcf20(local_20,0,0,0);
  }
LAB_0154cec8:
  FUN_00414480(&local_20);
  return local_21;
}

