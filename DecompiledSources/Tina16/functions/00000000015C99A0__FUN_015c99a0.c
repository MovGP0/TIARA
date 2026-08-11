/* Ghidra address: 015c99a0 */
/* Ghidra symbol: FUN_015c99a0 */


void FUN_015c99a0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x178))(*(undefined8 *)(param_2 + 0x178));
  if (0 < lVar2) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x178))(*(undefined8 *)(param_2 + 0x178));
    FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_2 + 0x1b0) + 0x18),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x178) + 8),uVar1,
                 *(longlong *)(param_2 + 0x1b0) + 8,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x1b0) + 0x18) + 0x98),
                 0xffffffff,0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x178));
  return;
}

