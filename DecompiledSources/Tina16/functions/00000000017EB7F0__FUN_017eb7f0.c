/* Ghidra address: 017eb7f0 */
/* Ghidra symbol: FUN_017eb7f0 */


void FUN_017eb7f0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [256];
  undefined8 local_20;
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_20 = 0;
  uVar1 = FUN_017eb400(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8));
  *(undefined1 *)(param_1 + 0x770) = uVar1;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  *(undefined8 *)(param_1 + 0x840) = uVar6;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
  *(undefined8 *)(param_1 + 0x848) = uVar6;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_20);
  FUN_00416910(local_120,local_20,0xff);
  FUN_00415020(param_1 + 0x771,local_120,0x28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_128);
  FUN_00416910(local_120,local_128,0xff);
  FUN_00415020(param_1 + 0x79a,local_120,0x28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_130);
  FUN_00416910(local_120,local_130,0xff);
  FUN_00415020(param_1 + 0x7c3,local_120,0x28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_138);
  FUN_00416910(local_120,local_138,0xff);
  FUN_00415020(param_1 + 0x7ec,local_120,0x28);
  uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x720));
  *(undefined4 *)(param_1 + 0x850) = uVar2;
  if (*(char *)(param_1 + 0x9b0) == '\0') {
    puVar4 = (undefined8 *)(param_1 + 0x770);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x650);
    for (lVar3 = 0x48; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  FUN_00414560(&local_138,3);
  FUN_00414480(&local_20);
  return;
}

