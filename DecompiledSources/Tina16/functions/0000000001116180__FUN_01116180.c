/* Ghidra address: 01116180 */
/* Ghidra symbol: FUN_01116180 */


undefined8 FUN_01116180(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb9c30);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbc850);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbe0c0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbddf0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbc328);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbc030);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbd2b8);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbcb38);
                if (cVar1 != '\0') {
                  uVar2 = 4;
                }
              }
              else {
                uVar2 = 5;
              }
            }
            else {
              uVar2 = 9;
            }
          }
          else {
            uVar2 = 10;
          }
        }
        else {
          uVar2 = 7;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

