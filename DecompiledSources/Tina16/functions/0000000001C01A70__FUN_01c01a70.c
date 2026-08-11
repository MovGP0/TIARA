/* Ghidra address: 01c01a70 */
/* Ghidra symbol: FUN_01c01a70 */


void FUN_01c01a70(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_00651da0(param_1);
  if (param_1[0x94] != 0) {
    FUN_01c02120(param_1,param_1[0x94]);
  }
  if (param_1[0x97] == 0) {
    uVar1 = FUN_01c03420(param_1);
    (**(code **)(*param_1 + 0x318))(param_1,uVar1);
  }
  return;
}

