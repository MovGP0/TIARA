/* Ghidra address: 00651a30 */
/* Ghidra symbol: FUN_00651a30 */


void FUN_00651a30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  for (plVar3 = *(longlong **)(param_1 + 0x78); plVar3 != (longlong *)0x0;
      plVar3 = (longlong *)plVar3[0xf]) {
    cVar2 = FUN_0065be20(plVar3);
    if (cVar2 != '\0') break;
  }
  if (plVar3 == (longlong *)0x0) {
    uVar1 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_LAB_020026f8);
    FUN_004134c0(uVar1);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  return;
}

