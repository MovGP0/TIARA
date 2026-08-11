/* Ghidra address: 00696d90 */
/* Ghidra symbol: FUN_00696d90 */


void FUN_00696d90(longlong *param_1,HDC param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  HDC hdcSrc;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  BLENDFUNCTION local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  if (*(int *)(param_1[2] + 0x98) * *(int *)(param_1[2] + 0x9c) != 0) {
    if (param_4 == '\0') {
      local_30 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      FUN_005ffb10(local_30,param_2);
      (**(code **)(*param_1 + 0x28))(param_1,local_30);
      (**(code **)(*param_1 + 0x88))(param_1,local_30,param_3);
      FUN_005ffb10(local_30,0);
      FUN_00410f20(local_30);
    }
    else {
      local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(local_38,7);
      (**(code **)(*local_38 + 0xe0))
                (local_38,*(undefined4 *)(param_1[2] + 0x98),*(undefined4 *)(param_1[2] + 0x9c));
      uVar4 = FUN_00609e10(local_38);
      (**(code **)(*param_1 + 0x28))(param_1,uVar4);
      uVar4 = FUN_00609e10(local_38);
      (**(code **)(*param_1 + 0x88))(param_1,uVar4,param_3);
      FUN_00696a50(local_38);
      local_3c.BlendOp = '\0';
      local_3c.BlendFlags = '\0';
      local_3c.SourceConstantAlpha = 0xff;
      local_3c.AlphaFormat = '\x01';
      uVar3 = (**(code **)(*local_38 + 0x60))(local_38);
      (**(code **)(*local_38 + 0x48))(local_38);
      FUN_004238d0(&local_4c,0,0,uVar3);
      iVar2 = local_40;
      iVar1 = local_44;
      uVar4 = FUN_00609e10(local_38);
      hdcSrc = (HDC)FUN_005ffa40(uVar4);
      AlphaBlend(param_2,local_4c,local_48,local_44 - local_4c,local_40 - local_48,hdcSrc,local_4c,
                 local_48,iVar1 - local_4c,iVar2 - local_48,local_3c);
      FUN_00410f20(local_38);
    }
  }
  return;
}

