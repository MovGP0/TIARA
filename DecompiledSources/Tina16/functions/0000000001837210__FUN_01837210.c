/* Ghidra address: 01837210 */
/* Ghidra symbol: FUN_01837210 */


void FUN_01837210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  cVar1 = FUN_01822c20(param_2,param_3,*(undefined8 *)(param_1 + 0x38));
  if (cVar1 == '\0') {
    FUN_01847660(param_2,&local_18);
    FUN_01847660(param_3,&local_20);
    FUN_00416cd0(&local_10,6,*(undefined8 *)PTR_DAT_02002608,&DAT_01837318,local_18,L"\', \'",
                 local_20,&DAT_01837344);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_20,3);
  return;
}

