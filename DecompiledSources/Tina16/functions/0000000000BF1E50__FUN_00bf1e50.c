/* Ghidra address: 00bf1e50 */
/* Ghidra symbol: FUN_00bf1e50 */


void FUN_00bf1e50(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = 0;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 != '\0') {
      FUN_00c08780(param_1);
      FUN_00bf2ed0(param_1,&local_18);
      FUN_00bf1bf0(param_1,local_18);
      FUN_00c08be0(param_1,0);
      FUN_00c087b0(param_1);
    }
  }
  FUN_00414480(&local_18);
  return;
}

