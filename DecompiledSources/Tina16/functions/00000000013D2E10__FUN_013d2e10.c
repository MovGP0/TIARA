/* Ghidra address: 013d2e10 */
/* Ghidra symbol: FUN_013d2e10 */


undefined8 FUN_013d2e10(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_268 [20];
  undefined1 local_1c3 [79];
  char local_174 [340];
  
  puVar2 = local_268;
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (local_174[0] == '\0') {
    FUN_004169a0(param_1,local_1c3);
  }
  else {
    FUN_004169a0(param_1,local_174);
  }
  return param_1;
}

