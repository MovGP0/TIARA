/* Ghidra address: 00fb57e0 */
/* Ghidra symbol: FUN_00fb57e0 */


double FUN_00fb57e0(longlong param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0043e130(&local_10,*(undefined8 *)(param_1 + 0xd70));
  iVar1 = FUN_004170c0(L"ATTINY26",local_10,1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_18,*(undefined8 *)(param_1 + 0xd70));
    iVar1 = FUN_004170c0(L"ATTINY24",local_18,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_20,*(undefined8 *)(param_1 + 0xd70));
      iVar1 = FUN_004170c0(L"ATMEGA",local_20,1);
      if (iVar1 == 0) {
        FUN_0043e130(&local_28,*(undefined8 *)(param_1 + 0xd70));
        iVar1 = FUN_004170c0(&LAB_00fb5a74,local_28,1);
        if (iVar1 == 0) {
          local_30 = (param_2 - 2.0) * 2.0 * param_3 * param_4;
          goto code_r0x00fb59bb;
        }
      }
      if (*(char *)(param_1 + 0x811) == '\0') {
        local_30 = (param_2 - 2.0) * 2.0 * param_3 * param_4;
      }
      else {
        local_30 = (param_2 - 1.0) * param_3 * param_4;
      }
    }
    else {
      local_30 = param_2 * param_3 * param_4;
    }
  }
  else {
    local_30 = param_2 * param_3 * param_4;
  }
code_r0x00fb59bb:
  FUN_00414560(&local_28,4);
  return local_30;
}

