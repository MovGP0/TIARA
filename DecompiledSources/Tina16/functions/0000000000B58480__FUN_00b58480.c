/* Ghidra address: 00b58480 */
/* Ghidra symbol: FUN_00b58480 */


void FUN_00b58480(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00410e60(&LAB_00b251f8,1);
  FUN_004b6dc0(param_2,(longlong)param_3);
  FUN_004b8ba0(uVar1,param_2,(longlong)param_4);
  uVar1 = FUN_00b579d0(&DAT_00b4a060,1,uVar1,param_5,param_6,param_7,param_8);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}

