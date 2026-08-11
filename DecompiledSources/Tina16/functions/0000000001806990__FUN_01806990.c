/* Ghidra address: 01806990 */
/* Ghidra symbol: FUN_01806990 */


int FUN_01806990(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar3);
      if ((puVar2 != (undefined8 *)0x0) && (iVar1 = FUN_00416420(param_2,*puVar2), iVar1 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

