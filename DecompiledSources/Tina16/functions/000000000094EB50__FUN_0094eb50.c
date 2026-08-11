/* Ghidra address: 0094eb50 */
/* Ghidra symbol: FUN_0094eb50 */


undefined8 FUN_0094eb50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1);
    if (iVar2 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                        (*(longlong **)(param_1 + 0x68),iVar2);
    }
  }
  return uVar3;
}

