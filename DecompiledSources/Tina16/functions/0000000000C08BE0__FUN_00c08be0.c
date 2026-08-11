/* Ghidra address: 00c08be0 */
/* Ghidra symbol: FUN_00c08be0 */


void FUN_00c08be0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_28 = 0;
  FUN_00c08780(param_1);
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') {
    FUN_00c086e0(param_1,*(undefined1 *)(param_1 + 0x5f4));
  }
  else {
    FUN_00bf2ed0(param_1,&local_28);
    local_48 = local_28;
    local_40 = *(undefined1 *)(param_1 + 0x5f5);
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),4,param_1 + 0x4b4,param_1 + 0x4bc);
  }
  local_10 = FUN_00bf2b30(param_1);
  local_18 = FUN_00bf2b90(param_1);
  *(undefined8 *)(param_1 + 0x4b4) = local_10;
  *(undefined8 *)(param_1 + 0x4bc) = local_18;
  FUN_00bfb540(param_1,param_2);
  if ((param_2 != 0) && (*(char *)(param_1 + 0x5f5) != '\x02')) {
    local_30 = FUN_00bf2b90(param_1);
    local_48 = 0;
    local_40 = *(undefined1 *)(param_1 + 0x5f5);
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),0,&local_10,&local_30);
  }
  FUN_00c087b0(param_1);
  FUN_00414480(&local_28);
  return;
}

