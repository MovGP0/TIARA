/* Ghidra address: 012b06c0 */
/* Ghidra symbol: FUN_012b06c0 */


void FUN_012b06c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_29 [9];
  
  plVar1 = *(longlong **)(param_1 + 0xdb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_29);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xdb8));
    *(undefined8 *)(param_1 + 0xdb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xde0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xde0));
  }
  *(undefined8 *)(param_1 + 0xde0) = 0;
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x998));
  }
  *(undefined8 *)(param_1 + 0x998) = 0;
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x880));
  }
  *(undefined8 *)(param_1 + 0x880) = 0;
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x9a0));
  }
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x9a8));
  }
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  FUN_010f6580(param_1,param_2);
  return;
}

