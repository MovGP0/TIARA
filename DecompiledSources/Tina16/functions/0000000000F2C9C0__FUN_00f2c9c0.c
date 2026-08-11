/* Ghidra address: 00f2c9c0 */
/* Ghidra symbol: FUN_00f2c9c0 */


void FUN_00f2c9c0(longlong param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined8 local_38;
  undefined1 local_30;
  int local_24;
  ushort *local_20;
  
  puVar2 = (ushort *)FUN_00442980(*(undefined8 *)(param_1 + 8),0x5d);
  local_20 = puVar2;
  if (puVar2 == (ushort *)0x0) {
    FUN_00f2cc20(param_1,PTR_PTR_02002f20);
  }
  do {
    local_20 = local_20 + -1;
    if (local_20 <= *(ushort **)(param_1 + 8)) break;
  } while (*local_20 < 0x21);
  FUN_00414740(param_1 + 0x20,*(longlong *)(param_1 + 8),
               ((longlong)local_20 - *(longlong *)(param_1 + 8)) / 2 + 1U & 0xffffffff);
  *(ushort **)(param_1 + 8) = puVar2 + -1;
  uVar1 = FUN_0040e860(*(undefined8 *)(param_1 + 0x20),&local_24);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (local_24 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_30 = 0x11;
    FUN_00f2cc40(param_1,PTR_PTR_02004290,&local_38,0);
  }
  return;
}

