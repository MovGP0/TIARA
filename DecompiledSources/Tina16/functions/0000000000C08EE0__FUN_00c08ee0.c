/* Ghidra address: 00c08ee0 */
/* Ghidra symbol: FUN_00c08ee0 */


undefined4 * FUN_00c08ee0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_var;
  int extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  
  FUN_00bf2b30(param_1);
  FUN_00bf2b90(param_1);
  if (extraout_var_00 < extraout_var) {
    FUN_00bf2b90(param_1);
    *param_2 = extraout_var_01;
    FUN_00bf2b30(param_1);
    param_2[2] = extraout_var_02;
  }
  else {
    FUN_00bf2b30(param_1);
    *param_2 = extraout_var_03;
    FUN_00bf2b90(param_1);
    param_2[2] = extraout_var_04;
  }
  iVar1 = FUN_00bf2b30(param_1);
  iVar2 = FUN_00bf2b90(param_1);
  if (iVar2 < iVar1) {
    uVar3 = FUN_00bf2b90(param_1);
    param_2[1] = uVar3;
    uVar3 = FUN_00bf2b30(param_1);
    param_2[3] = uVar3;
  }
  else {
    uVar3 = FUN_00bf2b30(param_1);
    param_2[1] = uVar3;
    uVar3 = FUN_00bf2b90(param_1);
    param_2[3] = uVar3;
  }
  return param_2;
}

