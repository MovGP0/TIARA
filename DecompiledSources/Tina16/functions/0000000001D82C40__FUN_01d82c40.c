/* Ghidra address: 01d82c40 */
/* Ghidra symbol: FUN_01d82c40 */


void FUN_01d82c40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_29 [9];
  
  plVar1 = *(longlong **)(param_1 + 0xa88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_29);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xa88));
    *(undefined8 *)(param_1 + 0xa88) = 0;
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xae8),(longlong)(*(int *)(param_1 + 0xaf8) << 4));
  }
  *(undefined8 *)(param_1 + 0xae8) = 0;
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xaf0),(longlong)(*(int *)(param_1 + 0xaf8) << 4));
  }
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  if (*(longlong *)(param_1 + 0xab0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xab0));
  }
  *(undefined8 *)(param_1 + 0xab0) = 0;
  if (*(longlong *)(param_1 + 0xac0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xac0));
  }
  *(undefined8 *)(param_1 + 0xac0) = 0;
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xac8));
  }
  *(undefined8 *)(param_1 + 0xac8) = 0;
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xad0));
  }
  *(undefined8 *)(param_1 + 0xad0) = 0;
  if (*(longlong *)(param_1 + 0xad8) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xad8));
  }
  *(undefined8 *)(param_1 + 0xad8) = 0;
  FUN_010e2c30(param_1,param_2);
  return;
}

