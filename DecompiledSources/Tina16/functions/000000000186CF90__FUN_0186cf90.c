/* Ghidra address: 0186cf90 */
/* Ghidra symbol: FUN_0186cf90 */


void FUN_0186cf90(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_01929d50);
  if (cVar3 != '\0') {
    plVar1 = (longlong *)FUN_006a6030();
    uVar2 = FUN_01966ad0(param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
  }
  return;
}

