/* Ghidra address: 01341f10 */
/* Ghidra symbol: FUN_01341f10 */


void FUN_01341f10(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    uVar1 = FUN_01cc62e0(*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),param_2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x1418) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x141c) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_01cc7700(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
  }
  return;
}

