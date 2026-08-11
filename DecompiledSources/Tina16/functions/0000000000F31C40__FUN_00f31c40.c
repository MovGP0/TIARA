/* Ghidra address: 00f31c40 */
/* Ghidra symbol: FUN_00f31c40 */


ulonglong FUN_00f31c40(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
  if (0xffffffff < lVar1 + 0x80000000U) {
    FUN_00410a90();
  }
  iVar5 = (int)lVar1;
  if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
     (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
    return (ulonglong)(uint)-iVar5;
  }
  uVar3 = FUN_00f2e280(param_1);
  uVar3 = uVar3 & 0xff;
  if (uVar3 < 0x67) {
    if (uVar3 == 0x66) {
      cVar2 = FUN_00f2e3d0(param_1,4);
      if (cVar2 == '\0') {
        return (ulonglong)(uint)-iVar5;
      }
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      else {
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      }
      cVar2 = FUN_00f2d670(param_1);
      if (((cVar2 == 'a') && (cVar2 = FUN_00f2d670(param_1), cVar2 == 'l')) &&
         ((cVar2 = FUN_00f2d670(param_1), cVar2 == 's' &&
          (cVar2 = FUN_00f2d670(param_1), cVar2 == 'e')))) {
        if ((char)param_3 == '\0') {
          uVar4 = FUN_00f33040(&LAB_00f25250,1);
          (**(code **)(*param_2 + 8))(param_2,uVar4);
        }
        else {
          uVar4 = FUN_00f34790(&LAB_00f24cc8,1,0);
          (**(code **)(*param_2 + 8))(param_2,uVar4);
        }
        uVar3 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (uVar3 + 0x80000000 < 0x100000000) {
          return uVar3;
        }
        uVar3 = FUN_00410a90();
        return uVar3;
      }
      return (ulonglong)(uint)-iVar5;
    }
    if (uVar3 == 0x22) {
      uVar3 = FUN_00f32880(param_1,param_2);
      return uVar3;
    }
    if ((uVar3 == 0x2d) || (uVar3 - 0x30 < 10)) {
      uVar3 = FUN_00f320f0(param_1,param_2);
      return uVar3;
    }
    if (uVar3 - 0x30 == 0x2b) {
      uVar3 = FUN_00f31960(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    if (uVar3 == 0x6e) {
      cVar2 = FUN_00f2e3d0(param_1,3);
      if (cVar2 == '\0') {
        return (ulonglong)(uint)-iVar5;
      }
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      else {
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      }
      cVar2 = FUN_00f2d670(param_1);
      if (((cVar2 == 'u') && (cVar2 = FUN_00f2d670(param_1), cVar2 == 'l')) &&
         (cVar2 = FUN_00f2d670(param_1), cVar2 == 'l')) {
        uVar4 = FUN_00f2cef0(&LAB_00f249d0,1);
        (**(code **)(*param_2 + 8))(param_2,uVar4);
        uVar3 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (uVar3 + 0x80000000 < 0x100000000) {
          return uVar3;
        }
        uVar3 = FUN_00410a90();
        return uVar3;
      }
      return (ulonglong)(uint)-iVar5;
    }
    if (uVar3 == 0x74) {
      cVar2 = FUN_00f2e3d0(param_1,3);
      if (cVar2 == '\0') {
        return (ulonglong)(uint)-iVar5;
      }
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      else {
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      }
      cVar2 = FUN_00f2d670(param_1);
      if (((cVar2 == 'r') && (cVar2 = FUN_00f2d670(param_1), cVar2 == 'u')) &&
         (cVar2 = FUN_00f2d670(param_1), cVar2 == 'e')) {
        if ((char)param_3 == '\0') {
          uVar4 = FUN_00f2e870(&LAB_00f25068,1);
          (**(code **)(*param_2 + 8))(param_2,uVar4);
        }
        else {
          uVar4 = FUN_00f34790(&LAB_00f24cc8,1,1);
          (**(code **)(*param_2 + 8))(param_2,uVar4);
        }
        uVar3 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (uVar3 + 0x80000000 < 0x100000000) {
          return uVar3;
        }
        uVar3 = FUN_00410a90();
        return uVar3;
      }
      return (ulonglong)(uint)-iVar5;
    }
    if (uVar3 == 0x7b) {
      uVar3 = FUN_00f31770(param_1,param_2,param_3);
      return uVar3;
    }
  }
  return (ulonglong)(uint)-iVar5;
}

