/* Ghidra address: 014c1630 */
/* Ghidra symbol: FUN_014c1630 */


void FUN_014c1630(longlong param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414610(param_6);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_4 != 0)) {
    local_38 = FUN_0040c770((double)(uint)(param_3 * 100) / (double)param_4);
    local_30 = &local_38;
    local_28 = 0x10;
    FUN_00442f70(local_20,L"Downloading %d%%...",&local_30,0);
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),local_20[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(&param_6);
  return;
}

