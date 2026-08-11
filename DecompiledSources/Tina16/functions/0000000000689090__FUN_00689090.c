/* Ghidra address: 00689090 */
/* Ghidra symbol: FUN_00689090 */


void FUN_00689090(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    if ((param_1[0xf] == 0) || (*(char *)(param_1[0xf] + 0x478) == '\0')) {
      uVar3 = FUN_0065b870(param_1);
      FUN_00778e90(plVar2,uVar3,*(undefined8 *)(param_2 + 8),0,0,0);
    }
    else {
      FUN_006487e0(param_1,*(undefined8 *)(param_2 + 8));
    }
    uVar3 = thunk_FUN_041715dd(5);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
  }
  return;
}

