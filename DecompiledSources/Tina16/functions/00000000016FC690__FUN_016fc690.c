/* Ghidra address: 016fc690 */
/* Ghidra symbol: FUN_016fc690 */


void FUN_016fc690(longlong param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_170 [256];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_30 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414b50(&local_28,L"(x64)");
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),local_20);
  uVar3 = FUN_016f98e0();
  FUN_016fb350(uVar3,&local_50,"options",0);
  FUN_00416cd0(&local_48,5,*(undefined8 *)PTR_DAT_02004728,&DAT_016fcb2c,local_50,&DAT_016fcb2c,
               local_28);
  local_40 = local_48;
  local_38 = 0x11;
  FUN_00442f70(&local_30,local_20[0],&local_40,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_30);
  FUN_00448ed0();
  uVar2 = FUN_005bba20();
  local_40 = CONCAT44(local_40._4_4_,(uint)uVar2);
  local_38 = 0;
  FUN_00442f70(&local_58,L"Copyright 1993-%d DesignSoft, Inc. All rights reserved.",&local_40,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_58);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),local_20);
  FUN_01b1f4d0(&local_68);
  local_40 = local_68;
  local_38 = 0x11;
  FUN_00442f70(&local_60,local_20[0],&local_40,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_60);
  FUN_016fc360(local_20);
  if (local_20[0] == 0) {
    iVar4 = (*(int *)(*(longlong *)(param_1 + 0x6c0) + 0x9c) -
            *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x94)) + 1;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x6c0),
                 *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x94) + -1);
    FUN_0064cc50(*(longlong *)(param_1 + 0x6b8),
                 *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c) - iVar4);
    FUN_0064cb90(*(longlong *)(param_1 + 0x6b0),
                 *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x94) - iVar4);
    FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) - iVar4);
  }
  else {
    FUN_0043f0c0(&local_70,local_20[0],1);
    FUN_00414b50(local_20,local_70);
    FUN_00416910(local_170,local_20[0],0xff);
    uVar1 = FUN_016fc1f0(local_170,param_1 + 0x738,0xff,param_1 + 0x83c,param_1 + 0x840);
    *(undefined1 *)(param_1 + 0x839) = uVar1;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_20[0]);
    if (*(char *)(param_1 + 0x738) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x290))
                (*(longlong **)(param_1 + 0x6c8),*(int *)(param_1 + 0x83c) + -1);
      (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x288))
                (*(longlong **)(param_1 + 0x6c8),*(undefined4 *)(param_1 + 0x840));
      FUN_006e7090(*(undefined8 *)(*(longlong *)(param_1 + 0x6c8) + 0x4f0),0xff0000);
      FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6c8) + 0x4f0),4);
      (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x288))(*(longlong **)(param_1 + 0x6c8),0);
    }
  }
  FUN_00414560(&local_70,6);
  FUN_00414560(&local_30,3);
  return;
}

