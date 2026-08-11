/* Ghidra address: 0179bd90 */
/* Ghidra symbol: FUN_0179bd90 */


short FUN_0179bd90(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  short local_42;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  cVar1 = FUN_0179bb80(param_1,*param_2,local_14,param_3);
  if (cVar1 == '\0') {
    local_42 = 6;
  }
  else {
    local_42 = 7;
  }
  if (local_42 != 6) {
    FUN_0179bc20(param_1);
    FUN_0179bc60(param_1,&local_10,*param_2);
    local_40 = *param_2;
    local_38 = 0x11;
    local_30 = local_10;
    local_28 = 0x11;
    FUN_00442f70(&local_20,
                 L"Another device named \"%s\" already exists.\rIs it OK to use the name \"%s\" instead?"
                 ,&local_40,1);
    local_42 = FUN_0072d440(local_20,3,0xb,0);
    if (local_42 == 6) {
      FUN_00414ad0(param_2,local_10);
    }
  }
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  return local_42;
}

