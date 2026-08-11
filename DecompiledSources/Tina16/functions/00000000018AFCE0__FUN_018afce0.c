/* Ghidra address: 018afce0 */
/* Ghidra symbol: FUN_018afce0 */


void FUN_018afce0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01881a60();
  lVar2 = FUN_01881930(uVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_018aa5e0(param_1[0x109],*(undefined8 *)(lVar2 + 0x18),0);
  (**(code **)(*param_1 + 0x128))(param_1,1);
  return;
}

