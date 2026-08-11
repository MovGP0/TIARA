/* Ghidra address: 00431e90 */
/* Ghidra symbol: FUN_00431e90 */


void FUN_00431e90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined4 local_38 [2];
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_38[0] = param_1;
  local_28 = param_2;
  local_18 = param_3;
  uVar1 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02004b28,local_38,2);
  FUN_004133b0(uVar1,unaff_retaddr);
  return;
}

