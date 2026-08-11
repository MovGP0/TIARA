/* Ghidra address: 01419c00 */
/* Ghidra symbol: FUN_01419c00 */


void FUN_01419c00(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01413988,1,*(undefined8 *)PTR_DAT_02004030);
  puVar1 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0xfb0) + 0x118) + 8);
  lVar4 = (**(code **)*puVar1)(puVar1);
  puVar1 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0xfb0) + 0x118) + 0x28);
  lVar5 = (**(code **)*puVar1)(puVar1);
  FUN_014155c0(plVar3,lVar4 != 0,lVar5 != 0);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    FUN_010b41b0(*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0x118),plVar3[0xf2],plVar3[0xf3],
                 plVar3[0xf4],plVar3[0xf5],plVar3[0xf7],plVar3[0xf8]);
  }
  FUN_00410f20(plVar3);
  return;
}

