/* Ghidra address: 00f31960 */
/* Ghidra symbol: FUN_00f31960 */


ulonglong FUN_00f31960(longlong param_1,longlong *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_38 [2];
  undefined1 local_30;
  
  FUN_00f2e320(param_1);
  if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
     (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
    lVar3 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
    if (0xffffffff < lVar3 + 0x80000000U) {
      lVar3 = FUN_00410a90();
    }
    uVar4 = (ulonglong)(uint)-(int)lVar3;
  }
  else {
    cVar2 = FUN_00f2e280(param_1);
    if (cVar2 == '[') {
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      else {
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      }
      lVar3 = param_1;
      if (DAT_01efb79c <= *(int *)(param_1 + 0x54)) {
        uVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        uVar5 = 0xffffffff;
        if (0xffffffff < uVar4 + 0x80000000) {
          lVar3 = FUN_00410a90();
        }
        local_38[0] = DAT_01efb79c;
        local_30 = 0;
        uVar5 = FUN_00f2c2b0(&PTR_FUN_00f21720,
                             CONCAT71((int7)((ulonglong)uVar5 >> 8),1) & 0xffffffff,
                             uVar4 & 0xffffffff,lVar3,0,PTR_PTR_020029e8,local_38,0);
        lVar3 = FUN_004134c0(uVar5);
      }
      *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
      uVar5 = FUN_00f33100(&LAB_00f256b8,1);
      (**(code **)(*param_2 + 8))(param_2,uVar5);
      bVar1 = false;
      FUN_00f2e320(param_1);
      do {
        while( true ) {
          if ((!bVar1) && (cVar2 = FUN_00f2e280(param_1), cVar2 == ']')) {
            if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            }
            else {
              *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
            }
            FUN_00f2e320(param_1);
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
            uVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
            if (uVar4 + 0x80000000 < 0x100000000) {
              return uVar4;
            }
            uVar4 = FUN_00410a90();
            return uVar4;
          }
          FUN_00f2e320(param_1);
          uVar4 = FUN_00f31c40(param_1,uVar5,param_3);
          if ((int)uVar4 < 1) {
            return uVar4;
          }
          FUN_00f2e320(param_1);
          if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
             (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
            lVar3 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
            if (0xffffffff < lVar3 + 0x80000000U) {
              lVar3 = FUN_00410a90();
            }
            return (ulonglong)(uint)-(int)lVar3;
          }
          bVar1 = false;
          cVar2 = FUN_00f2e280(param_1);
          if (cVar2 != ',') break;
          if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          else {
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          bVar1 = true;
        }
        cVar2 = FUN_00f2e280(param_1);
      } while (cVar2 == ']');
      lVar3 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar3 + 0x80000000U) {
        lVar3 = FUN_00410a90();
      }
      uVar4 = (ulonglong)(uint)-(int)lVar3;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar3 + 0x80000000U) {
        lVar3 = FUN_00410a90();
      }
      uVar4 = (ulonglong)(uint)-(int)lVar3;
    }
  }
  return uVar4;
}

