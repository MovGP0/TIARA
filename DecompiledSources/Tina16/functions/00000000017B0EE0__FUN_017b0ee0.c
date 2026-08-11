/* Ghidra address: 017b0ee0 */
/* Ghidra symbol: FUN_017b0ee0 */


undefined1 FUN_017b0ee0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_29 = 0;
  local_28 = (longlong *)FUN_017a1e70(&PTR_FUN_017a12f8,1,param_2,*(undefined8 *)(param_2 + 0xcc8));
  FUN_004169a0(&local_58,param_1 + 0x40);
  FUN_0064de00(local_28[0xda],local_58);
  (**(code **)(*(longlong *)local_28[0xd9] + 0x268))
            ((longlong *)local_28[0xd9],*(undefined1 *)(param_1 + 0x140));
  (**(code **)(*(longlong *)local_28[0xdc] + 0x268))
            ((longlong *)local_28[0xdc],*(byte *)(param_1 + 0x145) & 0xf);
  (**(code **)(*(longlong *)local_28[0xe4] + 0x268))
            ((longlong *)local_28[0xe4],(ulonglong)*(byte *)(param_1 + 0x145) / 0x10);
  FUN_017a1fe0(local_28,*(undefined1 *)(param_1 + 0x147));
  (**(code **)(*(longlong *)local_28[0xde] + 0x268))
            ((longlong *)local_28[0xde],*(undefined1 *)(param_1 + 0x144));
  (**(code **)(*(longlong *)local_28[0xe0] + 0x268))
            ((longlong *)local_28[0xe0],*(undefined1 *)(param_1 + 0x148));
  FUN_00414480(local_20);
  local_38 = *(undefined8 *)(param_1 + 0x160);
  FUN_00448450(local_20,local_38,PTR_DAT_02004830);
  FUN_0064de00(local_28[0xea],local_20[0]);
  FUN_00414480(local_20);
  FUN_005fdab0(*(undefined8 *)(local_28[0xee] + 800),*(undefined4 *)(param_1 + 0x168));
  iVar4 = (**(code **)(*local_28 + 0x2d0))(local_28);
  if (iVar4 == 1) {
    local_29 = 1;
    FUN_0064dd90(local_28[0xda],&local_60);
    FUN_00416910(param_1 + 0x40,local_60,0xff);
    uVar1 = (**(code **)(*(longlong *)local_28[0xd9] + 0x260))((longlong *)local_28[0xd9]);
    *(undefined1 *)(param_1 + 0x140) = uVar1;
    bVar2 = (**(code **)(*(longlong *)local_28[0xdc] + 0x260))((longlong *)local_28[0xdc]);
    cVar3 = (**(code **)(*(longlong *)local_28[0xe4] + 0x260))((longlong *)local_28[0xe4]);
    *(byte *)(param_1 + 0x145) = bVar2 | cVar3 * '\x10';
    uVar1 = FUN_017a1f60(local_28);
    *(undefined1 *)(param_1 + 0x147) = uVar1;
    uVar1 = (**(code **)(*(longlong *)local_28[0xde] + 0x260))((longlong *)local_28[0xde]);
    *(undefined1 *)(param_1 + 0x144) = uVar1;
    uVar1 = (**(code **)(*(longlong *)local_28[0xe0] + 0x260))((longlong *)local_28[0xe0]);
    *(undefined1 *)(param_1 + 0x148) = uVar1;
    uVar5 = FUN_005fdaa0(*(undefined8 *)(local_28[0xee] + 800));
    *(undefined4 *)(param_1 + 0x168) = uVar5;
    FUN_0064dd90(local_28[0xea],&local_68);
    local_40 = local_68;
    uVar6 = FUN_00448650(local_68,PTR_DAT_02004830);
    *(undefined8 *)(param_1 + 0x160) = uVar6;
    cVar3 = (**(code **)(*(longlong *)local_28[0xec] + 0x260))((longlong *)local_28[0xec]);
    if (cVar3 != '\0') {
      uVar6 = FUN_00498310(0,0);
      *(undefined8 *)(param_1 + 0x154) = uVar6;
    }
    *(undefined4 *)(param_2 + 0xd40) = *(undefined4 *)(param_1 + 0x168);
    (**(code **)(**(longlong **)(param_2 + 0x948) + 0x180))(*(longlong **)(param_2 + 0x948));
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_58);
  FUN_00414480(local_20);
  return local_29;
}

