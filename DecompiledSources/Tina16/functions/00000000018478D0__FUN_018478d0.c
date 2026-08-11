/* Ghidra address: 018478d0 */
/* Ghidra symbol: FUN_018478d0 */


undefined8 FUN_018478d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468a10(param_2,*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_00468a10(&local_30,*(undefined8 *)(param_1 + 0x88));
    (**(code **)(param_1 + 0x78))
              (*(undefined8 *)(param_1 + 0x80),param_2,*(undefined8 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x48),&local_30);
    FUN_0046f180(&local_48);
    cVar1 = FUN_0046f320(param_2,&local_48);
    if (cVar1 != '\0') {
      FUN_00468a10(param_2,*(undefined8 *)(param_1 + 0x88));
    }
  }
  FUN_00417840(&local_48,&DAT_004013d8,2);
  return param_2;
}

