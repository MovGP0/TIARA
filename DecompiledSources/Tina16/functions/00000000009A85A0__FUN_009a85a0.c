/* Ghidra address: 009a85a0 */
/* Ghidra symbol: FUN_009a85a0 */


void FUN_009a85a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_009a8330(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x18) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0x18) = param_3;
  FUN_00417c40(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x18,param_4,&DAT_009427f8);
  return;
}

