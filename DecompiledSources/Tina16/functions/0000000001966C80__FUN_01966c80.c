/* Ghidra address: 01966c80 */
/* Ghidra symbol: FUN_01966c80 */


void FUN_01966c80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 == '\0') {
      lVar2 = FUN_00410ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x18));
      goto LAB_01966cfa;
    }
  }
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x20))
                       (*(longlong **)(param_1 + 0x2d8),2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
      lVar2 = 0;
      if (cVar1 == '\0') {
        lVar2 = FUN_00410ad0(plVar3);
      }
    }
  }
LAB_01966cfa:
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    if (lVar4 != 0) {
      lVar4 = (**(code **)(lVar4 + 0x68))(lVar4);
      if (lVar4 != lVar2) {
        *(undefined8 *)(param_1 + 0x2e0) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      uVar5 = FUN_018669c0();
      uVar5 = FUN_018671d0(uVar5,lVar2,0);
      *(undefined8 *)(param_1 + 0x2e0) = uVar5;
    }
  }
  return;
}

