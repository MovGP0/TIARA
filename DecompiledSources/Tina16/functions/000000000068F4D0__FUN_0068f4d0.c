/* Ghidra address: 0068f4d0 */
/* Ghidra symbol: FUN_0068f4d0 */


void FUN_0068f4d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 != '\0') && (cVar1 = FUN_0068f5c0(param_1), cVar1 != '\0')) {
    thunk_FUN_03b994b9(*(undefined8 *)(param_2 + 8),1);
    uVar3 = FUN_00777cd0();
    uVar4 = FUN_0065b870(param_1);
    FUN_00778e90(uVar3,uVar4,*(undefined8 *)(param_2 + 8),0,0,0);
    uVar3 = thunk_FUN_041715dd(5);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    return;
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

