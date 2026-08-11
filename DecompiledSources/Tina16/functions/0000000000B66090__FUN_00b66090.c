/* Ghidra address: 00b66090 */
/* Ghidra symbol: FUN_00b66090 */


void FUN_00b66090(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_1f;
  ushort local_1d;
  undefined1 local_1b;
  byte local_1a;
  
  uVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  cVar1 = FUN_00b59060(uVar2,&local_1f);
  if (cVar1 != '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x200);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xe);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),local_1f);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),local_1d + 1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_1b);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_1a + 1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  return;
}

