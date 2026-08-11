/* Ghidra address: 0156f8c0 */
/* Ghidra symbol: FUN_0156f8c0 */


undefined8 FUN_0156f8c0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_958;
  undefined8 local_950 [261];
  int local_122;
  
  puVar3 = local_950;
  for (lVar2 = 0x127; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x350);
  FUN_01569cb0(lVar2,local_950);
  if ((local_122 == 2) || (*(char *)(lVar2 + 0x954) != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (local_958 = param_2, *(char *)(*(longlong *)(param_1 + 0x340) + 0xfc) == '\0')) {
    local_958 = 0;
  }
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return local_958;
}

