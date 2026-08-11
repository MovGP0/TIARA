/* Ghidra address: 01d3f3e0 */
/* Ghidra symbol: FUN_01d3f3e0 */


undefined8 FUN_01d3f3e0(int param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    cVar1 = FUN_01d3d530(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d3d590(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_01d3e460(param_1);
        if ((((((cVar1 == '\0') && (param_1 != 0x3ef)) && (param_1 != 0x44f)) &&
             (((param_1 != 0x889 && (param_1 != 0x45d)) &&
              ((param_1 != 0x45e && ((param_1 != 0x2903 && (param_1 != 0x462)))))))) &&
            (param_1 != 0x464)) && ((param_1 != 0x34 && (param_1 != 0x3b)))) {
          cVar1 = FUN_01d3f2d0(param_1);
          if ((cVar1 == '\0') && (param_1 != 0x5dc)) {
            cVar1 = FUN_01d40240(param_1);
            if ((((cVar1 == '\0') && (param_1 != 900)) && (param_1 != 0x8f)) && (param_1 != 0x43))
            goto LAB_01d3f49c;
          }
        }
      }
    }
    uVar2 = 1;
  }
  else {
LAB_01d3f49c:
    uVar2 = 0;
  }
  return uVar2;
}

