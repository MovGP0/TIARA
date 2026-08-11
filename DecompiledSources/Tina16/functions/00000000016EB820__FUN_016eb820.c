/* Ghidra address: 016eb820 */
/* Ghidra symbol: FUN_016eb820 */


undefined2 FUN_016eb820(longlong param_1,byte param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  char local_a;
  byte local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = (ulonglong)param_2;
  puVar1 = (undefined2 *)FUN_01b05ad0(param_1,uVar2,param_3,&local_9,&local_a,&local_b);
  if (local_9 < 8) {
    bVar3 = ((int)CONCAT71((int7)(uVar2 >> 8),1) << (local_9 & 0x1f) & 0x90U) != 0;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) && (local_a == '\x02')) {
    local_32 = *puVar1;
  }
  else {
    FUN_01b20020(&local_28,*(undefined8 *)(param_1 + 0x128),&DAT_016eb970);
    FUN_0043f750(&local_30,param_2);
    FUN_00416cd0(local_20,3,local_28,&LAB_016eb980,local_30);
    FUN_01b04d70(0x213,&PTR_DAT_016eb95c,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return local_32;
}

