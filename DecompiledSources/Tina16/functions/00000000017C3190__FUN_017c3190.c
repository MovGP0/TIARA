/* Ghidra address: 017c3190 */
/* Ghidra symbol: FUN_017c3190 */


undefined8 FUN_017c3190(longlong *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined6 uVar6;
  
  uVar5 = 0;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    iVar3 = (**(code **)(*param_1 + 0x138))(param_1);
    if (-1 < iVar3) {
      if (iVar3 % 2 == 0) {
        uVar5 = 0x1e;
      }
      else {
        uVar4 = (longlong)iVar3 / 2 & 0xffffffff;
        sVar1 = FUN_017c2c60(param_1,uVar4);
        sVar2 = FUN_017c2c60(param_1,(int)((longlong)iVar3 / 2) + 1);
        uVar6 = (undefined6)(uVar4 >> 0x10);
        if (sVar1 == sVar2) {
          uVar5 = CONCAT62(uVar6,0xfff7);
        }
        else {
          uVar5 = CONCAT62(uVar6,0xfff9);
        }
      }
    }
  }
  return uVar5;
}

