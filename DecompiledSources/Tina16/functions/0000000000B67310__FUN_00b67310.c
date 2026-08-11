/* Ghidra address: 00b67310 */
/* Ghidra symbol: FUN_00b67310 */


void FUN_00b67310(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  short sVar6;
  undefined1 auStack_a8 [32];
  short local_88;
  short local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ushort *local_40;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  short local_2a;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_78 = param_2;
  local_74 = param_3;
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  lVar3 = FUN_00b4fc70(*(undefined8 *)(lVar3 + 0x10),local_74);
  sVar6 = *(short *)(lVar3 + 0x20) + *(short *)(param_1 + 0xa0);
  FUN_00b4f280(lVar3,local_50);
  if (local_50[0] != 0) {
    FUN_00b4f280(lVar3,&local_58);
    local_88 = *(short *)(lVar3 + 0x4a);
    local_80 = sVar6;
    FUN_00b66bf0(auStack_a8,local_58,lVar3 + 0x28,*(undefined2 *)(lVar3 + 0x48));
    goto code_r0x00b675b1;
  }
  local_40 = (ushort *)(lVar3 + 0x28);
  uVar4 = (ulonglong)*local_40;
  if (uVar4 < 0xc) {
    if (uVar4 == 0xb) {
      local_32 = 0x205;
      local_30 = 8;
      local_2e = *(undefined2 *)(lVar3 + 0x48);
      local_2c = *(undefined2 *)(lVar3 + 0x4a);
      local_2a = sVar6;
      FUN_00b62d20(param_1,&local_32,10);
      FUN_00468820(&local_70,1);
      cVar1 = FUN_0046f320(lVar3 + 0x28,&local_70);
      if (cVar1 == '\0') {
        FUN_00b62ce0(param_1,0);
      }
      else {
        FUN_00b62ce0(param_1,1);
      }
      goto code_r0x00b675b1;
    }
    if (uVar4 == 0) {
      local_32 = 0x201;
      local_30 = 6;
      local_2e = *(undefined2 *)(lVar3 + 0x48);
      local_2c = *(undefined2 *)(lVar3 + 0x4a);
      local_2a = sVar6;
      FUN_00b62d20(param_1,&local_32,10);
      goto code_r0x00b675b1;
    }
    if (uVar4 - 2 < 5) goto LAB_00b674ff;
    if (uVar4 == 7) {
      local_88 = sVar6;
      FUN_00b67240(auStack_a8,lVar3 + 0x28,*(undefined2 *)(lVar3 + 0x48),
                   *(undefined2 *)(lVar3 + 0x4a));
      goto code_r0x00b675b1;
    }
    if (uVar4 != 8) goto code_r0x00b675b1;
  }
  else {
    if ((uVar4 == 0xe) || (uVar4 - 0x10 < 5)) {
LAB_00b674ff:
      local_88 = sVar6;
      FUN_00b671b0(auStack_a8,lVar3 + 0x28,*(undefined2 *)(lVar3 + 0x48),
                   *(undefined2 *)(lVar3 + 0x4a));
      goto code_r0x00b675b1;
    }
    if ((uVar4 != 0x100) && (uVar4 != 0x102)) goto code_r0x00b675b1;
  }
  uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x50),local_78);
  uVar2 = FUN_004aeac0(uVar5,local_74);
  local_32 = 0xfd;
  local_30 = 10;
  local_2e = *(undefined2 *)(lVar3 + 0x48);
  local_2c = *(undefined2 *)(lVar3 + 0x4a);
  local_2a = sVar6;
  FUN_00b62d20(param_1,&local_32,10);
  FUN_00b62d00(param_1,uVar2);
code_r0x00b675b1:
  FUN_00460ba0(&local_70);
  FUN_00414590(&local_58,2);
  return;
}

