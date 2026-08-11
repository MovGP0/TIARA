/* Ghidra address: 00995260 */
/* Ghidra symbol: FUN_00995260 */


undefined8 FUN_00995260(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    uVar3 = 1;
  }
  else {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00928cc0);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    }
  }
  return uVar3;
}

