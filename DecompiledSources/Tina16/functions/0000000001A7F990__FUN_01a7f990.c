/* Ghidra address: 01a7f990 */
/* Ghidra symbol: FUN_01a7f990 */


void FUN_01a7f990(longlong param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_01aee720(local_20,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFDiagramViewerMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
  FUN_00416cd0(&local_30,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01a7fabc,L"TINA.CHM");
  FUN_01b1def0(&local_28,local_30);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),0x1f5,local_28);
  FUN_00414560(&local_30,3);
  return;
}

