/* Ghidra address: 014b4fd0 */
/* Ghidra symbol: FUN_014b4fd0 */


void FUN_014b4fd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(int *)(param_1 + 0x888) = *(int *)(*(longlong *)(param_1 + 0x830) + 0x9c) / 2;
  *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(*(longlong *)(param_1 + 0x838) + 0x9c);
  (**(code **)(**(longlong **)(param_1 + 0x8a8) + 0x10))
            (*(longlong **)(param_1 + 0x8a8),local_20,L"Netlist Editor",L"ShowWarnings",
             &DAT_014b5158);
  iVar1 = FUN_00416db0(local_20[0],&LAB_014b5168);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x7a0),iVar1 == 0);
  FUN_014b5ee0(param_1,param_2);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x710),
               *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xfd8) + 0x80));
  uVar2 = FUN_00b89270();
  FUN_00b8d260(uVar2,param_1,0xffffffff);
  FUN_00414480(local_20);
  return;
}

