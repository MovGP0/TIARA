/* Ghidra address: 007799c0 */
/* Ghidra symbol: FUN_007799c0 */


longlong * FUN_007799c0(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00778b00(local_res8,0);
  local_res8[3] = (longlong)&PTR_FUN_0075e2a8;
  local_res8[4] = (longlong)&PTR_FUN_0075e688;
  local_res8[5] = (longlong)&PTR_FUN_0075eb58;
  local_res8[6] = (longlong)&PTR_FUN_0075ed98;
  local_res8[8] = (longlong)&PTR_FUN_0075efd8;
  local_res8[9] = (longlong)&PTR_FUN_0075f3a8;
  local_res8[10] = (longlong)&PTR_FUN_0075f5d8;
  local_res8[0xb] = (longlong)&PTR_FUN_0075f8e8;
  local_res8[0xc] = (longlong)&PTR_FUN_0075fb20;
  cVar2 = FUN_0061a6f0();
  *(char *)(local_res8 + 0xd) = cVar2;
  if (cVar2 != '\0') {
    uVar3 = FUN_0044f100(L"comctl32.dll");
    *(bool *)((longlong)local_res8 + 0x69) = 0x5ffff < uVar3;
    (**(code **)(*local_res8 + 0x248))(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

