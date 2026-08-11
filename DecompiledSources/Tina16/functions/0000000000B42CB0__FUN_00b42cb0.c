/* Ghidra address: 00b42cb0 */
/* Ghidra symbol: FUN_00b42cb0 */


undefined8 FUN_00b42cb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x88),0);
  if (iVar2 == 0) {
    iVar2 = FUN_00b41f50();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar5 = FUN_00b41f30(*(undefined8 *)(param_1 + 0x80),iVar7);
        lVar5 = (**(code **)**(undefined8 **)(lVar5 + 8))(*(undefined8 **)(lVar5 + 8));
        lVar6 = (**(code **)**(undefined8 **)(param_1 + 0x58))(*(undefined8 **)(param_1 + 0x58));
        if (lVar5 == lVar6) {
          lVar5 = FUN_00b41f30(*(undefined8 *)(param_1 + 0x80),iVar7);
          FUN_004b6dc0(*(undefined8 *)(lVar5 + 8),0);
          FUN_004b6dc0(*(undefined8 *)(param_1 + 0x90),0);
          lVar5 = FUN_00b41f30(*(undefined8 *)(param_1 + 0x80),iVar7);
          uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x58))(*(undefined8 **)(param_1 + 0x58));
          cVar1 = FUN_0043e2c0(*(undefined8 *)(*(longlong *)(lVar5 + 8) + 8),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),uVar4);
          if (cVar1 != '\0') {
            **(int **)(param_1 + 0x98) = iVar7;
            break;
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = FUN_00b41f50();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar5 = FUN_00b41f30(*(undefined8 *)(param_1 + 0x80),iVar7);
        iVar3 = FUN_00416420(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(param_1 + 0x88));
        if (iVar3 == 0) {
          **(int **)(param_1 + 0x98) = iVar7;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return CONCAT71((int7)((ulonglong)*(int **)(param_1 + 0x98) >> 8),-1 < **(int **)(param_1 + 0x98))
  ;
}

