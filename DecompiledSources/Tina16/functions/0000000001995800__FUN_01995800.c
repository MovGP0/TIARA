/* Ghidra address: 01995800 */
/* Ghidra symbol: FUN_01995800 */


void FUN_01995800(longlong param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  bVar1 = false;
  iVar3 = *(int *)(param_1 + 0x390);
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x10))) {
    uVar4 = FUN_00b94e60(param_1,iVar3);
    cVar2 = FUN_0198a580(uVar4);
    if (cVar2 == '\x04') {
      lVar5 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x390));
      cVar2 = FUN_01d01970(lVar5);
      if (cVar2 == '\0') {
        cVar2 = FUN_01d04d40(lVar5);
        if (cVar2 == '\0') {
          bVar1 = true;
        }
        else if ((((char)param_2 == '\0') &&
                 (*(char *)(*(longlong *)(lVar5 + 0x1a8) + 0x70) != '\x03')) &&
                (((param_3 & 1) == 0 ||
                 ((*(char *)(*(longlong *)(lVar5 + 0x1a8) + 0x70) != '\x02' ||
                  (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0xb0))
                                     (*(longlong **)(param_1 + 0x458),
                                      *(undefined8 *)(*(longlong *)(lVar5 + 0x1a8) + 0x40)),
                  iVar3 < 0)))))) {
          FUN_01d04f00(lVar5,param_2,param_3);
          lVar5 = FUN_01d04ec0(lVar5,param_2,param_3);
          if (lVar5 == 0) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else if ((char)param_2 == '\0') {
        FUN_01d018f0(lVar5);
        lVar5 = FUN_01d013c0(lVar5,param_3);
        if (lVar5 == 0) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
      goto LAB_01995936;
    }
  }
  bVar1 = true;
LAB_01995936:
  if (bVar1) {
    *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
    while (*(int *)(param_1 + 0x390) < *(int *)(param_1 + 0x10)) {
      uVar4 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x390));
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 == '\x04') {
        return;
      }
      *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
    }
  }
  return;
}

