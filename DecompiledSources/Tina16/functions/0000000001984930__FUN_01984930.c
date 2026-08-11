/* Ghidra address: 01984930 */
/* Ghidra symbol: FUN_01984930 */


void FUN_01984930(void)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_019849e8,L"TINA.CHM");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),0x3f5,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

