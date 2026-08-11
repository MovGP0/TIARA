/* Ghidra address: 00b4d830 */
/* Ghidra symbol: FUN_00b4d830 */


void FUN_00b4d830(longlong param_1,char param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  if (param_2 == '\x04') {
    *(undefined1 *)(lVar2 + 0xd) = param_3;
    *(undefined1 *)(lVar2 + 0xe) = param_3;
    *(undefined1 *)(lVar2 + 0xf) = param_3;
    *(undefined1 *)(lVar2 + 0x10) = param_3;
  }
  else if (param_2 == '\0') {
    *(undefined1 *)(lVar2 + 0xd) = param_3;
  }
  else if (param_2 == '\x01') {
    *(undefined1 *)(lVar2 + 0xe) = param_3;
  }
  else if (param_2 == '\x02') {
    *(undefined1 *)(lVar2 + 0xf) = param_3;
  }
  else if (param_2 == '\x03') {
    *(undefined1 *)(lVar2 + 0x10) = param_3;
  }
  uVar1 = FUN_00b24fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  return;
}

