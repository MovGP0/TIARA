/* Ghidra address: 01cfa450 */
/* Ghidra symbol: FUN_01cfa450 */


undefined8 FUN_01cfa450(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar2 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,uVar1);
  (**(code **)(*param_1 + 0x48))(param_1,uVar2);
  return uVar2;
}

