/* Ghidra address: 01497f00 */
/* Ghidra symbol: FUN_01497f00 */


void FUN_01497f00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_01497dd0(param_1);
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_020030a0);
  FUN_00b8e650(uVar1,local_20,L"d.DesignToolObject_Msg_CircuitRestored",local_28);
  FUN_01493b70(param_1,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

