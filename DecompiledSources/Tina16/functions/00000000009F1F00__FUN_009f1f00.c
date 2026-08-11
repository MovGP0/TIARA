/* Ghidra address: 009f1f00 */
/* Ghidra symbol: FUN_009f1f00 */


ulonglong FUN_009f1f00(longlong param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
LAB_009f1f0a:
  uVar2 = FUN_00a01900(param_1);
  uVar6 = (ulonglong)uVar2;
  if (((short)uVar2 != 0x1b) ||
     (lVar5 = *(longlong *)(param_1 + 8), *(longlong *)(param_1 + 0x10) - lVar5 < 2))
  goto code_r0x009f203f;
  sVar1 = FUN_00a01900(param_1);
  if (sVar1 == 0x24) {
    sVar1 = FUN_00a01900(param_1);
    if (sVar1 != 0x28) {
      if (sVar1 != 0x40) {
        if (sVar1 == 0x41) {
          *(undefined1 *)(param_1 + 0x20) = 4;
          goto LAB_009f1f0a;
        }
        if (sVar1 != 0x42) goto LAB_009f203a;
      }
      *(undefined1 *)(param_1 + 0x20) = 2;
      goto LAB_009f1f0a;
    }
    sVar1 = FUN_00a01900(param_1);
    if (sVar1 == 0x43) {
      *(undefined1 *)(param_1 + 0x20) = 5;
      goto LAB_009f1f0a;
    }
    if (sVar1 == 0x44) {
      *(undefined1 *)(param_1 + 0x20) = 3;
      goto LAB_009f1f0a;
    }
  }
  else {
    if (sVar1 == 0x28) {
      sVar1 = FUN_00a01900(param_1);
      if (sVar1 == 0x42) {
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      else {
        if (sVar1 != 0x4a) goto LAB_009f203a;
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      goto LAB_009f1f0a;
    }
    if (sVar1 == 0x2e) {
      sVar1 = FUN_00a01900(param_1);
      if (sVar1 == 0x41) {
        *(undefined1 *)(param_1 + 0x20) = 6;
      }
      else {
        if (sVar1 != 0x46) goto LAB_009f203a;
        *(undefined1 *)(param_1 + 0x20) = 7;
      }
      goto LAB_009f1f0a;
    }
  }
LAB_009f203a:
  *(longlong *)(param_1 + 8) = lVar5;
code_r0x009f203f:
  uVar4 = (ulonglong)*(byte *)(param_1 + 0x20);
  if (uVar4 < 5) {
    if (uVar4 == 4) {
      uVar3 = FUN_00a01900(param_1);
      uVar6 = FUN_009ef750(param_1,uVar2,uVar3);
      return uVar6;
    }
    if (uVar4 == 0) {
      uVar6 = FUN_009ef730(param_1,uVar2);
      return uVar6;
    }
    if (uVar4 == 1) {
      uVar6 = FUN_009efab0(param_1,uVar2);
      return uVar6;
    }
    if (uVar4 == 2) {
      uVar3 = FUN_00a01900(param_1);
      uVar6 = FUN_009efaf0(param_1,uVar2,uVar3);
      return uVar6;
    }
    lVar5 = uVar4 - 3;
    if (lVar5 == 0) {
      uVar3 = FUN_00a01900(param_1);
      uVar6 = FUN_009efb80(param_1,uVar6,uVar3);
      return uVar6;
    }
  }
  else {
    if (uVar4 == 5) {
      uVar3 = FUN_00a01900(param_1);
      uVar6 = FUN_009efc70(param_1,uVar2,uVar3);
      return uVar6;
    }
    if (uVar4 == 6) {
      return uVar6;
    }
    lVar5 = uVar4 - 7;
    if (lVar5 == 0) {
      uVar6 = FUN_009efdf0(param_1,uVar6);
      return uVar6;
    }
  }
  return CONCAT62((int6)((ulonglong)lVar5 >> 0x10),0xfffd);
}

