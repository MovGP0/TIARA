/* Ghidra address: 00c56740 */
/* Ghidra symbol: FUN_00c56740 */


ulonglong FUN_00c56740(longlong param_1,ushort *param_2,undefined2 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  
  FUN_00659710(param_1,param_2,param_3);
  uVar2 = *(uint *)(param_1 + 0x4f8);
  iVar3 = *(int *)(param_1 + 0x504);
  uVar4 = iVar3 * *(int *)(param_1 + 0x508);
  uVar7 = (ulonglong)uVar4;
  uVar1 = *param_2;
  if (uVar1 < 0x28) {
    if (uVar1 != 0x27) {
      if (0x24 < uVar1) {
        if (uVar1 == 0x25) {
          if (uVar2 == 0) {
            uVar8 = uVar4 - 1;
          }
          else {
            uVar8 = uVar2 - 1;
          }
        }
        else {
          if (uVar1 != 0x26) goto LAB_00c5699b;
          if ((int)uVar2 < iVar3) {
            if (uVar2 == 0) {
              uVar8 = uVar4 - 1;
            }
            else {
              uVar8 = ((uVar4 - iVar3) + uVar2) - 1;
            }
          }
          else {
            uVar8 = uVar2 - iVar3;
          }
        }
        goto LAB_00c569ae;
      }
      if (uVar1 == 0x24) {
        uVar8 = 0;
        goto LAB_00c569ae;
      }
      if (uVar1 != 0x20) {
        if (uVar1 != 0x23) goto LAB_00c5699b;
        uVar8 = uVar4 - 1;
        goto LAB_00c569ae;
      }
    }
    uVar7 = (ulonglong)(uVar4 - 1);
    if (uVar2 == uVar4 - 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar2 + 1;
    }
    goto LAB_00c569ae;
  }
  uVar8 = uVar2;
  if (uVar1 < 0x47) {
    if (uVar1 == 0x46) {
LAB_00c56826:
      if ((*(char *)(param_1 + 0x4f4) == '\0') && (*(char *)(param_1 + 0x4e8) != '\0')) {
        *(undefined1 *)(param_1 + 0x4f4) = 1;
        if ((*(int *)(param_1 + 0x4ec) == *(int *)(param_1 + 0x4f8)) &&
           (*(char *)(param_1 + 0x50d) != '\0')) {
          uVar5 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4ec) >> 8),1);
        }
        else {
          uVar5 = 0;
        }
        FUN_00c55c70(param_1,*(undefined4 *)(param_1 + 0x4ec),uVar5);
        *(undefined4 *)(param_1 + 0x4ec) = 0xffffffff;
      }
      FUN_00c56db0(param_1,uVar2);
      FUN_00c56eb0(param_1,uVar2);
      pcVar6 = (code *)FUN_00411550(param_1,0xffea);
      uVar7 = (*pcVar6)(param_1);
      goto LAB_00c569ae;
    }
    if (uVar1 == 0x28) {
      uVar8 = uVar2 + iVar3;
      if ((int)uVar4 <= (int)(uVar2 + iVar3)) {
        uVar7 = (ulonglong)(uVar4 - 1);
        if (uVar2 == uVar4 - 1) {
          uVar8 = 0;
        }
        else {
          uVar7 = (longlong)(int)uVar2 / (longlong)iVar3 & 0xffffffff;
          uVar8 = (int)uVar2 % iVar3 + 1;
        }
      }
      goto LAB_00c569ae;
    }
    if (uVar1 != 0x42) goto LAB_00c5699b;
  }
  else if (uVar1 != 0x62) {
    if (uVar1 != 0x66) {
LAB_00c5699b:
      uVar7 = FUN_00659710(param_1,param_2,param_3);
      return uVar7;
    }
    goto LAB_00c56826;
  }
  if ((*(char *)(param_1 + 0x4f5) == '\0') && (*(char *)(param_1 + 0x4e8) != '\0')) {
    *(undefined1 *)(param_1 + 0x4f5) = 1;
    if ((*(int *)(param_1 + 0x4f0) == *(int *)(param_1 + 0x4f8)) &&
       (*(char *)(param_1 + 0x50d) != '\0')) {
      uVar5 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4f0) >> 8),1);
    }
    else {
      uVar5 = 0;
    }
    FUN_00c55c70(param_1,*(undefined4 *)(param_1 + 0x4f0),uVar5);
    *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  }
  FUN_00c56d00(param_1,uVar2);
  FUN_00c56eb0(param_1,uVar2);
  pcVar6 = (code *)FUN_00411550(param_1,0xffea);
  uVar7 = (*pcVar6)(param_1);
LAB_00c569ae:
  *param_2 = 0;
  if (*(uint *)(param_1 + 0x4f8) != uVar8) {
    uVar7 = FUN_00c56eb0(param_1,uVar8);
  }
  return uVar7;
}

