/* Ghidra address: 01b81b30 */
/* Ghidra symbol: FUN_01b81b30 */


void FUN_01b81b30(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char local_20;
  
  uVar1 = param_2[1];
  local_20 = (char)param_2[4];
  if (*(char *)(param_1 + 0x3c1) == '\0') {
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = *param_2;
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b8) = uVar1;
    if (local_20 == '\0') {
      PTR_DAT_02004010[0x2ad] = 1;
    }
    else {
      PTR_DAT_02004010[0x2ad] = 0;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x742) = *param_2;
    *(undefined8 *)(lVar2 + 0x74a) = uVar1;
    if (local_20 == '\0') {
      *(undefined1 *)(lVar2 + 0x73f) = 1;
    }
    else {
      *(undefined1 *)(lVar2 + 0x73f) = 0;
    }
  }
  return;
}

