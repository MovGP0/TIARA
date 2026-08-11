/* Ghidra address: 008182d0 */
/* Ghidra symbol: FUN_008182d0 */


void FUN_008182d0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    thunk_FUN_03c9d277(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x698),0xfffffffc,
                       *(undefined8 *)(param_1 + 200));
    FUN_007f98d0(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

