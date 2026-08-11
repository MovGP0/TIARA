/* Ghidra address: 01867490 */
/* Ghidra symbol: FUN_01867490 */


longlong FUN_01867490(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_018673a0(param_1,iVar5);
      uVar2 = (**(code **)(lVar3 + 0x98))(lVar3);
      cVar1 = FUN_01867400(param_1,2,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_018673a0(param_1,iVar5);
        cVar1 = (**(code **)(lVar3 + 200))(lVar3,param_2);
        if (cVar1 != '\0') {
          lVar4 = FUN_018673a0(param_1,iVar5);
          lVar4 = (**(code **)(lVar4 + 0x30))(lVar4,param_2);
          if (lVar4 != 0) {
            return lVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return lVar4;
}

