/* Ghidra address: 0198a580 */
/* Ghidra symbol: FUN_0198a580 */


undefined8 FUN_0198a580(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x118))(param_1);
    if (cVar1 == '\0') {
      if ((undefined **)*param_1 == &PTR_FUN_0149cf30) {
        uVar3 = 8;
      }
      else if ((undefined **)*param_1 == &PTR_FUN_00c54448) {
        uVar3 = 9;
      }
      else if ((undefined **)*param_1 == &PTR_FUN_010ba368) {
        uVar3 = 10;
      }
      else if ((undefined **)*param_1 == &PTR_FUN_010b6978) {
        uVar3 = 0x10b6907;
      }
      else {
        uVar3 = 0xb;
      }
    }
    else if ((undefined **)*param_1 == &PTR_FUN_017c0190) {
      uVar3 = 5;
    }
    else if ((undefined **)*param_1 == &PTR_FUN_017bca38) {
      uVar3 = 6;
    }
    else {
      sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (sVar2 == 2) {
        uVar3 = 1;
      }
      else {
        sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar2 == 3) {
          uVar3 = 3;
        }
        else {
          sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((sVar2 != 0x95) && (sVar2 = (**(code **)(*param_1 + 0xf8))(param_1), sVar2 != 0xa0)) {
            return 4;
          }
          uVar3 = 2;
        }
      }
    }
  }
  return uVar3;
}

