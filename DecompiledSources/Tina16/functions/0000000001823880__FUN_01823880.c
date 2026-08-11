/* Ghidra address: 01823880 */
/* Ghidra symbol: FUN_01823880 */


void FUN_01823880(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_98;
  local_50 = 0;
  local_48 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xa8));
  FUN_00416e20(param_1 + 0xa8,uVar1,1);
  FUN_004b4b10(local_20,*(undefined8 *)(param_1 + 0xa8));
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar2 + -2) {
    iVar2 = iVar2 + -1;
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_48,local_24);
      uVar1 = FUN_018228f0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xe8));
      local_78 = *(undefined8 *)(param_1 + 0xa0);
      local_70 = 0;
      local_68 = *(undefined1 *)(param_1 + 0x9f);
      local_30 = FUN_01847a00(&PTR_FUN_01843af8,1,local_48,uVar1);
      FUN_01847420(*(undefined8 *)(param_1 + 0x90),local_30);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
  (**(code **)(*local_20 + 0x18))(local_20,&local_50,iVar2 + -1);
  uVar1 = FUN_018228f0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xe8));
  local_78 = *(undefined8 *)(param_1 + 0xa0);
  local_70 = *(undefined1 *)(param_1 + 0x8f);
  local_68 = *(undefined1 *)(param_1 + 0x9f);
  local_30 = FUN_01847a00(&PTR_FUN_01843af8,1,local_50,uVar1);
  FUN_00461840(local_30 + 0x88,param_1 + 0x70);
  FUN_01847420(*(undefined8 *)(param_1 + 0x90),local_30);
  FUN_00410f20(local_20);
  FUN_00414560(&local_50,2);
  return;
}

