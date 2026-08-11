/* Ghidra address: 01583980 */
/* Ghidra symbol: FUN_01583980 */


void FUN_01583980(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01583710(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x18) = param_2;
  *(char *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0x18) = (char)param_3;
  FUN_00417c40(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x18,param_4,&DAT_01577948);
  return;
}

