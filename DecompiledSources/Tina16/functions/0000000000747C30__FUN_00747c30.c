/* Ghidra address: 00747c30 */
/* Ghidra symbol: FUN_00747c30 */


void FUN_00747c30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if (*(int *)(param_1 + 0x10) == lVar3) {
    lVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    FUN_00419260(param_1 + 8,&DAT_00747900,1,lVar3 + 10);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((longlong)puVar1 + 0xc) = param_4;
  *(undefined1 *)(puVar1 + 2) = param_5;
  return;
}

