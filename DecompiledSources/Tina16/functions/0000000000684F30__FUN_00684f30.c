/* Ghidra address: 00684f30 */
/* Ghidra symbol: FUN_00684f30 */


void FUN_00684f30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_00655080(param_1);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0x141,(longlong)*(int *)(param_1 + 0x498),0);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x1701,(longlong)*(int *)(param_1 + 0x49c),0);
    }
  }
  return;
}

