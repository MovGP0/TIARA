/* Ghidra address: 01b98a30 */
/* Ghidra symbol: FUN_01b98a30 */


void FUN_01b98a30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768));
  *(undefined4 *)(param_1 + 0x898) = uVar1;
  uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  FUN_01b96ae0(param_1,uVar2,1);
  return;
}

