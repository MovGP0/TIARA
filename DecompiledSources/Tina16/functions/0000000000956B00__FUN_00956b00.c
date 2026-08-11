/* Ghidra address: 00956b00 */
/* Ghidra symbol: FUN_00956b00 */


undefined8 FUN_00956b00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2f8))(param_1);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x2f8))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x340))(param_1,uVar2);
  }
  return uVar2;
}

