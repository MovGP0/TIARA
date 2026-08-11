/* Ghidra address: 011a5080 */
/* Ghidra symbol: FUN_011a5080 */


undefined1 FUN_011a5080(void)

{
  undefined1 *in_R9;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *in_R9 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_011a5158,L"logiconv.chm");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),*(undefined4 *)PTR_DAT_02004708,
             local_20[0]);
  FUN_00414560(&local_28,2);
  return 1;
}

