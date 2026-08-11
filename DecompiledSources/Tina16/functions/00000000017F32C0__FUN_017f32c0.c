/* Ghidra address: 017f32c0 */
/* Ghidra symbol: FUN_017f32c0 */


void FUN_017f32c0(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_20;
  
  if (param_2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xe0;
  }
  if (param_3 != '\0') {
    uVar4 = uVar4 | 4;
  }
  if (DAT_02110135 != '\0') {
    uVar4 = uVar4 | 1;
  }
  if (*(char *)(param_1 + 0xb28) == '\0') {
    uVar4 = uVar4 | 8;
  }
  if (DAT_02110137 != '\0') {
    uVar4 = uVar4 | 0x10;
  }
  if (DAT_02110139 != '\0') {
    uVar4 = uVar4 | 2;
  }
  iVar3 = FUN_00c09100(*(undefined8 *)(param_1 + 0x868),DAT_02110140,DAT_02110150,uVar4);
  if (iVar3 == 0) {
    thunk_FUN_03f3ed6d(0x40);
    if ((uVar4 & 4) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x868);
      local_20 = FUN_00bf2b90(uVar1);
      FUN_00bfa470(uVar1,&local_20);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x868);
      local_20 = FUN_00bf2b30(uVar1);
      FUN_00bfa6c0(uVar1,&local_20);
    }
    plVar2 = *(longlong **)(param_1 + 0x868);
    local_20 = FUN_00bf2b30(plVar2);
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_20);
  }
  if (*(longlong *)PTR_DAT_02004c60 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004c60);
  }
  return;
}

