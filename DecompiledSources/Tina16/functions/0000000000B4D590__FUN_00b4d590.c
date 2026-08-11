/* Ghidra address: 00b4d590 */
/* Ghidra symbol: FUN_00b4d590 */


void FUN_00b4d590(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  if (*(byte *)(lVar2 + 0xc) != param_2) {
    if (param_2 < 0x10) {
      *(byte *)(lVar2 + 0xc) = param_2;
    }
    else {
      *(undefined1 *)(lVar2 + 0xc) = 0xf;
    }
    uVar1 = FUN_00b24fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (param_2 != 0) {
      (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
    }
  }
  return;
}

