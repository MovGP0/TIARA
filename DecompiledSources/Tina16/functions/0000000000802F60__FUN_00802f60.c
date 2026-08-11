/* Ghidra address: 00802f60 */
/* Ghidra symbol: FUN_00802f60 */


void FUN_00802f60(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_007f9220(uVar1);
  if (iVar2 == 0) {
    FUN_00658480(param_1,param_2);
  }
  else {
    *param_2 = 0x27;
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

