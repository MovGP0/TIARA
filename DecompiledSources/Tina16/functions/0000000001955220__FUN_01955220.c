/* Ghidra address: 01955220 */
/* Ghidra symbol: FUN_01955220 */


undefined4 FUN_01955220(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0191c328);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x2a8))(plVar1);
    }
  }
  return uVar3;
}

