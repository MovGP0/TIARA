/* Ghidra address: 00b66bf0 */
/* Ghidra symbol: FUN_00b66bf0 */


void FUN_00b66bf0(longlong param_1,undefined8 param_2,ushort *param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ushort *local_50;
  ushort *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [2];
  undefined1 local_26;
  undefined1 local_22;
  undefined1 local_21;
  longlong local_20;
  
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_20 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00b2ff80(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x70),&local_20,param_2);
  sVar4 = 0;
  if (local_20 != 0) {
    sVar4 = (short)*(undefined4 *)(local_20 + -4);
  }
  *(undefined2 *)(param_1 + 0x76) = 6;
  *(short *)(param_1 + 0x78) = sVar4 + 0x16;
  *(undefined2 *)(param_1 + 0x7a) = param_4;
  *(undefined2 *)(param_1 + 0x7c) = param_5;
  *(undefined2 *)(param_1 + 0x7e) = param_6;
  FUN_00b62d20(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x76,10);
  bVar2 = false;
  FUN_0040d200(local_28,8,0);
  cVar3 = FUN_0046c3b0(param_3);
  if ((cVar3 == '\0') && (cVar3 = FUN_0046c3d0(param_3), cVar3 == '\0')) {
    uVar7 = (ulonglong)*param_3;
    local_48 = param_3;
    if (uVar7 < 0xf) {
      if ((uVar7 == 0xe) || (uVar7 - 2 < 5)) {
LAB_00b66d99:
        local_30 = FUN_00464c60(param_3);
        FUN_00409a70(&local_30,local_28,8);
      }
      else if (uVar7 == 7) {
        uVar8 = FUN_00464c60(param_3);
        local_30 = FUN_00b66b60(param_1,uVar8);
        FUN_00409a70(&local_30,local_28,8);
      }
      else {
        if (uVar7 == 8) goto LAB_00b66e47;
        if (uVar7 == 0xb) {
          local_28[0] = 1;
          FUN_00468820(&local_70,1);
          cVar3 = FUN_0046f320(param_3,&local_70);
          local_26 = cVar3 != '\0';
          local_22 = 0xff;
          local_21 = 0xff;
        }
      }
    }
    else {
      if (uVar7 - 0x10 < 6) goto LAB_00b66d99;
      if ((uVar7 == 0x100) || (uVar7 == 0x102)) {
LAB_00b66e47:
        FUN_00468a10(&local_88,0);
        cVar3 = FUN_0046f320(param_3,&local_88);
        if (cVar3 == '\0') {
          bVar2 = true;
          local_28[0] = 0;
          local_22 = 0xff;
          local_21 = 0xff;
        }
        else {
          local_28[0] = 3;
          local_22 = 0xff;
          local_21 = 0xff;
        }
      }
    }
  }
  else {
    local_28[0] = 3;
    local_22 = 0xff;
    local_21 = 0xff;
  }
  FUN_00b62d20(*(undefined8 *)(param_1 + 0xb0),local_28,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0xb0),2);
  FUN_00b62d00(*(undefined8 *)(param_1 + 0xb0),0);
  uVar5 = 0;
  if (local_20 != 0) {
    uVar5 = *(undefined4 *)(local_20 + -4);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0xb0),uVar5);
  iVar6 = 0;
  if (local_20 != 0) {
    iVar6 = *(int *)(local_20 + -4);
  }
  if (0 < iVar6) {
    uVar8 = FUN_00414df0(&local_20);
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00b62d20(*(undefined8 *)(param_1 + 0xb0),uVar8,uVar5);
  }
  if (!bVar2) goto code_r0x00b67082;
  uVar1 = *param_3;
  local_50 = param_3;
  if (uVar1 == 8) {
LAB_00b66fa6:
    FUN_00467310(&local_38,param_3);
  }
  else if (uVar1 == 0x100) {
    FUN_00466730(&local_40,param_3,0);
    FUN_00b15390(&local_38,local_40);
  }
  else if (uVar1 == 0x102) goto LAB_00b66fa6;
  FUN_00b15100(&local_40,local_38);
  uVar9 = 0;
  if (local_38 != 0) {
    uVar9 = *(uint *)(local_38 + -4) >> 1;
  }
  if ((short)uVar9 != 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0xb0),0x207);
    uVar5 = 0;
    if (local_40 != 0) {
      uVar5 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0xb0),
                 CONCAT22((short)((uint)uVar5 >> 0x10),(short)uVar5 + 3));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0xb0),uVar9);
    FUN_00b62cc0(*(undefined8 *)(param_1 + 0xb0),1);
    uVar8 = FUN_00414df0(&local_40);
    uVar5 = 0;
    if (local_40 != 0) {
      uVar5 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62d20(*(undefined8 *)(param_1 + 0xb0),uVar8,uVar5);
  }
code_r0x00b67082:
  FUN_00417840(&local_88,&DAT_004013d8,2);
  FUN_004144d0(&local_40);
  FUN_00414520(&local_38);
  FUN_004144d0(&local_20);
  return;
}

