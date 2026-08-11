/* Ghidra address: 0160c220 */
/* Ghidra symbol: FUN_0160c220 */


bool FUN_0160c220(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool local_19;
  undefined8 local_10;
  
  local_10 = 0;
  local_19 = false;
  cVar1 = FUN_01d3f210(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x1a8),&PTR_FUN_01763148);
    cVar1 = FUN_01773f40(uVar3,0x400);
    if (cVar1 != '\0') {
      FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x38));
      iVar2 = FUN_00416db0(local_10,&LAB_0160c2e4);
      local_19 = iVar2 == 0;
    }
  }
  FUN_00414480(&local_10);
  return local_19;
}

