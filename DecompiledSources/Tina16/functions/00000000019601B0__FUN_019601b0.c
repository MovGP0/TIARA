/* Ghidra address: 019601b0 */
/* Ghidra symbol: FUN_019601b0 */


void FUN_019601b0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_20 = FUN_01953870(param_1);
  uVar1 = FUN_0195f670(param_1,0xb);
  *(undefined1 *)(local_20 + 0xac) = uVar1;
  cVar2 = FUN_01953ba0(param_1);
  if (cVar2 == '\0') {
    FUN_01964930(param_1,0);
  }
  else {
    cVar2 = FUN_0195b980(param_1);
    if (cVar2 != '\0') {
      local_68 = &DAT_019604d4;
      local_60 = *(undefined8 *)(param_1 + 0x1a8);
      local_58 = &LAB_019604e8;
      FUN_00416cd0(&local_38,5,&DAT_019604c4,*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x1c8)
                  );
      FUN_004168e0(&local_40,local_38);
      (**(code **)(**(longlong **)(param_1 + 0x308) + 0x58))
                (*(longlong **)(param_1 + 0x308),local_40);
    }
  }
  FUN_018dc3b0(local_20);
  local_68 = *(undefined **)(param_1 + 0x278);
  local_60 = *(undefined8 *)(param_1 + 0x280);
  FUN_0195ff00(param_1,*(undefined8 *)(param_1 + 0x288),*(undefined8 *)(param_1 + 0x268),
               *(undefined8 *)(param_1 + 0x270));
  if ((*(char *)(param_1 + 0x340) != '\0') && (*(int *)(param_1 + 0x318) == 0)) {
    local_28 = *(longlong *)(param_1 + 0x288);
    FUN_005fd4e0(*(undefined8 *)(local_28 + 0x78),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x28));
    FUN_005fd6d0(*(undefined8 *)(local_28 + 0x78),*(undefined4 *)(param_1 + 0x260));
    FUN_005fd670(*(undefined8 *)(local_28 + 0x78),0);
    FUN_005fd640(*(undefined8 *)(local_28 + 0x78),4);
  }
  *(undefined8 *)(local_20 + 0xb0) = *(undefined8 *)(param_1 + 0x2a0);
  local_68 = (undefined *)CONCAT71(local_68._1_7_,*(undefined1 *)(param_1 + 0x340));
  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
  FUN_018da4d0(local_20,*(undefined8 *)(param_1 + 0x288),*(undefined1 *)(param_1 + 0x2f0),
               *(undefined1 *)(param_1 + 0x341));
  *(undefined8 *)(local_20 + 0xb0) = 0;
  FUN_018dc480(local_20);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  return;
}

