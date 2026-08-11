/* Ghidra address: 005bf720 */
/* Ghidra symbol: FUN_005bf720 */


void FUN_005bf720(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_d4 [22];
  
  puVar3 = local_d4;
  for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  thunk_FUN_03a92fc6(local_d4);
  cVar1 = FUN_0043e2c0(param_1 + 0x18,local_d4,0xac);
  if (cVar1 == '\0') {
    puVar3 = local_d4;
    puVar4 = (undefined8 *)(param_1 + 0x18);
    for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
  }
  return;
}

