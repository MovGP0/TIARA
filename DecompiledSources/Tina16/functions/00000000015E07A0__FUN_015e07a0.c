/* Ghidra address: 015e07a0 */
/* Ghidra symbol: FUN_015e07a0 */


void FUN_015e07a0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_28 = 0;
  FUN_015ca1c0(param_1);
  FUN_015ca240(param_1);
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_18 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_10 + 0x78))(local_10,param_2);
  if (param_4 != 0) {
    (**(code **)(*local_18 + 0x78))(local_18,param_4);
  }
  FUN_015c1220(&local_28,0,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*local_18 + 0x78))(local_18,local_28);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88));
    if (iVar1 != 0) {
      FUN_015c1220(&local_30,0,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x78));
      (**(code **)(*local_18 + 0x78))(local_18,local_30);
    }
  }
  FUN_015dce90(param_1);
  local_48 = 0;
  local_40 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  FUN_015d84a0(param_1,local_10,param_3,local_18);
  FUN_015dcfc0(param_1);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414560(&local_30,2);
  return;
}

