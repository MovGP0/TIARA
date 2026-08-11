/* Ghidra address: 00b4d7d0 */
/* Ghidra symbol: FUN_00b4d7d0 */


undefined1 FUN_00b4d7d0(longlong param_1,char param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  if (param_2 == '\0') {
    uVar1 = *(undefined1 *)(lVar2 + 0xd);
  }
  else if (param_2 == '\x01') {
    uVar1 = *(undefined1 *)(lVar2 + 0xe);
  }
  else if (param_2 == '\x02') {
    uVar1 = *(undefined1 *)(lVar2 + 0xf);
  }
  else if (param_2 == '\x03') {
    uVar1 = *(undefined1 *)(lVar2 + 0x10);
  }
  else {
    uVar1 = 0x3a;
  }
  return uVar1;
}

