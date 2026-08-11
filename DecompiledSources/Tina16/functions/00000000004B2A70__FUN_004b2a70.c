/* Ghidra address: 004b2a70 */
/* Ghidra symbol: FUN_004b2a70 */


void FUN_004b2a70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0045aee0(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  }
  cVar1 = FUN_0045aee0(param_2);
  if (cVar1 == '\0') {
    if (param_2 == (longlong *)0x0) {
      uVar2 = FUN_00458d50();
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
  }
  else {
    *(longlong **)(param_1 + 0x10) = param_2;
  }
  return;
}

