/* Ghidra address: 015d9e90 */
/* Ghidra symbol: FUN_015d9e90 */


void FUN_015d9e90(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_015d9820(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 != param_3) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x2e,param_1);
    FUN_004134c0(uVar2);
  }
  return;
}

