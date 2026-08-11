/* Ghidra address: 0196bb80 */
/* Ghidra symbol: FUN_0196bb80 */


undefined8 FUN_0196bb80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                        (*(longlong **)(param_1 + 0x80),iVar4);
      cVar1 = FUN_004113d0(uVar3,param_2);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                          (*(longlong **)(param_1 + 0x80),iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

