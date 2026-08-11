/* Ghidra address: 018a5440 */
/* Ghidra symbol: FUN_018a5440 */


undefined8 FUN_018a5440(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20;
  
  iVar2 = FUN_004b2060(param_1);
  if (iVar2 == 0) {
    local_20 = FUN_00498310(0,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    iVar2 = FUN_004b2060(param_1);
    lVar3 = FUN_018a4e90(param_1,iVar2 + -1);
    iVar2 = FUN_004b2060(param_1);
    lVar4 = FUN_018a4e90(param_1,iVar2 + -1);
    local_20 = CONCAT44(*(int *)(lVar3 + 0x24) + *(int *)(lVar4 + 0x18),uVar1);
  }
  return local_20;
}

