/* Ghidra address: 00d994a0 */
/* Ghidra symbol: FUN_00d994a0 */


void FUN_00d994a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_0201a188 != 0) && (cVar2 = FUN_00da0d10(DAT_0201a188,param_2), cVar2 != '\0')) {
    iVar3 = FUN_00654c00();
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00654bc0(param_2,iVar4);
        cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00640c18);
        if (cVar2 != '\0') {
          (**(code **)(param_1 + 0x20))(param_1,uVar1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = FUN_00d9ff90(DAT_0201a188,param_2);
    FUN_00410f20(uVar1);
    FUN_00da09b0(DAT_0201a188,param_2);
  }
  return;
}

