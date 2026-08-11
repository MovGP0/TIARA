/* Ghidra address: 00c0d480 */
/* Ghidra symbol: FUN_00c0d480 */


undefined4 FUN_00c0d480(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6588);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a83f0);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a9900);
      if (cVar1 == '\0') {
        uVar2 = FUN_004d4480(param_1,param_2);
      }
      else {
        pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
        uVar2 = (*pcVar3)(param_1);
        FUN_00c10920(param_1,param_2);
      }
    }
    else {
      pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
      uVar2 = (*pcVar3)(param_1);
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a9620);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a8898);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a8f00);
          if (cVar1 != '\0') {
            FUN_00c10840(param_1,param_2);
          }
        }
        else {
          FUN_00c107a0(param_1,param_2);
        }
      }
      else {
        FUN_00c106e0(param_1,param_2);
      }
    }
  }
  else {
    pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
    uVar2 = (*pcVar3)(param_1);
    if ((char)uVar2 != '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6938);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6be8);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6ea0);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a77d0);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a74c0);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a71b0);
                if (cVar1 != '\0') {
                  (**(code **)(*param_1 + 0x328))(param_1,199,0x20,0);
                }
              }
              else {
                (**(code **)(*param_1 + 0x328))(param_1,0x259,0x20,0);
              }
            }
            else {
              cVar1 = FUN_00bf2c80(param_1);
              if (cVar1 == '\0') {
                (**(code **)(*param_1 + 0x328))(param_1,0x1f6,0x20,0);
              }
              else {
                FUN_00c08110(param_1);
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x328))(param_1,0x25c,0x20,0);
          }
        }
        else {
          (**(code **)(*param_1 + 0x328))(param_1,0xc9,0x20,0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x328))(param_1,0x25b,0x20,0);
      }
    }
  }
  return uVar2;
}

