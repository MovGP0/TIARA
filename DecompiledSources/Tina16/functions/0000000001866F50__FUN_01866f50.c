/* Ghidra address: 01866f50 */
/* Ghidra symbol: FUN_01866f50 */


undefined8 FUN_01866f50(longlong param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_018673a0(param_1,iVar6);
      iVar2 = (**(code **)(lVar4 + 0x88))(lVar4);
      if (iVar2 == param_2) {
        lVar4 = FUN_018673a0(param_1,iVar6);
        uVar3 = (**(code **)(lVar4 + 0x98))(lVar4);
        cVar1 = FUN_01867400(param_1,param_3,uVar3);
        if (cVar1 != '\0') {
          uVar5 = FUN_018673a0(param_1,iVar6);
          return uVar5;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0;
}

