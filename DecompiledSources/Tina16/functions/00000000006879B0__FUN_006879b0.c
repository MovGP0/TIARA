/* Ghidra address: 006879b0 */
/* Ghidra symbol: FUN_006879b0 */


void FUN_006879b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00777cd0();
  cVar1 = FUN_00777ce0(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    if ((param_1[0xf] == 0) || (*(char *)(param_1[0xf] + 0x478) == '\0')) {
      uVar3 = FUN_0065b870(param_1);
      FUN_00778e90(uVar2,uVar3,*(undefined8 *)(param_2 + 8),0,0,0);
    }
    else {
      FUN_006487e0(param_1,*(undefined8 *)(param_2 + 8));
    }
    uVar2 = thunk_FUN_041715dd(5);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
  }
  return;
}

