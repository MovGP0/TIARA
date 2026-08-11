/* Ghidra address: 00ac4570 */
/* Ghidra symbol: FUN_00ac4570 */


void FUN_00ac4570(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  local_30 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0);
  plVar2 = *(longlong **)(lVar1 + 0x4b0);
  plVar3 = (longlong *)FUN_00af9510(plVar2);
  *(longlong **)(param_1 + 0x1a0) = plVar3;
  (**(code **)(*plVar3 + 0x130))(plVar3,lVar1);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_00afbed0(plVar2,&local_28);
    if (local_28 == (code *)0x0) {
      (**(code **)(*plVar2 + 0x448))(plVar2,&local_30,*(undefined8 *)(param_1 + 0x1a8),0);
      FUN_00414ad0(param_1 + 0x1b0,local_30);
    }
    else {
      FUN_00afbed0(plVar2,&local_28);
      (*local_28)(local_20,plVar2,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b0);
    }
  }
  FUN_00414480(&local_30);
  return;
}

