/* Ghidra address: 01bbe1e0 */
/* Ghidra symbol: FUN_01bbe1e0 */


void FUN_01bbe1e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  cVar1 = FUN_01bba640(*(undefined8 *)(param_2 + 0x10));
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_20,*(undefined8 *)(param_2 + 0x10),L": the model is not supported");
    FUN_01bbc400(param_1,local_20);
  }
  FUN_01bba6d0(&local_18,*(undefined8 *)(param_2 + 0x10));
  FUN_01bbe090(param_1,local_18,param_3,param_4);
  FUN_01bbe090(param_1,L"AtoD",param_3,param_4);
  FUN_01bbe090(param_1,L"IO_Connect",param_3,param_4);
  FUN_01bbe090(param_1,L"Output_Ctrl",param_3,param_4);
  FUN_01bbe090(param_1,L"GND_CLAMP",param_3,param_4);
  FUN_01bbe090(param_1,L"POWER_CLAMP",param_3,param_4);
  FUN_01bbe090(param_1,L"PULLDOWN",param_3,param_4);
  FUN_01bbe090(param_1,L"PULLUP",param_3,param_4);
  FUN_00414560(&local_20,3);
  return;
}

