/* Ghidra address: 01a58090 */
/* Ghidra symbol: FUN_01a58090 */


byte FUN_01a58090(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414480(param_2);
  FUN_00452e30(&local_28,L"LOCALAPPDATA");
  FUN_00452e30(local_20,L"ProgramFiles");
  FUN_00416ba0(&local_30,local_28,L"\\Programs\\LM Studio\\LM Studio.exe");
  bVar1 = FUN_00440a20(local_30,1);
  FUN_00416ba0(&local_38,local_20[0],L"\\LM Studio\\LM Studio.exe");
  bVar2 = FUN_00440a20(local_38,1);
  if ((bVar1 | bVar2) == 0) {
    FUN_00414ad0(param_2,
                 L"LM Studio is not installed, please download it from https://lmstudio.ai or from the AMD website(in case of Ryzen 9 AI processor)!"
                );
  }
  FUN_00414560(&local_38,4);
  return bVar1 | bVar2;
}

