/* Ghidra address: 00f43eb0 */
/* Ghidra symbol: FUN_00f43eb0 */


undefined8 FUN_00f43eb0(undefined8 param_1,short param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d420a0(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d42070(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d420e0(param_2);
      if ((cVar1 == '\0') && (param_2 != 0xb8)) {
        cVar1 = FUN_01d420d0(param_2);
        if ((cVar1 == '\0') && (((param_2 != 0xb7 && (param_2 != 0xb4)) && (param_2 != 0xc4)))) {
          if (param_2 == 0xbb) {
            uVar2 = 5;
          }
          else if (param_2 == 0xbc) {
            uVar2 = 6;
          }
          else if (param_2 == 0xbd) {
            uVar2 = 7;
          }
          else if (param_2 == 0xc2) {
            uVar2 = 8;
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

