/* Ghidra address: 00b4d1f0 */
/* Ghidra symbol: FUN_00b4d1f0 */


void FUN_00b4d1f0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  if (*(char *)(lVar2 + 9) != param_2) {
    *(char *)(lVar2 + 9) = param_2;
    uVar1 = FUN_00b24fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (param_2 != '9') {
      (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
    }
  }
  return;
}

