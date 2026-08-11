/* Ghidra address: 01867540 */
/* Ghidra symbol: FUN_01867540 */


undefined4 FUN_01867540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_018673a0(param_1,iVar5);
      uVar2 = (**(code **)(lVar4 + 0x98))(lVar4);
      cVar1 = FUN_01867400(param_1,2,uVar2);
      if (cVar1 != '\0') {
        lVar4 = FUN_018673a0(param_1,iVar5);
        cVar1 = (**(code **)(lVar4 + 200))(lVar4,param_3);
        if (cVar1 != '\0') {
          lVar4 = FUN_018673a0(param_1,iVar5);
          uVar3 = (**(code **)(lVar4 + 0xd8))(lVar4,param_2,param_3);
          if ((char)uVar3 != '\0') {
            return uVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar3;
}

