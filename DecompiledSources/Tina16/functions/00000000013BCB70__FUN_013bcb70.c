/* Ghidra address: 013bcb70 */
/* Ghidra symbol: FUN_013bcb70 */


undefined8 FUN_013bcb70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268 [20];
  undefined1 local_1c3 [79];
  char local_174 [340];
  
  local_270 = 0;
  local_278 = 0;
  puVar3 = local_268;
  for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00414480(&local_278);
  if (*(char *)(param_1 + 0x126) == '\0') {
    if (local_174[0] == '\0') {
      FUN_004169a0(&local_270,local_1c3);
    }
    else {
      FUN_004169a0(&local_270,local_174);
    }
    lVar2 = FUN_013bcac0(param_1,local_270);
    if (lVar2 == 0) {
      lVar2 = FUN_01cbf670(&DAT_01cbf520,1,local_270,(undefined1)local_268[0]);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x58),lVar2);
      uVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xb,0,local_278);
      *(undefined8 *)(lVar2 + 8) = uVar1;
    }
    local_280 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    local_280 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_00414560(&local_278,2);
  return local_280;
}

