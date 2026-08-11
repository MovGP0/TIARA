/* Ghidra address: 01b75220 */
/* Ghidra symbol: FUN_01b75220 */


undefined8 FUN_01b75220(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  if (iVar2 == -1) {
    FUN_00414480(param_2);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6f8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],param_2,uVar3);
  }
  return param_2;
}

