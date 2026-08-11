/* Ghidra address: 0130e420 */
/* Ghidra symbol: FUN_0130e420 */


undefined8 FUN_0130e420(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (param_2 == '\x06') {
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x1208);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x120c);
    }
    else if (param_2 == '\b') {
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x2f8);
      *(uint *)(lVar2 + 0x28) = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + 0x963);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x2f8);
      *(uint *)(lVar2 + 0x28) = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + 0x838);
    }
    **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf20);
  }
  return *(undefined8 *)(param_1 + 0x18);
}

