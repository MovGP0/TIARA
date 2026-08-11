/* Ghidra address: 017bb660 */
/* Ghidra symbol: FUN_017bb660 */


void FUN_017bb660(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        puVar1 = (undefined8 *)FUN_004aeac0(param_2,iVar3);
        uVar2 = (**(code **)*puVar1)(puVar1);
        FUN_004095f0(uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

