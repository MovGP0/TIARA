/* Ghidra address: 01ae9120 */
/* Ghidra symbol: FUN_01ae9120 */


undefined8 FUN_01ae9120(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar4 = 1;
  if (0 < iVar2) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
      cVar1 = FUN_004113d0(uVar3,&DAT_01cdd500);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
        uVar3 = FUN_004113f0(uVar3,&DAT_01cdd500);
        uVar3 = FUN_01ce89e0(uVar3);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

