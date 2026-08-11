/* Ghidra address: 01bff3a0 */
/* Ghidra symbol: FUN_01bff3a0 */


void FUN_01bff3a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8c) != param_2) {
    *(int *)(param_1 + 0x8c) = param_2;
    FUN_01bff4d0(param_1,FUN_01bff050,param_2);
    if (*(int *)(param_1 + 0xac) == 0x20000000) {
      uVar1 = FUN_00635840(*(undefined4 *)(param_1 + 0x8c),0x13);
      *(undefined4 *)(param_1 + 0xac) = uVar1;
    }
    if (*(int *)(param_1 + 0x94) == 0x20000000) {
      uVar1 = FUN_00635930(*(undefined4 *)(param_1 + 0x8c),0xffffffce);
      *(undefined4 *)(param_1 + 0x94) = uVar1;
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0),param_1);
    }
  }
  return;
}

