/* Ghidra address: 01bfb970 */
/* Ghidra symbol: FUN_01bfb970 */


void FUN_01bfb970(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  cVar2 = (char)param_3;
  FUN_004b2680(param_1,param_2,param_3);
  if (cVar2 == '\x01') {
    FUN_004113f0(param_2,&PTR_FUN_01bee178);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar4 = FUN_01bfab50(*(longlong *)(param_1 + 0x38));
      FUN_01bf9980(uVar4,1);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
      if ((plVar5 == (longlong *)0x0) &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x30), plVar5 = (longlong *)0x0,
         plVar1 != (longlong *)0x0)) {
        plVar5 = plVar1;
      }
      if (((*(int *)(param_1 + 0x18) == 0) && (plVar5 != (longlong *)0x0)) &&
         (cVar2 = FUN_0065be20(plVar5), cVar2 != '\0')) {
        (**(code **)(*plVar5 + 0x340))(plVar5,param_2);
      }
    }
  }
  else if (cVar2 == '\x02') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
    if (((cVar2 != '\0') && (lVar3 = FUN_01bfaa40(param_2), lVar3 != 0)) &&
       (lVar3 = FUN_01bfaa40(param_2), *(longlong *)(lVar3 + 0x30) != 0)) {
      lVar3 = FUN_01bfaa40(param_2);
      cVar2 = FUN_0065be20(*(undefined8 *)(lVar3 + 0x30));
      if (cVar2 != '\0') {
        lVar3 = FUN_01bfaa40(param_2);
        uVar4 = FUN_0065b870(*(undefined8 *)(lVar3 + 0x30));
        thunk_FUN_0413e052(uVar4,5,0,0);
      }
    }
  }
  else if (cVar2 == '\x04') {
    FUN_01bfa910(param_2);
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
    if (((cVar2 != '\0') && (lVar3 = FUN_01bfaa40(param_2), lVar3 != 0)) &&
       (lVar3 = FUN_01bfaa40(param_2), *(longlong *)(lVar3 + 0x30) != 0)) {
      lVar3 = FUN_01bfaa40(param_2);
      cVar2 = FUN_0065be20(*(undefined8 *)(lVar3 + 0x30));
      if (cVar2 != '\0') {
        lVar3 = FUN_01bfaa40(param_2);
        uVar4 = FUN_0065b870(*(undefined8 *)(lVar3 + 0x30));
        thunk_FUN_0413e052(uVar4,5,0,0);
      }
    }
  }
  return;
}

