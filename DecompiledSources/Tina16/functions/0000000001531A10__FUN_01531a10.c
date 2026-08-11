/* Ghidra address: 01531a10 */
/* Ghidra symbol: FUN_01531a10 */


void FUN_01531a10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(int *)(param_1 + 0x980) = *(int *)(*(longlong *)(param_1 + 0x928) + 0x9c) / 2;
  *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(*(longlong *)(param_1 + 0x930) + 0x9c);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x790),0);
  (**(code **)(**(longlong **)(param_1 + 0x1c08) + 0x10))
            (*(longlong **)(param_1 + 0x1c08),local_20,L"Netlist Editor",L"ShowWarnings",
             &DAT_01531b78);
  iVar1 = FUN_00416db0(local_20[0],&LAB_01531b88);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x8a0),iVar1 == 0);
  FUN_01533ba0(param_1,param_2);
  uVar2 = FUN_00b89270();
  FUN_00b8d260(uVar2,param_1,0xffffffff);
  FUN_00414480(local_20);
  return;
}

