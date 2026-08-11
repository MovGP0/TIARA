/* Ghidra address: 01533c50 */
/* Ghidra symbol: FUN_01533c50 */


void FUN_01533c50(void)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01533d08,L"TINA.CHM");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),0x1195,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

