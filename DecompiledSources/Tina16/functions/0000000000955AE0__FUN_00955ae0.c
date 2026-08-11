/* Ghidra address: 00955ae0 */
/* Ghidra symbol: FUN_00955ae0 */


void FUN_00955ae0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
      (**(code **)*puVar2)(puVar2,param_2,param_3);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

