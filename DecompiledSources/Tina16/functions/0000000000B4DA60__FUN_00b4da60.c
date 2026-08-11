/* Ghidra address: 00b4da60 */
/* Ghidra symbol: FUN_00b4da60 */


void FUN_00b4da60(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                        *(undefined4 *)(param_1 + 0x20));
  if (*puVar2 != param_2) {
    *puVar2 = (ushort)param_2;
    uVar1 = FUN_00b24fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (param_2 != 0) {
      (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
    }
  }
  return;
}

