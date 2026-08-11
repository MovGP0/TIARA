/* Ghidra address: 013737c0 */
/* Ghidra symbol: FUN_013737c0 */


void FUN_013737c0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x478) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar2 = (undefined8 *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),iVar5);
      uVar3 = FUN_00f53ea0(param_1,*puVar2);
      lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),iVar5);
      *(undefined8 *)(lVar4 + 0x2b) = uVar3;
      puVar2 = (undefined8 *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),iVar5);
      uVar1 = FUN_00f53e40(param_1,*puVar2);
      lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),iVar5);
      *(undefined4 *)(lVar4 + 0x33) = uVar1;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar3 = FUN_00f53f30(param_1,param_2,*(undefined1 *)(param_1 + 0x333));
  *(undefined8 *)(param_1 + 0x1440) = uVar3;
  return;
}

