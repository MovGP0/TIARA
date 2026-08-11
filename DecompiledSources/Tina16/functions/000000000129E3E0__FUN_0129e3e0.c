/* Ghidra address: 0129e3e0 */
/* Ghidra symbol: FUN_0129e3e0 */


undefined8 * FUN_0129e3e0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  
  local_50 = 0;
  (**(code **)(**(longlong **)(param_3 + 0x18) + 0x288))(*(longlong **)(param_3 + 0x18),&local_50);
  lVar1 = FUN_01cc5ec0(*(undefined8 *)(param_1 + 0x40),local_50,1);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
              (*(longlong **)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x30),0);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x88))
              (*(longlong **)(param_1 + 0x38),param_1 + 0x28,local_38);
    FUN_00c44b60(&local_48,local_38,param_1 + 0x18);
    *param_2 = local_48;
    param_2[1] = uStack_40;
  }
  FUN_00414480(&local_50);
  return param_2;
}

