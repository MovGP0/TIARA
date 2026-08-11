/* Ghidra address: 008e6820 */
/* Ghidra symbol: FUN_008e6820 */


undefined8 FUN_008e6820(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  lVar1 = (*(code *)*param_1)(param_1);
  if (lVar1 == 0) {
    if (param_3 == 0) {
      (*(code *)param_1[0xf])(param_1,local_20);
      if (local_20[0] != 0) {
        (*(code *)param_1[0xf])(param_1,param_2);
        goto code_r0x008e68cb;
      }
    }
    FUN_0041ddd0(&local_28,PTR_PTR_02004328);
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,local_28);
    FUN_004134c0(uVar2);
  }
  else {
    lVar1 = (*(code *)*param_1)(param_1);
    (**(code **)(lVar1 + 8))(lVar1,param_2,param_3);
  }
code_r0x008e68cb:
  FUN_00414560(&local_28,2);
  return param_2;
}

