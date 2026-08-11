/* Ghidra address: 01be8b70 */
/* Ghidra symbol: FUN_01be8b70 */


void FUN_01be8b70(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01be4fa0(param_1,param_2,param_3);
  if (param_3 == '\x01') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bd0060);
    if ((cVar1 != '\0') && (*(longlong *)(param_2 + 800) != 0)) {
      FUN_01bfd990(*(undefined8 *)(param_2 + 800),&local_10);
      iVar2 = FUN_00416db0(local_10,*(undefined8 *)(param_1 + 0x678));
      if (iVar2 == 0) {
        FUN_00414480(param_1 + 0x678);
        *(undefined8 *)(param_1 + 0x6a0) = 0;
      }
    }
  }
  FUN_00414480(&local_10);
  return;
}

