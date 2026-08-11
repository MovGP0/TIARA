/* Ghidra address: 018b7070 */
/* Ghidra symbol: FUN_018b7070 */


void FUN_018b7070(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  uVar2 = FUN_018039f0(*(undefined8 *)(param_1 + 8),param_2);
  FUN_01803cc0(uVar2,local_30,L"text");
  FUN_00414ad0(param_3,local_30[0]);
  FUN_01803cc0(uVar2,local_20,L"page");
  if (local_20[0] != 0) {
    uVar1 = FUN_0043fc00(local_20[0]);
    *param_4 = uVar1;
  }
  FUN_01803cc0(uVar2,local_20,&DAT_018b71a4);
  if (local_20[0] != 0) {
    uVar1 = FUN_0043fc00(local_20[0]);
    *param_5 = uVar1;
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

