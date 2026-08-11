/* Ghidra address: 01995cb0 */
/* Ghidra symbol: FUN_01995cb0 */


void FUN_01995cb0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  bVar1 = false;
  if ((*(int *)(param_1 + 0x394) < 0) || (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x394))) {
    bVar1 = true;
  }
  else {
    if ((char)param_2 != '\0') {
      uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x04') {
        uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
        cVar2 = FUN_01d04d40(uVar3);
        if ((cVar2 != '\0') &&
           (lVar4 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394)),
           *(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) == '\x01')) {
          uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
          FUN_01d04fb0(uVar3,param_2);
          uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
          lVar4 = FUN_01d04f70(uVar3,param_2);
          if (lVar4 == 0) {
            bVar1 = true;
          }
          goto LAB_01995d94;
        }
      }
    }
    uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
    cVar2 = FUN_0198a580(uVar3);
    if (cVar2 == '\x05') {
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
LAB_01995d94:
  if (bVar1) {
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    while (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x10)) {
      uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x04') {
        return;
      }
      uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x05') {
        return;
      }
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    }
  }
  return;
}

