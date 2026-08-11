/* Ghidra address: 007fd980 */
/* Ghidra symbol: FUN_007fd980 */


void FUN_007fd980(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*PTR_DAT_02003210 == '\0') {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = FUN_007f9220(uVar3);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  else {
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x4d1) != '\x03')) {
      uVar3 = FUN_0065b870(param_1);
      uVar4 = FUN_008029f0(param_1);
      thunk_FUN_041b2403(uVar3,0x80,1,uVar4);
    }
  }
  return;
}

