/* Ghidra address: 018afd30 */
/* Ghidra symbol: FUN_018afd30 */


void FUN_018afd30(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01881a60();
  lVar2 = FUN_01881930(uVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_018aa5e0(param_1[0x109],*(undefined8 *)(lVar2 + 0x18),1);
  (**(code **)(*param_1 + 0x128))(param_1,1);
  return;
}

