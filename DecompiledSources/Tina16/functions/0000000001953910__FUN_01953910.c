/* Ghidra address: 01953910 */
/* Ghidra symbol: FUN_01953910 */


void FUN_01953910(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  cVar3 = FUN_004113d0(param_1,&PTR_FUN_0193aeb8);
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x271) != '\0')) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
    iVar6 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        (*pcVar1)(uVar2,uVar5);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

