/* Ghidra address: 00791a00 */
/* Ghidra symbol: FUN_00791a00 */


void FUN_00791a00(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00791830(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x18) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x18) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar2 * 0x18) = param_4;
  return;
}

