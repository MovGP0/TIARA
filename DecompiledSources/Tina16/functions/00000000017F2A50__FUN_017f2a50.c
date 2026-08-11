/* Ghidra address: 017f2a50 */
/* Ghidra symbol: FUN_017f2a50 */


void FUN_017f2a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_017f2850(param_1,uVar3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  (**(code **)(*plVar1 + 0x88))(plVar1,uVar3);
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
  lVar2 = *(longlong *)(param_1 + 0x868);
  uVar4 = FUN_00bf2c10(lVar2);
  FUN_01c9c910(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(lVar2 + 0x4e8),uVar4,1);
  FUN_00410f20(uVar3);
  FUN_00805200(param_1);
  return;
}

