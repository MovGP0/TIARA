/* Ghidra address: 00a4e070 */
/* Ghidra symbol: FUN_00a4e070 */


void FUN_00a4e070(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  FUN_005fccd0(param_2,&local_60);
  FUN_009ec420(&local_58,local_60);
  local_38 = local_58;
  FUN_0043e600(local_20,local_58);
  FUN_00414b50(&local_30,local_20[0]);
  FUN_00414480(local_20);
  local_24 = 0xffffffff;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),local_30,&local_24);
  if (cVar1 == '\0') {
    local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                         (*(longlong **)(param_1 + 8),local_30);
    uVar2 = FUN_00610d40(&PTR_FUN_0060fb80,1,1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),local_24,uVar2);
  }
  local_40 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                       (*(longlong **)(param_1 + 8),local_24);
  FUN_004ae7e0(local_40,param_2);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return;
}

