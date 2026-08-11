/* Ghidra address: 01ad08c0 */
/* Ghidra symbol: FUN_01ad08c0 */


undefined8 FUN_01ad08c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
      cVar1 = FUN_01d2dd00(lVar3 + 0x14,param_2,param_3);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

