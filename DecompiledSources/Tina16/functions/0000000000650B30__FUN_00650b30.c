/* Ghidra address: 00650b30 */
/* Ghidra symbol: FUN_00650b30 */


void FUN_00650b30(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_0064d3e0(param_1,param_1);
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    FUN_0064e190(param_1,1);
  }
  if ((*(uint *)(param_1 + 0x14) & 8) != 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffe9);
    (*pcVar1)(param_1);
  }
  FUN_00650970(param_1,param_2,0,0x40);
  return;
}

