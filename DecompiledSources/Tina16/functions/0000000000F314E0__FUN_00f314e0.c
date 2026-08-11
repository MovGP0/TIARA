/* Ghidra address: 00f314e0 */
/* Ghidra symbol: FUN_00f314e0 */


ulonglong FUN_00f314e0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_00f2e320(param_2);
  if ((*(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_2 + 8)) &&
     (*(int *)(param_2 + 0x34) <= *(int *)(param_2 + 0x30))) {
    lVar3 = *(ulonglong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
    if (0xffffffff < lVar3 + 0x80000000U) {
      lVar3 = FUN_00410a90();
    }
    uVar4 = (ulonglong)(uint)-(int)lVar3;
  }
  else {
    cVar2 = FUN_00f2e280(param_2);
    if (cVar2 == '{') {
      if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x34)) {
        *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      }
      else {
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      }
      FUN_00f2e320(param_2);
      if ((*(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_2 + 8)) &&
         (*(int *)(param_2 + 0x34) <= *(int *)(param_2 + 0x30))) {
        lVar3 = *(ulonglong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
        if (0xffffffff < lVar3 + 0x80000000U) {
          lVar3 = FUN_00410a90();
        }
        uVar4 = (ulonglong)(uint)-(int)lVar3;
      }
      else {
        bVar1 = false;
        do {
          while( true ) {
            if ((!bVar1) && (cVar2 = FUN_00f2e280(param_2), cVar2 == '}')) {
              if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x34)) {
                *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
              }
              else {
                *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
              }
              FUN_00f2e320(param_2);
              uVar4 = *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
              if (uVar4 + 0x80000000 < 0x100000000) {
                return uVar4;
              }
              uVar4 = FUN_00410a90();
              return uVar4;
            }
            uVar4 = FUN_00f31860(param_2,param_1,param_3);
            if ((int)uVar4 < 1) {
              return uVar4;
            }
            FUN_00f2e320(param_2);
            if ((*(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_2 + 8)) &&
               (*(int *)(param_2 + 0x34) <= *(int *)(param_2 + 0x30))) {
              lVar3 = *(ulonglong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
              if (0xffffffff < lVar3 + 0x80000000U) {
                lVar3 = FUN_00410a90();
              }
              return (ulonglong)(uint)-(int)lVar3;
            }
            bVar1 = false;
            cVar2 = FUN_00f2e280(param_2);
            if (cVar2 != ',') break;
            if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x34)) {
              *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
            }
            else {
              *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
            }
            FUN_00f2e320(param_2);
            bVar1 = true;
            cVar2 = FUN_00f2e280(param_2);
            if (cVar2 == '}') {
              lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
              if (0xffffffff < lVar3 + 0x80000000U) {
                lVar3 = FUN_00410a90();
              }
              return (ulonglong)(uint)-(int)lVar3;
            }
          }
          cVar2 = FUN_00f2e280(param_2);
        } while (cVar2 == '}');
        lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
        if (0xffffffff < lVar3 + 0x80000000U) {
          lVar3 = FUN_00410a90();
        }
        uVar4 = (ulonglong)(uint)-(int)lVar3;
      }
    }
    else {
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10);
      if (0xffffffff < lVar3 + 0x80000000U) {
        lVar3 = FUN_00410a90();
      }
      uVar4 = (ulonglong)(uint)-(int)lVar3;
    }
  }
  return uVar4;
}

