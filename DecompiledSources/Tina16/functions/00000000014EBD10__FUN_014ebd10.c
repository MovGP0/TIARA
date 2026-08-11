/* Ghidra address: 014ebd10 */
/* Ghidra symbol: FUN_014ebd10 */


undefined8 FUN_014ebd10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x718);
  iVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
  if (iVar2 == 0) {
    FUN_00414480(param_2);
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],param_2,uVar3);
  }
  return param_2;
}

