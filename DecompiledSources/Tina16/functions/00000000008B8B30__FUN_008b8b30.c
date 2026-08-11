/* Ghidra address: 008b8b30 */
/* Ghidra symbol: FUN_008b8b30 */


undefined8 FUN_008b8b30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    if (lVar1 == param_2) {
      uVar3 = 1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x90))(param_1);
      uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    }
  }
  return uVar3;
}

