/* Ghidra address: 0197a4f0 */
/* Ghidra symbol: FUN_0197a4f0 */


longlong FUN_0197a4f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(PTR_PTR_01fb7e00 + -0x30))(PTR_PTR_01fb7e00);
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    FUN_01979e40(uVar1,0xff);
    lVar2 = *(longlong *)(param_1 + 0xd8);
    *(undefined1 *)(lVar2 + 0xb8) = *(undefined1 *)(param_1 + 0xb8);
  }
  return lVar2;
}

