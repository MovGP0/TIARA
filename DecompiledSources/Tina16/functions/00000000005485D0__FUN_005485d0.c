/* Ghidra address: 005485d0 */
/* Ghidra symbol: FUN_005485d0 */


undefined8 FUN_005485d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

