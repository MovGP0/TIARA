/* Ghidra address: 00b64860 */
/* Ghidra symbol: FUN_00b64860 */


void FUN_00b64860(longlong param_1)

{
  int iVar1;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  undefined1 local_28 [24];
  
  iVar1 = FUN_00416420(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),0);
  if (iVar1 != 0) {
    FUN_00b3f810(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),local_28,local_68,local_78,
                 *(longlong *)(param_1 + 0x40) + 0x40);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x2f);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x36);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_28,0x10);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_68,0x10);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_78,0x10);
  }
  return;
}

