/* Ghidra address: 014937c0 */
/* Ghidra symbol: FUN_014937c0 */


undefined1 FUN_014937c0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_10,0,param_2);
  if (local_10 == 0) {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_18,1,param_2);
    if (local_18 == 0) {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_20,2,param_2);
      if (local_20 == 0) {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_28,3,param_2);
        if (local_28 == 0) {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_30,4,param_2);
          if (local_30 == 0) {
            uVar1 = 1;
            goto LAB_014938b8;
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_014938b8:
  FUN_00414560(&local_30,5);
  return uVar1;
}

