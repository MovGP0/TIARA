/* Ghidra address: 00bfafa0 */
/* Ghidra symbol: FUN_00bfafa0 */


void FUN_00bfafa0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined1 local_54 [20];
  int local_40;
  int local_3c;
  
  local_60 = 0;
  uVar2 = thunk_FUN_040ef593(0);
  uVar3 = FUN_005fc8c0(param_2);
  uVar3 = thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_04172119(uVar2,local_54);
  thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_041a9b5c(0,uVar2);
  if (local_40 == local_3c) {
    FUN_0064df10(param_1,param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x4d8);
    FUN_005fc860(uVar2,*(undefined4 *)(param_2 + 0x28));
    FUN_005fcef0(uVar2,2);
    uVar1 = FUN_005fce00(param_2);
    FUN_005fce30(uVar2,uVar1);
    FUN_005fce70(uVar2,*(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x31));
    FUN_005fccd0(param_2,&local_60);
    FUN_005fcd80(uVar2,local_60);
    FUN_0064df10(param_1,*(undefined8 *)(param_1 + 0x4d8));
  }
  FUN_00bd0b70(*(undefined8 *)(param_1 + 0x4e8));
  if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x1c) != '\0') {
    FUN_00c08d90(param_1,param_1);
  }
  FUN_00414480(&local_60);
  return;
}

