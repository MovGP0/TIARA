/* Ghidra address: 014ed840 */
/* Ghidra symbol: FUN_014ed840 */


void FUN_014ed840(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,*(undefined8 *)PTR_DAT_02002340,0);
  if (cVar1 != '\0') {
    FUN_005eb6d0(local_10,&local_28,L"XilinxHome");
    FUN_00414ad0(param_1 + 0x2388,local_28);
  }
  if (*(longlong *)(param_1 + 0x2388) == 0) {
    FUN_00414ad0(param_1 + 0x2388,L"D:\\Xilinx\\14.7\\ISE_DS\\ISE");
  }
  FUN_005ea630(local_10);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return;
}

