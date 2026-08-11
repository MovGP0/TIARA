/* Ghidra address: 00badc90 */
/* Ghidra symbol: FUN_00badc90 */


void FUN_00badc90(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *local_30;
  
  local_30 = (longlong *)0x0;
  if (param_2 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = FUN_00bade20();
  uVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00badd50(param_1,&local_30,uVar2);
      (**(code **)(*local_30 + 0xb0))(local_30,uVar2 | uVar3);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(char *)(param_1 + 0x20) = param_2;
  FUN_0041b800(&local_30);
  return;
}

