/* Ghidra address: 016129f0 */
/* Ghidra symbol: FUN_016129f0 */


void FUN_016129f0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  if (((*(char *)(param_1 + 0xa8) != '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x68) != 0)) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x68);
    uVar2 = *puVar1;
    *puVar1 = 0;
    FUN_00410f20(uVar2);
  }
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xe0));
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xd0));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

