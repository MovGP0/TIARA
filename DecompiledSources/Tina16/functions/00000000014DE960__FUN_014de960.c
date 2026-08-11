/* Ghidra address: 014de960 */
/* Ghidra symbol: FUN_014de960 */


void FUN_014de960(longlong param_1,undefined8 param_2,longlong param_3,short param_4,
                 undefined8 param_5,char param_6)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  bool bVar6;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48 [2];
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined8 local_38;
  longlong local_30;
  
  puVar1 = PTR_DAT_02002058;
  local_70 = 0;
  local_38 = 0;
  uVar5 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0x87);
  if ((ushort)(param_4 - 0x58U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)(param_4 - 0x58U) & 0x1f) &
            0x14U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar3 = FUN_014dcff0(&DAT_01f55d02,&DAT_014ded19,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0xbfe6666666666666;
    local_40 = 0x5502;
    uStack_3e = 0x30;
    uVar3 = FUN_014dcff0(&DAT_01f55d02,&local_40,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f9999999999999a;
    uVar3 = FUN_014dcff0(&DAT_01f55d02,&DAT_014ded21,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x43e12c7bb1858bc0;
    uVar3 = FUN_014dcff0(&DAT_01f55d02,&DAT_014ded26,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x40a2c00000000000;
    uVar3 = FUN_014dcff0(&DAT_01f55d02,&DAT_014ded2b,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3d78a10a1b4047b2;
  }
  cVar2 = FUN_014db910(&DAT_014ded30,param_5,&local_30);
  if (cVar2 != '\0') {
    lVar4 = FUN_0040c770(*(undefined8 *)(local_30 + 0x28));
    if (lVar4 == 3) {
      local_40 = 0x5502;
      uStack_3e = 0x43;
      uVar3 = FUN_014dcff0(&DAT_01f55d02,&local_40,uVar5 & 0xffffffff);
      *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0xbfa7ced916872b02;
      local_48[0] = 0x31435503;
      uVar5 = FUN_014dcff0(&DAT_01f55d02,local_48,uVar5 & 0xffffffff);
      *(undefined8 *)(puVar1 + (uVar5 & 0xffff) * 8 + -8) = 0xbfacac083126e979;
    }
  }
  if (param_6 == '\x0f') {
    cVar2 = FUN_014db910(&DAT_014ded3e,param_5,&local_30);
    if (cVar2 != '\0') {
      cVar2 = FUN_00527300(*(double *)(local_30 + 0x28) - 3.1,0x3f50624dd2f1a9fc);
      if (cVar2 == '\0') {
        cVar2 = FUN_00527300(*(double *)(local_30 + 0x28) - 3.2,0x3f50624dd2f1a9fc);
        if ((cVar2 == '\0') && (param_1 != 0)) {
          if (param_3 == 0) {
            local_68 = local_30 + 0x28;
            local_60 = 3;
            local_50 = 0x11;
            local_58 = param_2;
            FUN_00442f70(&local_38,L"Warning: BSIM version %g is not supported: %s",&local_68,1);
          }
          else {
            local_68 = local_30 + 0x28;
            local_60 = 3;
            FUN_00416cd0(&local_70,3,param_3,&DAT_014dedbc,param_2);
            local_58 = local_70;
            local_50 = 0x11;
            FUN_00442f70(&local_38,L"Warning: BSIM version %g is not supported: %s",&local_68,1);
          }
          (**(code **)(**(longlong **)(param_1 + 0x450) + 0x78))
                    (*(longlong **)(param_1 + 0x450),local_38);
        }
      }
    }
  }
  FUN_00414480(&local_70);
  FUN_00414480(&local_38);
  return;
}

