/* Ghidra address: 01c96d70 */
/* Ghidra symbol: FUN_01c96d70 */


void FUN_01c96d70(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(wchar_t **)PTR_DAT_02004008 == L"ALTIUM") {
    bVar2 = true;
  }
  else if (*(longlong *)PTR_DAT_02004008 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(*(undefined8 *)PTR_DAT_02004008,L"ALTIUM");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_00416cd0(&local_10,3,L"PCB Project (",*(undefined8 *)PTR_DAT_02004008,L")...");
    FUN_007e2c60(*(undefined8 *)(param_1 + 0x1028),local_10);
  }
  else {
    FUN_00416cd0(&local_18,3,L"PCB Netlist (",*(undefined8 *)PTR_DAT_02004008,L")...");
    FUN_007e2c60(*(undefined8 *)(param_1 + 0x1028),local_18);
  }
  FUN_00414560(&local_18,2);
  return;
}

