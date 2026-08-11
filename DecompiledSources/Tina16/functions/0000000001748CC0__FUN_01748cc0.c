/* Ghidra address: 01748cc0 */
/* Ghidra symbol: FUN_01748cc0 */


void FUN_01748cc0(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_0173cbf0(1);
  if (param_1[6] != 0) {
    FUN_019af200(param_1[6],param_1[5]);
  }
  uVar1 = FUN_019a45d0();
  uVar1 = FUN_0198d430(uVar1);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  uVar1 = FUN_019a45d0();
  FUN_0199e310(uVar1,1,1,0);
  return;
}

