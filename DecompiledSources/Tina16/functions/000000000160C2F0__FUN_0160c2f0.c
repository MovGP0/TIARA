/* Ghidra address: 0160c2f0 */
/* Ghidra symbol: FUN_0160c2f0 */


undefined1 FUN_0160c2f0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  uint local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_19 = 0;
  *param_2 = 0;
  cVar1 = FUN_01d3f210(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x1a8),&PTR_FUN_01763148);
    local_19 = FUN_01773f90(uVar2,0x400,&local_14);
    *param_2 = (local_14 & 1) != 0;
  }
  FUN_00414480(&local_10);
  return local_19;
}

