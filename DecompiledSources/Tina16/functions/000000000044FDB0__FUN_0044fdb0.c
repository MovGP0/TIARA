/* Ghidra address: 0044fdb0 */
/* Ghidra symbol: FUN_0044fdb0 */


ulonglong FUN_0044fdb0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_3 == '\0') {
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = *(undefined4 *)(param_1 + -4);
    }
    uVar6 = 0;
    if (param_2 != 0) {
      uVar6 = *(undefined4 *)(param_2 + -4);
    }
    uVar2 = FUN_00416740();
    uVar3 = FUN_00416740(param_2);
    iVar1 = (*DAT_0200c8b0)(uVar2,uVar5,uVar3,uVar6,1);
    uVar4 = (ulonglong)(iVar1 - 2);
  }
  else {
    uVar4 = FUN_0044fa70(param_1,param_2);
  }
  return uVar4;
}

