/* Ghidra address: 01c90710 */
/* Ghidra symbol: FUN_01c90710 */


void FUN_01c90710(void)

{
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00416cd0(local_30,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c907e4,L"TCH.CHM");
  FUN_01b1def0(local_20,local_30[0]);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x30))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),L"index",local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

