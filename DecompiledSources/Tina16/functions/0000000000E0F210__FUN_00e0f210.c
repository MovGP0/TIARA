/* Ghidra address: 00e0f210 */
/* Ghidra symbol: FUN_00e0f210 */


undefined4 FUN_00e0f210(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_3c [12];
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      uVar1 = FUN_00e10880(uVar2,param_3,param_2,local_3c);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_3,*(undefined8 *)PTR_PTR_02001278);
  return 0;
}

