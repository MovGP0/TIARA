/* Ghidra address: 00849640 */
/* Ghidra symbol: FUN_00849640 */


void FUN_00849640(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 local_78 [112];
  
  local_80 = auStack_a8;
  cVar1 = *(char *)(param_1 + 0x550);
  if (cVar1 == '\x01') {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar2,1);
  }
  else if ((byte)(cVar1 - 2U) < 2) {
    local_80 = auStack_a8;
    FUN_00841d10(param_1,local_78);
    FUN_00842b00(param_1,local_78);
  }
  else if ((byte)(cVar1 - 4U) < 2) {
    local_80 = auStack_a8;
    FUN_00843b70(param_1);
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar2,1);
  }
  *(undefined1 *)(param_1 + 0x550) = 0;
  return;
}

