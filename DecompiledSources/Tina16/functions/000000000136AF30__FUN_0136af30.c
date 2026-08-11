/* Ghidra address: 0136af30 */
/* Ghidra symbol: FUN_0136af30 */


undefined1 FUN_0136af30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  longlong local_190;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_179;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_3c;
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [5];
  
  local_160 = 0;
  local_178 = 0;
  local_168 = 0;
  local_170 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_190 = param_1;
  local_184 = param_2;
  local_180 = param_3;
  uVar5 = FUN_0198d430(*(undefined8 *)(param_1 + 0x18));
  local_1b8 = &local_30;
  FUN_01a982d0(uVar5,local_184,local_180,&local_2c);
  local_24[0] = local_2c;
  local_28 = local_30;
  FUN_01b1cd00(local_24,&local_28);
  local_1b8 = &local_3c;
  iVar2 = FUN_01995e50(*(undefined8 *)(local_190 + 0x18),local_24[0],local_28,&local_38);
  if (iVar2 < 0) {
    local_38 = (longlong *)
               (**(code **)(**(longlong **)(local_190 + 0x18) + 0x58))
                         (*(longlong **)(local_190 + 0x18),local_2c,local_30);
    if (*(longlong *)(local_190 + 0x18) == *(longlong *)(*(longlong *)(local_190 + 0x10) + 0x27a8))
    {
      FUN_01994230(*(longlong *)(local_190 + 0x18));
    }
    if ((local_38 == (longlong *)0x0) ||
       (*(longlong *)(local_190 + 0x18) != *(longlong *)(*(longlong *)(local_190 + 0x10) + 0x27a8)))
    {
      thunk_FUN_03f3ed6d(0xffff);
      FUN_00f50d70(*(undefined8 *)PTR_DAT_02002fa8,0xffffffff);
    }
    else {
      cVar1 = FUN_0198a580(local_38);
      if (cVar1 == '\x04') {
        uVar5 = FUN_0198d430(*(undefined8 *)(local_190 + 0x18));
        (**(code **)(*local_38 + 0xb0))(local_38,uVar5,0);
        FUN_017ff4f0(local_38,&local_58);
        local_1b8 = (undefined4 *)&DAT_0136b43c;
        FUN_00416cd0(&local_50,3,L"SelectPart(",local_58);
        FUN_01b1e860(local_50,1);
        cVar1 = FUN_0199c7c0(local_38);
        if (cVar1 == '\0') {
          FUN_00f51090(*(undefined8 *)PTR_DAT_02002fa8,local_38);
        }
        else {
          FUN_00f50f00(*(undefined8 *)PTR_DAT_02002fa8,local_38);
        }
        FUN_0199e010(*(undefined8 *)(local_190 + 0x18),local_38);
      }
    }
  }
  else {
    *(longlong **)(*(longlong *)PTR_DAT_02002fa8 + 0x6f0) = local_38;
    *(undefined4 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6f8) = local_3c;
    FUN_00f50d70(*(undefined8 *)PTR_DAT_02002fa8,iVar2);
    cVar1 = FUN_0198a580(local_38);
    if (cVar1 == '\x04') {
      iVar2 = (**(code **)(*local_38 + 0x1f8))(local_38,local_24[0],local_28);
      FUN_00ee6f30(local_158,local_38,iVar2);
      FUN_004169a0(&local_48,local_158);
      iVar3 = FUN_004170c0(L"pin:",local_48,1);
      if (0 < iVar3) {
        iVar3 = FUN_004170c0(L"pin:",local_48,1);
        uVar4 = 0;
        if (local_48 != 0) {
          uVar4 = *(undefined4 *)(local_48 + -4);
        }
        FUN_00416dc0(&local_48,local_48,iVar3 + 5,uVar4);
        iVar3 = 0;
        if (local_48 != 0) {
          iVar3 = *(int *)(local_48 + -4);
        }
        if (*(short *)(local_48 + -2 + (longlong)iVar3 * 2) == 0x29) {
          uVar4 = 0;
          if (local_48 != 0) {
            uVar4 = *(undefined4 *)(local_48 + -4);
          }
          FUN_00416e20(&local_48,uVar4,1);
        }
        iVar2 = FUN_0043fc50(local_48,iVar2 + 1);
        plVar6 = (longlong *)FUN_0136ae90(auStack_1d8,local_38);
        if (plVar6 != (longlong *)0x0) {
          local_38 = plVar6;
        }
        FUN_017ff4f0(local_38,&local_168);
        FUN_0043f750(&local_170,iVar2 + -1);
        local_1b8 = (undefined4 *)&DAT_0136b48c;
        local_1b0 = local_170;
        local_1a8 = &DAT_0136b49c;
        FUN_00416cd0(&local_160,5,L"SelectPin(",local_168);
        FUN_00415dd0(&local_178,local_160,0);
        FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_178,0,1);
      }
    }
  }
  local_179 = 0;
  FUN_004144d0(&local_178);
  FUN_00414560(&local_170,3);
  FUN_00414560(&local_58,3);
  return local_179;
}

