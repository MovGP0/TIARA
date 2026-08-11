/* Ghidra address: 00de66b0 */
/* Ghidra symbol: FUN_00de66b0 */


void FUN_00de66b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = param_2;
  FUN_00de6540(auStack_68,param_2,local_20);
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x60));
    if (cVar1 != '\0') break;
    FUN_004c1d80(*(undefined8 *)(param_1 + 0x60),local_30);
    local_48 = local_30[0];
    local_40 = local_20[0];
    FUN_00de5f80(param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined1 *)(param_1 + 0x6f));
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x60),0);
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x60));
    if (cVar1 != '\0') break;
    FUN_00de66b0(param_1,local_20[0]);
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x60),0);
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
            (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),local_20[0]);
  FUN_00414480(local_30);
  return;
}

