/* Ghidra address: 00db1e00 */
/* Ghidra symbol: FUN_00db1e00 */


void FUN_00db1e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_016eebb0(param_3,*(undefined2 *)(param_4 + 0x78),param_3);
  *(undefined4 *)(param_4 + 0xf8) = uVar1;
  uVar1 = FUN_01b05600(param_3,*(undefined1 *)(param_4 + 2));
  *(undefined4 *)(param_4 + 0xfc) = uVar1;
  uVar1 = FUN_01b05600(param_3,*(undefined1 *)(param_4 + 3));
  *(undefined4 *)(param_4 + 0x100) = uVar1;
  uVar1 = FUN_01b05600(param_3,*(undefined1 *)(param_4 + 4));
  *(undefined4 *)(param_4 + 0x104) = uVar1;
  return;
}

