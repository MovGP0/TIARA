/* Ghidra address: 013b5f50 */
/* Ghidra symbol: FUN_013b5f50 */


undefined4 FUN_013b5f50(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_res10 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x58));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))
            (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_30);
  if (local_res10[0] != 0) {
    FUN_00441920(&local_50,local_res10[0]);
    FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x108),&DAT_013b613c,
                 local_50);
    FUN_015f21c0(local_res10[0],local_38);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x108),&DAT_013b613c,
                 *(undefined8 *)(param_1 + 0x38));
    cVar1 = FUN_00440a20(local_38,1);
    if (cVar1 != '\0') {
      FUN_004412f0(local_38);
    }
  }
  FUN_013bc030(*(undefined8 *)(param_1 + 0x58),&local_28,local_30,1,0);
  uVar2 = FUN_013b6260(param_1,local_28);
  FUN_00414560(&local_50,7);
  FUN_00414480(local_res10);
  return uVar2;
}

