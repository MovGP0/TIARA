/* Ghidra address: 017efc60 */
/* Ghidra symbol: FUN_017efc60 */


void FUN_017efc60(void)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_017efd18,L"TINA.CHM");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),0x1389,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

