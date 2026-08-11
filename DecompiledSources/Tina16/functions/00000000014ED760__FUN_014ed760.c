/* Ghidra address: 014ed760 */
/* Ghidra symbol: FUN_014ed760 */


void FUN_014ed760(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,*(undefined8 *)PTR_DAT_02002340,1);
  if (cVar1 != '\0') {
    FUN_005eb630(local_10,L"XilinxHome",*(undefined8 *)(param_1 + 0x2388));
  }
  FUN_005ea630(local_10);
  FUN_00410f20(local_10);
  return;
}

