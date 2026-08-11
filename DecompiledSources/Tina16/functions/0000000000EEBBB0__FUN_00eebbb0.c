/* Ghidra address: 00eebbb0 */
/* Ghidra symbol: FUN_00eebbb0 */


int FUN_00eebbb0(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_138;
  undefined1 local_130 [256];
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_150 = auStack_1e8;
  local_180 = 0;
  local_190 = 0;
  local_198 = 0;
  local_188 = 0;
  local_178 = 0;
  local_170 = 0;
  local_160 = 0;
  local_168 = 0;
  local_158 = 0;
  local_138 = 0;
  FUN_00415020(param_3,&DAT_00eec0d0,param_4);
  local_20 = FUN_016b97f0(&DAT_016b45f0,1,1);
  *(undefined1 *)(*(longlong *)(local_20 + 8) + 8) = 1;
  *(undefined1 *)(*(longlong *)(local_20 + 0x10) + 0x231) = 0;
  *PTR_DAT_02002ce0 = 0;
  FUN_016a36d0(*(undefined8 *)(local_20 + 0x10),0);
  FUN_016cff60(local_20,1,0,0);
  FUN_016bb740(local_20,*(undefined8 *)(param_1[0x35] + 0xb0));
  FUN_00414480(&local_138);
  while (cVar1 = FUN_016bb790(local_20), cVar1 == '\0') {
    FUN_00415dd0(&local_168,local_138,0);
    FUN_016b8f10(&local_160,local_168);
    iVar2 = FUN_00415a60(local_160,".SUBCKT");
    if (iVar2 == 0) break;
    FUN_016bb7d0(local_20,&local_158);
    FUN_00416880(&local_138,local_158);
  }
  FUN_00415dd0(local_20 + 0xd88,local_138,0);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 1;
  local_1a0 = 0;
  FUN_00ee2730(*(undefined8 *)(local_20 + 8),0,0,0);
  local_30 = FUN_016a47d0(&PTR_FUN_016a0250,1,*(undefined8 *)(local_20 + 0xa38));
  FUN_00415020(param_3,local_20 + 0xa80,param_4);
  FUN_00410f20(local_20);
  lVar4 = param_1[0x35];
  if ((((*(char *)(lVar4 + 0x110) == '\x01') && (*(longlong *)(lVar4 + 0xc0) != 0)) &&
      (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xc0) + 0x28))(*(longlong **)(lVar4 + 0xc0)),
      0 < iVar2)) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1[0x35] + 0xc0) + 0x28))
                        (*(longlong **)(param_1[0x35] + 0xc0)), param_2 < iVar2)) {
    (**(code **)(**(longlong **)(param_1[0x35] + 0xc0) + 0x18))
              (*(longlong **)(param_1[0x35] + 0xc0),&local_170,param_2);
    FUN_00416910(local_130,local_170,0xff);
  }
  else {
    lVar4 = param_1[0x35];
    if (((*(char *)(lVar4 + 0x110) == '\x01') && (*(longlong *)(lVar4 + 0xc0) != 0)) &&
       (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xc0) + 0x28))(*(longlong **)(lVar4 + 0xc0)),
       iVar2 == 0)) {
      FUN_0043f750(&local_178,param_2 + 1);
      FUN_00416910(local_130,local_178,0xff);
    }
    else if ((local_30 == 0) || (*(int *)(local_30 + 0x10) <= param_2)) {
      local_130[0] = 0;
    }
    else {
      lVar4 = FUN_01d347d0(local_30,param_2);
      FUN_00414ff0(local_130,*(undefined8 *)(lVar4 + 8));
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x1c8))();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x298))(param_1,&local_188,local_24);
      FUN_0043e130(&local_180,local_188);
      FUN_004169a0(&local_198,local_130);
      FUN_0043e130(&local_190,local_198);
      iVar3 = FUN_00416db0(local_180,local_190);
      if (iVar3 == 0) goto LAB_00eec015;
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_24 = -1;
LAB_00eec015:
  FUN_00414560(&local_198,6);
  FUN_00414590(&local_168,3);
  FUN_00414480(&local_138);
  return local_24;
}

