/* Ghidra address: 01976a20 */
/* Ghidra symbol: FUN_01976a20 */


void FUN_01976a20(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FUN_01977c80(param_1);
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x1e9) != '\0') &&
       (*(longlong *)(*(longlong *)(param_1 + 0x248) + 0x118) != 0)) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Rebuild itself from the script is not allowed!");
      FUN_004134c0(uVar3);
    }
    if ((char)param_2 != '\0') {
      plVar4 = (longlong *)FUN_0196f540(param_1);
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    if (*(char *)(param_1 + 0x1e9) == '\0') {
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x290),1);
      FUN_019768f0(param_1);
    }
    else {
      cVar1 = FUN_01976270(param_1,0);
      if (cVar1 != '\0') {
        FUN_019768f0(param_1);
      }
    }
  }
  else {
    lVar2 = FUN_019810d0(&PTR_FUN_0193ec88,1,param_1,param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_01980800(*(undefined8 *)(param_1 + 0x2b8),lVar2);
  }
  return;
}

