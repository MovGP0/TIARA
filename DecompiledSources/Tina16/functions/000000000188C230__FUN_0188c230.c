/* Ghidra address: 0188c230 */
/* Ghidra symbol: FUN_0188c230 */


void FUN_0188c230(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined2 local_a;
  
  local_20 = auStack_48;
  local_a = *(undefined2 *)PTR_DAT_02005810;
  FUN_0040a0b0(0x133f);
  thunk_FUN_04178f5e(*(undefined8 *)(param_1 + 0xd0));
  FUN_0040a0b0(local_a);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_0188c570(param_1);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 0xe0);
  *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 0x1200;
  *(undefined2 *)(lVar1 + 0x58) = *(undefined2 *)(param_1 + 0x3c);
  *(undefined2 *)(lVar1 + 0x5e) = *(undefined2 *)(param_1 + 0x38);
  uVar2 = thunk_FUN_041b3853(*(undefined8 *)(param_1 + 0xd0),lVar1);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  return;
}

