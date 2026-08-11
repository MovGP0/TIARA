/* Ghidra address: 013cff70 */
/* Ghidra symbol: FUN_013cff70 */


void FUN_013cff70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((*(int *)PTR_DAT_02002a28 == 1) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750)), cVar2 != '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x750);
    cVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*plVar1 + 0x268))(plVar1,cVar2 == '\0');
    FUN_013cd4e0(
                L"XY Plot is not allowed after AC Analysis or DC Transfer Characteristic with hysteresis"
                );
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x8c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),0);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))(*(longlong **)(param_1 + 0x748),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
    FUN_0064cbf0(*(longlong *)(param_1 + 0x700),
                 (*(int *)(*(longlong *)(param_1 + 0x758) + 0x98) -
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x90)) + -6);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),L"Line Edit");
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0xb8),0);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
              (*(longlong **)(param_1 + 0x728),*(undefined1 *)(param_1 + 0x92f));
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),1);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))(*(longlong **)(param_1 + 0x748),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),1);
    FUN_0064cbf0(*(longlong *)(param_1 + 0x700),
                 (*(int *)(*(longlong *)(param_1 + 0x748) + 0x90) -
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x90)) + -2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),L"Line Edit - X Part");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x740),L"Line Edit - Y Part");
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(undefined1 *)(param_1 + 0x92f) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728),0);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),0);
  }
  FUN_013d0340(param_1,param_2);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x308) = uVar3;
  return;
}

