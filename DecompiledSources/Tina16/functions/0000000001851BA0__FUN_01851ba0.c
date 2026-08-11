/* Ghidra address: 01851ba0 */
/* Ghidra symbol: FUN_01851ba0 */


undefined8 FUN_01851ba0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_018475f0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(param_1 + 0x78))
              (*(undefined8 *)(param_1 + 0x80),param_2,*(undefined8 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x48),param_1 + 0x60);
    FUN_0046f180(&local_30);
    cVar1 = FUN_0046f320(param_2,&local_30);
    if (cVar1 != '\0') {
      FUN_00461840(param_2,param_1 + 0x60);
    }
  }
  FUN_00460ba0(&local_30);
  return param_2;
}

