/* Ghidra address: 008065b0 */
/* Ghidra symbol: FUN_008065b0 */


ulonglong FUN_008065b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar2 = FUN_004d3e30();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_004d3de0(param_2,iVar6);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_0061b768);
      if (cVar1 == '\0') {
        uVar3 = FUN_008065b0(param_1,uVar4);
        uVar5 = (ulonglong)uVar3;
        if ((char)uVar3 != '\0') {
          return uVar5;
        }
      }
      else {
        cVar1 = FUN_0061ce70(uVar4,*(undefined8 *)(param_1 + 0x58));
        if (cVar1 != '\0') {
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar5;
}

