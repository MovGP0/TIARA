/* Ghidra address: 00c6e480 */
/* Ghidra symbol: FUN_00c6e480 */


void FUN_00c6e480(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 8));
    thunk_FUN_041b2403(param_2,0x468,1,uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_041b2403(param_2,0x468,2,uVar1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x18));
    thunk_FUN_041b2403(param_2,0x468,0x40e,uVar1);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x38));
    thunk_FUN_041b2403(param_2,0x468,0x443,uVar1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x28));
    thunk_FUN_041b2403(param_2,0x468,0x442,uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x30));
    thunk_FUN_041b2403(param_2,0x468,0x441,uVar1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x20));
    thunk_FUN_041b2403(param_2,0x468,0x410,uVar1);
  }
  return;
}

