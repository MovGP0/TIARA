/* Ghidra address: 00955810 */
/* Ghidra symbol: FUN_00955810 */


undefined8 FUN_00955810(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(*plVar2 + 0x168))(plVar2);
    if (cVar1 == '\n') break;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x158))(plVar2);
  }
  uVar3 = FUN_004113f0(plVar2,&PTR_FUN_0090c850);
  return uVar3;
}

