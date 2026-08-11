/* Ghidra address: 017c2380 */
/* Ghidra symbol: FUN_017c2380 */


undefined8 FUN_017c2380(undefined8 param_1,int param_2)

{
  int iVar1;
  short extraout_var;
  short extraout_var_00;
  short extraout_var_01;
  short extraout_var_02;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_017c2c60(param_1,0);
    FUN_017c2c60(param_1,1);
    if (extraout_var == extraout_var_00) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((uint7)(byte)((ushort)extraout_var_00 >> 8),1);
    }
  }
  else {
    iVar1 = FUN_017c2b70(param_1);
    FUN_017c2c60(param_1,iVar1 + -1);
    iVar1 = FUN_017c2b70(param_1);
    FUN_017c2c60(param_1,iVar1 + -2);
    if (extraout_var_01 == extraout_var_02) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((uint7)(byte)((ushort)extraout_var_02 >> 8),1);
    }
  }
  return uVar2;
}

