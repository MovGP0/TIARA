/* Ghidra address: 018671d0 */
/* Ghidra symbol: FUN_018671d0 */


undefined8 FUN_018671d0(longlong param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_018673a0(param_1,iVar5);
      lVar3 = (**(code **)(lVar3 + 0x68))(lVar3);
      if (lVar3 == param_2) {
LAB_0186723b:
        lVar3 = FUN_018673a0(param_1,iVar5);
        uVar2 = (**(code **)(lVar3 + 0x98))(lVar3);
        cVar1 = FUN_01867400(param_1,param_3,uVar2);
        if (cVar1 != '\0') {
          uVar4 = FUN_018673a0(param_1,iVar5);
          return uVar4;
        }
      }
      else {
        lVar3 = FUN_018673a0(param_1,iVar5);
        uVar4 = (**(code **)(lVar3 + 0x68))(lVar3);
        cVar1 = FUN_00411580(param_2,uVar4);
        if (cVar1 != '\0') goto LAB_0186723b;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

