/* Ghidra address: 016eb690 */
/* Ghidra symbol: FUN_016eb690 */


double FUN_016eb690(longlong param_1,byte param_2)

{
  double *pdVar1;
  ulonglong uVar2;
  bool bVar3;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  byte local_b;
  char local_a;
  char local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = (ulonglong)param_2;
  pdVar1 = (double *)FUN_01b05ad0(param_1,uVar2,3,&local_9,&local_a,&local_b);
  if (local_9 == '\x05') {
    if (local_b < 8) {
      bVar3 = ((int)CONCAT71((int7)(uVar2 >> 8),1) << (local_b & 0x1f) & 0x90U) != 0;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a == '\x03')) {
      local_38 = *pdVar1 * 0.017453292519943295;
    }
    else {
      local_38 = 0.0;
    }
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016eb800);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&LAB_016eb810,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016eb7ec,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return local_38;
}

