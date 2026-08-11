/* Ghidra address: 017f07c0 */
/* Ghidra symbol: FUN_017f07c0 */


void FUN_017f07c0(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  FUN_01695540(*(undefined8 *)(param_1 + 0xb48),
               *(undefined8 *)(*(longlong *)(param_1 + 0x868) + 0x4e8));
  FUN_00b95290(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550));
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_016942f0(*(undefined8 *)(param_1 + 0xb48));
    FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550),1,0,0);
  }
  FUN_011162c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550));
  FUN_01115c40(*(undefined8 *)(param_1 + 0xb48));
  FUN_00441920(&local_28,*(undefined8 *)(param_1 + 0x888));
  local_20 = local_28;
  local_18 = 0x11;
  FUN_00442f70(&local_10,*(undefined8 *)(param_1 + 0x880),&local_20,0);
  FUN_0064de00(param_1,local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

