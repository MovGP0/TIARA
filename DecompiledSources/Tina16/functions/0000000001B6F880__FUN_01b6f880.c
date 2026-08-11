/* Ghidra address: 01b6f880 */
/* Ghidra symbol: FUN_01b6f880 */


void FUN_01b6f880(longlong param_1)

{
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_50 = 0;
  *(undefined2 *)(param_1 + 0x9d4) = 4;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x958),0);
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa8))(*(longlong **)(param_1 + 0x9d8),0x6f);
  if ((int)(uint)*(byte *)(param_1 + 0x9b8) < (int)(*(byte *)(param_1 + 0x9b9) - 1)) {
    *(char *)(param_1 + 0x9b8) = *(char *)(param_1 + 0x9b8) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x88))
              (*(longlong **)(param_1 + 0x9d8),*(undefined1 *)(param_1 + 0x9b8));
  }
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x80))
            (*(longlong **)(param_1 + 0x9d8),param_1 + 0x9b8,local_20,1);
  FUN_00b8fd60(&local_38,local_20[0],*PTR_DAT_02005310,0,1);
  FUN_00b909e0(local_48,*(undefined1 *)(param_1 + 0x9cb));
  FUN_004169a0(&local_50,local_48);
  FUN_00416cd0(local_30,3,L"Rng: ",local_38,local_50);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x978),local_30[0]);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

