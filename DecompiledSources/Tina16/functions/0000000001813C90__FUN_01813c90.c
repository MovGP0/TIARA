/* Ghidra address: 01813c90 */
/* Ghidra symbol: FUN_01813c90 */


void FUN_01813c90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar3);
      *(undefined1 *)(plVar2 + 0x18) = 0;
      cVar1 = FUN_004113d0(plVar2,&PTR_FUN_0193aeb8);
      if (cVar1 == '\0') {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

