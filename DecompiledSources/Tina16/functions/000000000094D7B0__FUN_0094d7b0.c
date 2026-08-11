/* Ghidra address: 0094d7b0 */
/* Ghidra symbol: FUN_0094d7b0 */


undefined8 FUN_0094d7b0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(*plVar2 + 0x168))(plVar2);
    if (cVar1 == '\x01') break;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x170))(plVar2);
  }
  uVar3 = FUN_004113f0(plVar2,&PTR_FUN_0090a420);
  return uVar3;
}

