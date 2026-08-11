/* Ghidra address: 0065bf60 */
/* Ghidra symbol: FUN_0065bf60 */


void FUN_0065bf60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x360) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x360) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x360),iVar2);
        FUN_004ae7e0(param_2,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

