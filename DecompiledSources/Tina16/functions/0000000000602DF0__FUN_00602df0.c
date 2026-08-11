/* Ghidra address: 00602df0 */
/* Ghidra symbol: FUN_00602df0 */


longlong FUN_00602df0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_1,iVar3);
      cVar1 = (**(code **)(*plVar2 + 0xb8))(*plVar2,param_2);
      if (cVar1 != '\0') {
        return *plVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

