/* Ghidra address: 00f14350 */
/* Ghidra symbol: FUN_00f14350 */


void FUN_00f14350(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = param_1[0xf];
  uVar2 = FUN_01cd60f0(param_1[0x1b],param_1[0x15]);
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  uVar2 = FUN_01cd60f0(param_1[0x1c],param_1[0x16]);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  iVar3 = FUN_01cd60f0(param_1[0x1b],param_1[0x17]);
  iVar4 = FUN_01cd60f0(param_1[0x1b],0);
  *(int *)(param_1 + 0x1a) = iVar3 - iVar4;
  iVar3 = FUN_01cd60f0(param_1[0x1c],param_1[0x18]);
  iVar4 = FUN_01cd60f0(param_1[0x1c],0);
  *(int *)((longlong)param_1 + 0xd4) = iVar3 - iVar4;
  (**(code **)(*param_1 + 0xc0))
            (param_1,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x78));
  return;
}

