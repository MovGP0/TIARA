/* Ghidra address: 01c94e90 */
/* Ghidra symbol: FUN_01c94e90 */


void FUN_01c94e90(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_00eae050(*(undefined8 *)PTR_DAT_02004008);
  FUN_00414ad0(PTR_DAT_02004c08,L"\\PCAD.PCB");
  FUN_00414ad0(PTR_DAT_02004008,L"PCAD");
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02004438,*(undefined8 *)PTR_DAT_02004c08);
  cVar1 = FUN_00b96de0(local_28);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02004438,*(undefined8 *)PTR_DAT_02004c08);
    FUN_00442400(local_30);
  }
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x1000),1);
  (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x18))
            (*(longlong **)(param_1 + 0x24b8),L"Schematic Editor",L"PCBRootDir",L"PCAD");
  FUN_00ec0300();
  FUN_00ecbc20();
  FUN_00eadc90(*(undefined8 *)PTR_DAT_02004008);
  FUN_00414560(&local_30,2);
  return;
}

