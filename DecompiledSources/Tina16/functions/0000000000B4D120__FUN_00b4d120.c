/* Ghidra address: 00b4d120 */
/* Ghidra symbol: FUN_00b4d120 */


void FUN_00b4d120(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x20));
  if (*(ushort *)(lVar2 + 2) != param_2) {
    *(short *)(lVar2 + 2) = (short)param_2;
    uVar1 = FUN_00b24fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

