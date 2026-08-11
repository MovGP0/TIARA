/* Ghidra address: 0162ec30 */
/* Ghidra symbol: FUN_0162ec30 */


double FUN_0162ec30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                   longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  
  if (param_4 != 0x162) {
    unaff_XMM6_Qa = (double)FUN_01614c70(param_2);
    unaff_XMM8_Qa = (double)FUN_01614c70(param_3);
  }
  uVar1 = FUN_0162e870(param_1,*(undefined8 *)(param_5 + 0x58));
  uVar4 = 0xffffffff;
  if (param_4 < 0x162) {
    if (param_4 == 0x161) {
      if (unaff_XMM6_Qa == unaff_XMM8_Qa) {
        unaff_XMM7_Qa = 1.0;
      }
      else {
        unaff_XMM7_Qa = 0.0;
      }
      uVar4 = 6;
      goto LAB_0162ef35;
    }
    if (param_4 < 0x15e) {
      if (param_4 == 0x15d) {
        if (unaff_XMM6_Qa <= unaff_XMM8_Qa) {
          unaff_XMM7_Qa = 0.0;
        }
        else {
          unaff_XMM7_Qa = 1.0;
        }
        uVar4 = 6;
        goto LAB_0162ef35;
      }
      if (param_4 == 0x106) {
        uVar2 = FUN_0040c840(unaff_XMM6_Qa);
        uVar3 = FUN_0040c840(unaff_XMM8_Qa);
        unaff_XMM7_Qa = (double)(longlong)(uVar2 & uVar3);
        goto LAB_0162ef35;
      }
      if (param_4 == 0x134) {
        uVar2 = FUN_0040c840(unaff_XMM6_Qa);
        uVar3 = FUN_0040c840(unaff_XMM8_Qa);
        unaff_XMM7_Qa = (double)(longlong)(uVar2 | uVar3);
        goto LAB_0162ef35;
      }
      if (param_4 == 0x15c) {
        if (unaff_XMM6_Qa < unaff_XMM8_Qa) {
          unaff_XMM7_Qa = 0.0;
        }
        else {
          unaff_XMM7_Qa = 1.0;
        }
        uVar4 = 6;
        goto LAB_0162ef35;
      }
    }
    else {
      if (param_4 == 0x15e) {
        if (unaff_XMM8_Qa < unaff_XMM6_Qa) {
          unaff_XMM7_Qa = 0.0;
        }
        else {
          unaff_XMM7_Qa = 1.0;
        }
        uVar4 = 6;
        goto LAB_0162ef35;
      }
      if (param_4 == 0x15f) {
        if (unaff_XMM8_Qa <= unaff_XMM6_Qa) {
          unaff_XMM7_Qa = 0.0;
        }
        else {
          unaff_XMM7_Qa = 1.0;
        }
        uVar4 = 6;
        goto LAB_0162ef35;
      }
      if (param_4 == 0x160) {
        if (unaff_XMM6_Qa == unaff_XMM8_Qa) {
          unaff_XMM7_Qa = 0.0;
        }
        else {
          unaff_XMM7_Qa = 1.0;
        }
        uVar4 = 6;
        goto LAB_0162ef35;
      }
    }
  }
  else if (param_4 < 0x169) {
    if (param_4 == 0x168) {
      if (unaff_XMM8_Qa == 0.0) {
        FUN_01625c20(3,*(undefined4 *)(param_5 + 0x60),param_6);
      }
      else {
        unaff_XMM7_Qa = unaff_XMM6_Qa / unaff_XMM8_Qa;
      }
      goto LAB_0162ef35;
    }
    if (param_4 == 0x162) {
      FUN_0162eb80(param_2,param_3,uVar1);
      goto LAB_0162ef35;
    }
    if (param_4 == 0x163) {
      unaff_XMM7_Qa = unaff_XMM6_Qa - unaff_XMM8_Qa;
      goto LAB_0162ef35;
    }
    if (param_4 == 0x164) {
      unaff_XMM7_Qa = unaff_XMM6_Qa + unaff_XMM8_Qa;
      goto LAB_0162ef35;
    }
  }
  else {
    if (param_4 == 0x169) {
      unaff_XMM7_Qa = unaff_XMM6_Qa * unaff_XMM8_Qa;
      goto LAB_0162ef35;
    }
    if (param_4 == 0x16d) {
      unaff_XMM7_Qa = (double)FUN_00c42670(unaff_XMM6_Qa,unaff_XMM8_Qa);
      goto LAB_0162ef35;
    }
  }
  FUN_01613110(L"Op invalid");
  uVar4 = 0xffffffff;
LAB_0162ef35:
  if (param_4 == 0x162) {
    FUN_0162e970(uVar4,uVar1,param_2,param_3);
  }
  else {
    FUN_01615b20(uVar1,unaff_XMM7_Qa);
    FUN_0162e970(uVar4,uVar1,param_2,param_3);
  }
  return unaff_XMM7_Qa;
}

