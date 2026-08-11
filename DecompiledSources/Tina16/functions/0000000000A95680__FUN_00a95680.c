/* Ghidra address: 00a95680 */
/* Ghidra symbol: FUN_00a95680 */


undefined8 FUN_00a95680(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x198);
  if ((plVar1 == (longlong *)0x0) || (plVar1 == *(longlong **)PTR_DAT_02003010)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  }
  return uVar2;
}

