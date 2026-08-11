/* Ghidra address: 00a3c5f0 */
/* Ghidra symbol: FUN_00a3c5f0 */


void FUN_00a3c5f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  cVar1 = FUN_00a3c6f0(param_1);
  if (cVar1 != '\0') {
    lVar3 = FUN_00a39e90(param_1);
    cVar1 = *(char *)(lVar3 + 0x491);
    if ((cVar1 == '\0') || ((byte)(cVar1 - 2U) < 2)) {
      local_10 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
      if (local_10 == 0) {
        local_10 = FUN_00a33ac0(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
      }
      uVar2 = FUN_005fbf20(param_2);
      FUN_00a35740(local_10,uVar2);
    }
    else if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
      FUN_0041ddd0(local_20,PTR_PTR_020026c0);
      FUN_00a39bd0(param_1,&PTR_FUN_00a2e318,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

