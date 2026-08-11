/* Ghidra address: 0068e570 */
/* Ghidra symbol: FUN_0068e570 */


void FUN_0068e570(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  
  FUN_0064d000(param_1,local_44);
  FUN_00655080(param_1);
  FUN_0064d040(param_1,local_44);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_04182059(uVar2,2,*(undefined4 *)(param_1 + 0x498),*(undefined4 *)(param_1 + 0x49c),0);
  local_34 = 0x1c;
  local_24 = *(undefined4 *)(param_1 + 0x4a0);
  local_30 = 2;
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_03d770e4(uVar2,2,&local_34,0);
  cVar1 = FUN_0068e660(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_04145aef(uVar2,2,*(int *)(param_1 + 0x49c) - *(int *)(param_1 + 0x494),0xffffffff);
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_04145aef(uVar2,2,*(undefined4 *)(param_1 + 0x494),0xffffffff);
  }
  return;
}

