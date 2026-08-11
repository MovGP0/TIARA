/* Ghidra address: 00d5a3e0 */
/* Ghidra symbol: FUN_00d5a3e0 */


undefined8 FUN_00d5a3e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_00d5a2a0(param_1,iVar4);
      iVar1 = FUN_0043e420(*(undefined8 *)(lVar2 + 0x70),param_2);
      if (iVar1 == 0) {
        uVar3 = FUN_00d5a2a0(param_1,iVar4);
        uVar3 = FUN_00d584d0(uVar3,param_3);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

