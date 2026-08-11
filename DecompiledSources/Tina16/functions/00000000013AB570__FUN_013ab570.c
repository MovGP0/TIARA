/* Ghidra address: 013ab570 */
/* Ghidra symbol: FUN_013ab570 */


void FUN_013ab570(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  undefined4 uVar4;
  
  plVar1 = *(longlong **)(param_3 + 0x18);
  plVar2 = *(longlong **)(param_4 + 0x18);
  if ((((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) &&
      ((undefined **)*plVar1 != &PTR_FUN_01984d18)) && ((undefined **)*plVar2 != &PTR_FUN_01984d18))
  {
    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((sVar3 == 0x39) || (sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar3 == 0x39)) &&
       ((sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 != 0x39 ||
        (sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar3 != 0x39)))) {
      sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if ((sVar3 == 0x39) && (sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar3 != 0x39)) {
        *param_6 = 0xffffffff;
        return;
      }
      *param_6 = 1;
    }
    else {
      uVar4 = FUN_0043e650(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
      *param_6 = uVar4;
    }
    return;
  }
  *param_6 = 0;
  return;
}

