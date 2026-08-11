/* Ghidra address: 00c31660 */
/* Ghidra symbol: FUN_00c31660 */


void FUN_00c31660(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_40 = auStack_68;
  FUN_00c354f0(*(undefined8 *)(param_1 + 8));
  FUN_00c35490(*(undefined8 *)(param_1 + 8));
  FUN_00c310a0(param_1);
  local_1c = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_20);
      iVar1 = FUN_00c30d30(uVar2);
      local_1c = local_1c + iVar1;
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18));
  FUN_004aef40(*(undefined8 *)(param_1 + 0x18),local_1c);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_20);
      iVar1 = *(int *)(local_30 + 0x10);
      local_24 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(local_30 + 0x20),local_24);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar2);
          local_24 = local_24 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00c31270(param_1);
  FUN_00c31300(param_1);
  FUN_00c315d0(param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_20);
      FUN_00c30dd0(uVar2,*(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d));
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00c1aa10();
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),local_20);
      FUN_00c28b10(uVar2,0);
      uVar2 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),local_20);
      FUN_00c28940(uVar2,0);
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00c34470(*(undefined8 *)(param_1 + 8));
  return;
}

