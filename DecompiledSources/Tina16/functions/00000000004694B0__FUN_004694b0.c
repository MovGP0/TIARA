/* Ghidra address: 004694b0 */
/* Ghidra symbol: FUN_004694b0 */


void FUN_004694b0(short *param_1,short *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  puVar1 = auStack_58;
  if (*param_1 == 0x101) {
    (*(code *)PTR_FUN_02010970)(param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*param_2 == 0x101) {
    thunk_FUN_04125dff(local_20);
    FUN_00461840(local_20,param_2);
    (*(code *)PTR_FUN_02010970)(local_20);
    FUN_0046a320(param_1,local_20,param_3);
    FUN_00460b80(local_20);
  }
  else {
    FUN_0046a320(param_1,param_2,param_3);
  }
  return;
}

