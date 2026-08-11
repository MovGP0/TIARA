/* Ghidra address: 010b32b0 */
/* Ghidra symbol: FUN_010b32b0 */


undefined8 FUN_010b32b0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      *param_3 = uVar2;
      cVar1 = FUN_010af230(*param_3,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

