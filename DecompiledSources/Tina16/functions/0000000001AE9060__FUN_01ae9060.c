/* Ghidra address: 01ae9060 */
/* Ghidra symbol: FUN_01ae9060 */


void FUN_01ae9060(longlong param_1,undefined4 param_2)

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
        FUN_01ce88c0(uVar3,param_2);
        FUN_01acfa60(param_1);
        FUN_01aceb90(param_1,1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

