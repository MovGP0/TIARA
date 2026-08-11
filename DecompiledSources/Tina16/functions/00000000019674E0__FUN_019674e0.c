/* Ghidra address: 019674e0 */
/* Ghidra symbol: FUN_019674e0 */


int FUN_019674e0(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  short local_30;
  short local_2e;
  int local_2c;
  
  iVar5 = -0x7ff8ffa9;
  if (param_3 == '\0') {
    iVar2 = FUN_004b6da0(param_2);
  }
  else {
    iVar2 = 0;
  }
  FUN_004b6dc0(param_2,(longlong)iVar2);
  lVar3 = (**(code **)*param_2)(param_2);
  if (lVar3 < 1) goto LAB_01967592;
  lVar3 = (**(code **)*param_2)(param_2);
  if (7 < lVar3) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_30,8);
    if ((local_30 == 1) && (local_2e == 0x100)) {
      lVar3 = (**(code **)*param_2)(param_2);
      if ((longlong)local_2c == lVar3 + -8) goto LAB_01967575;
    }
    FUN_004b6dc0(param_2,(longlong)iVar2);
  }
LAB_01967575:
  uVar4 = FUN_018669c0();
  cVar1 = FUN_01867540(uVar4,*(undefined8 *)(param_1 + 0x2c8),param_2);
  if (cVar1 != '\0') {
    iVar5 = 0;
  }
LAB_01967592:
  if (iVar5 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x10))(*(longlong **)(param_1 + 0x2c8),0);
  }
  return iVar5;
}

