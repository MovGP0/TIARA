/* Ghidra address: 0046a3d0 */
/* Ghidra symbol: FUN_0046a3d0 */


undefined1 FUN_0046a3d0(short *param_1,short *param_2,undefined4 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_39;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_50 = auStack_78;
  thunk_FUN_04125dff(local_38);
  FUN_00461840(local_38,param_1);
  if (*param_1 == 0x101) {
    (*(code *)PTR_FUN_02010970)(local_38);
  }
  if (*param_2 == 0x101) {
    thunk_FUN_04125dff(local_20);
    FUN_00461840(local_20,param_2);
    (*(code *)PTR_FUN_02010970)(local_20);
    local_39 = FUN_0046af50(local_38,local_20,param_3);
    FUN_00460b80(local_20);
  }
  else {
    local_39 = FUN_0046af50(local_38,param_2,param_3);
  }
  FUN_00460b80(local_38);
  return local_39;
}

