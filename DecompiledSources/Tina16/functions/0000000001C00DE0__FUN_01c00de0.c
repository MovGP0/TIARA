/* Ghidra address: 01c00de0 */
/* Ghidra symbol: FUN_01c00de0 */


longlong FUN_01c00de0(longlong *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2e8))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_01c019a0(param_1);
      local_28 = FUN_01bfb960(uVar3,iVar5);
      lVar4 = FUN_01c019a0(param_1);
      if ((((*(char *)(lVar4 + 0x48) != '\0') &&
           (*(char *)(*(longlong *)(*(longlong *)(local_28 + 0x80) + 0x78) + 0x391) != '\0')) &&
          (*(char *)(local_28 + 0x58) != '\0')) && (*(char *)(local_28 + 0x95) != '\0')) {
        FUN_01bfd990(local_28,&local_20);
        cVar1 = FUN_007f9a80(param_2,local_20);
        if (cVar1 != '\0') goto LAB_01c00ea7;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_28 = 0;
LAB_01c00ea7:
  FUN_00414480(&local_20);
  return local_28;
}

