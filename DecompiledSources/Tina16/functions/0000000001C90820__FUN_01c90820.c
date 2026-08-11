/* Ghidra address: 01c90820 */
/* Ghidra symbol: FUN_01c90820 */


void FUN_01c90820(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
  if (cVar1 != '\0') {
    iVar2 = FUN_004170c0(L"mnMRU_File",*(undefined8 *)(param_2 + 0x10),1);
    if (iVar2 == 1) {
      FUN_00414b50(&local_20,*(undefined8 *)(param_2 + 0x10));
      FUN_00416e20(&local_20,1,10);
      iVar2 = FUN_0043fc50(local_20,1);
      (**(code **)(*DAT_01fe8868 + 0x18))(DAT_01fe8868,&local_20,iVar2 + -1);
      *PTR_DAT_02002ce0 = 0;
      FUN_01c681b0(param_1,local_20,0,0,0,0,1);
      if (*PTR_DAT_02002ce0 != '\0') {
        (**(code **)(*DAT_01fe8868 + 0x98))(DAT_01fe8868,iVar2 + -1);
        FUN_01c90d20(param_1);
      }
    }
  }
  FUN_00414480(&local_20);
  return;
}

