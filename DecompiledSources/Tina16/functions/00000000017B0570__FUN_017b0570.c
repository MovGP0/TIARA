/* Ghidra address: 017b0570 */
/* Ghidra symbol: FUN_017b0570 */


void FUN_017b0570(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_017ae270(&DAT_017ad878,1,param_2);
    if ((*(char *)(param_1 + 0x21) == '\0') || (*(char *)(param_1 + 0x20) != '\0')) {
      FUN_005fd4e0(param_2[0xf],0x8000);
    }
    else {
      FUN_005fd4e0(param_2[0xf],0xff);
    }
    bVar2 = *(byte *)(param_1 + 0x145);
    if ((bVar2 & 4) == 0) {
      uVar4 = FUN_017ad600(1);
      FUN_005fd6d0(param_2[0xf],uVar4);
      uVar4 = 300;
    }
    else {
      uVar4 = FUN_017ad600(2);
      FUN_005fd6d0(param_2[0xf],uVar4);
      uVar4 = 600;
    }
    FUN_005fd640(param_2[0xf],param_3);
    FUN_005fdab0(param_2[0x10],0xffffff);
    FUN_005fdcb0(param_2[0x10]);
    *(undefined8 *)(lVar5 + 0x14) = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(param_1 + 0x147);
    *(undefined1 *)(lVar5 + 0x1d) = 0;
    local_30 = 2;
    uVar7 = *(byte *)(param_1 + 0x145) / 0x10;
    if (uVar7 != 0) {
      iVar8 = uVar7 * 4;
      local_30 = (ulonglong)(iVar8 + 2);
      if ((bVar2 & 2) != 0) {
        FUN_017aec60(lVar5,iVar8,0xfffffffd);
        FUN_017aeba0(lVar5,iVar8 + 3,0);
        FUN_017aeba0(lVar5,iVar8,3);
      }
      if ((bVar2 & 1) != 0) {
        iVar8 = iVar8 + -4;
      }
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      FUN_017aec60(lVar5,0,0);
      FUN_017aeba0(lVar5,iVar8,0);
      if ((bVar2 & 1) != 0) {
        FUN_017ae620(lVar5,iVar8,0xfffffffe,iVar8 + 4,2);
      }
    }
    local_4b = param_3;
    if (*(char *)(param_1 + 0x140) != '\0') {
      cVar3 = *(char *)(param_1 + 0x147);
      if (cVar3 == '\0') {
        local_4a = 0;
        local_49 = 1;
      }
      else if (cVar3 == '\x01') {
        local_4a = 0;
        local_49 = 1;
      }
      else if (cVar3 == '\x02') {
        local_4a = 0;
        local_49 = 1;
      }
      else if (cVar3 == '\x03') {
        local_4a = 0;
        local_49 = 1;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x168);
      if (param_3 == '\x01') {
        uVar9 = 0xffffff;
      }
      else if ((param_3 == '\x04') && (*(char *)(param_1 + 0x21) != '\0')) {
        uVar9 = 0xff;
      }
      local_30 = CONCAT44(local_30._4_4_ + *(int *)(param_1 + 0x158),
                          (int)local_30 + *(int *)(param_1 + 0x154));
      uVar6 = FUN_017ae4e0(lVar5,&local_30);
      local_30._0_4_ = (int)uVar6;
      iVar8 = (int)local_30 + *(int *)(param_1 + 0x18);
      local_30._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
      iVar1 = local_30._4_4_ + *(int *)(param_1 + 0x1c);
      local_30 = CONCAT44(iVar1,iVar8);
      FUN_004169a0(local_40,param_1 + 0x40);
      FUN_017aef30(lVar5,iVar8,iVar1,local_4a,local_49,*(undefined1 *)(param_1 + 0x147),
                   (*(double *)(param_1 + 0x160) * 0.9) / 8.0,
                   (*(double *)(param_1 + 0x160) * 0.9) / 8.0,uVar9,*(undefined4 *)(lVar5 + 0x7c),
                   uVar4,0,*(undefined1 *)(param_1 + 0x20),*(undefined8 *)(lVar5 + 0x88),local_40[0]
                  );
      *(undefined8 *)(param_1 + 0x16c) = DAT_021100c4;
      *(undefined8 *)(param_1 + 0x174) = DAT_021100cc;
      if (*(char *)(param_1 + 0x21) != '\0') {
        if (param_3 != '\x01') {
          local_4b = '\x0f';
        }
        FUN_005fd4e0(param_2[0xf],0x808080);
        FUN_005fd6d0(param_2[0xf],0);
        FUN_005fd640(param_2[0xf],local_4b);
        FUN_005fdab0(param_2[0x10],0x808080);
        FUN_005fdcb0(param_2[0x10],0);
        (**(code **)(*param_2 + 0xf8))
                  (param_2,DAT_01fa23a8 * (iVar8 + -2),DAT_01fa23a8 * (iVar1 + -2),
                   DAT_01fa23a8 * (iVar8 + 3),DAT_01fa23a8 * (iVar1 + 3));
      }
    }
    if (DAT_01fa23a4 != '\0') {
      FUN_005fd4e0(param_2[0xf],0xff);
      FUN_005fd640(param_2[0xf],local_4b);
      FUN_017aec60(lVar5,0xffffffff,0xffffffff);
      FUN_017aeba0(lVar5,1,1);
      FUN_017aec60(lVar5,1,0xffffffff);
      FUN_017aeba0(lVar5,0xffffffff,1);
    }
    FUN_00410f20(lVar5);
    FUN_005fd640(param_2[0xf],4);
  }
  FUN_00414480(local_40);
  return;
}

