/* Ghidra address: 0083e0a0 */
/* Ghidra symbol: FUN_0083e0a0 */


void FUN_0083e0a0(longlong param_1,ushort *param_2,ushort param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auStack_38 [40];
  
  uVar3 = (ulonglong)*param_2;
  if (uVar3 < 0x27) {
    if (uVar3 != 0x26) {
      if (0x23 < uVar3) {
        if (uVar3 == 0x24) {
          cVar2 = FUN_0083df20(auStack_38);
          if ((cVar2 != '\0') &&
             ((cVar2 = FUN_0083df50(auStack_38), cVar2 != '\0' ||
              (cVar2 = FUN_0083e050(auStack_38), cVar2 != '\0')))) {
            FUN_0083de80(auStack_38);
          }
        }
        else if (((uVar3 == 0x25) && (cVar2 = FUN_0083df20(auStack_38), cVar2 != '\0')) &&
                ((cVar2 = FUN_0083df50(auStack_38), cVar2 != '\0' ||
                 (cVar2 = FUN_0083e050(auStack_38), cVar2 != '\0')))) {
          FUN_0083de80(auStack_38);
        }
        goto LAB_0083e325;
      }
      if (uVar3 == 0x23) {
        cVar2 = FUN_0083df20(auStack_38);
        if ((cVar2 != '\0') &&
           ((cVar2 = FUN_0083df50(auStack_38), cVar2 != '\0' ||
            (cVar2 = FUN_0083dff0(auStack_38), cVar2 != '\0')))) {
          FUN_0083de80(auStack_38);
        }
        goto LAB_0083e325;
      }
      if (uVar3 == 9) {
        if ((param_3 & 2) == 0) {
          FUN_0083de80(auStack_38);
        }
        goto LAB_0083e325;
      }
      if ((uVar3 != 0x1b) && (1 < uVar3 - 0x21)) goto LAB_0083e325;
    }
  }
  else {
    if (0x2d < uVar3) {
      if (uVar3 == 0x2e) {
        cVar2 = FUN_0083df50(auStack_38);
        if (cVar2 == '\0') {
          uVar1 = *(undefined8 *)(param_1 + 0x508);
          pcVar4 = (code *)FUN_00411550(uVar1,0xffa9);
          cVar2 = (*pcVar4)(uVar1);
          if (cVar2 == '\0') {
            *param_2 = 0;
          }
        }
        else {
          FUN_0083de80(auStack_38);
        }
      }
      else if ((uVar3 == 0x71) && (FUN_0083ded0(auStack_38), *param_2 == 0x71)) {
        FUN_0083e590(param_1);
        return;
      }
      goto LAB_0083e325;
    }
    if (uVar3 == 0x2d) {
      if (param_3 == 0) {
        FUN_0083de80(auStack_38);
      }
      else if (param_3 == 1) {
        uVar1 = *(undefined8 *)(param_1 + 0x508);
        pcVar4 = (code *)FUN_00411550(uVar1,0xffa9);
        cVar2 = (*pcVar4)(uVar1);
        if (cVar2 == '\0') {
          *param_2 = 0;
        }
      }
      goto LAB_0083e325;
    }
    if (uVar3 == 0x27) {
      cVar2 = FUN_0083df20(auStack_38);
      if ((cVar2 != '\0') &&
         ((cVar2 = FUN_0083df50(auStack_38), cVar2 != '\0' ||
          (cVar2 = FUN_0083dff0(auStack_38), cVar2 != '\0')))) {
        FUN_0083de80(auStack_38);
      }
      goto LAB_0083e325;
    }
    if (uVar3 != 0x28) goto LAB_0083e325;
  }
  FUN_0083de80(auStack_38);
LAB_0083e325:
  if (*param_2 != 0) {
    FUN_0083ded0(auStack_38);
    FUN_00834d30(param_1,param_2,param_3);
  }
  return;
}

