/* Ghidra address: 00f2bd20 */
/* Ghidra symbol: FUN_00f2bd20 */


undefined4 FUN_00f2bd20(undefined2 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 unaff_RSI;
  undefined2 **ppuVar9;
  bool bVar10;
  undefined2 *local_res8;
  byte *local_res10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  int local_68;
  undefined2 local_62;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  float local_40;
  undefined1 local_39;
  undefined2 *local_38;
  int local_2c [3];
  undefined7 uVar8;
  
  uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar7 = (undefined4)CONCAT71(uVar8,1);
  ppuVar9 = (undefined2 **)0x0;
  uVar5 = (ulonglong)*param_2;
  local_res8 = param_1;
  local_res10 = param_2;
  if (uVar5 < 6) {
    if (uVar5 == 5) {
LAB_00f2c26a:
      ppuVar9 = &local_res8;
      goto LAB_00f2c276;
    }
    if (uVar5 == 1) {
      local_80 = param_2 + 1;
      bVar1 = param_2[(ulonglong)*local_80 + 2];
      local_78 = local_80;
      local_70 = param_2;
      if (bVar1 < 4) {
        if (bVar1 == 3) {
          iVar4 = FUN_0043fc00(param_1);
          local_c8 = local_res8;
          local_2c[0] = FUN_00f2bba0(auStack_e8,0,0xffff,(longlong)iVar4);
        }
        else if (bVar1 == 0) {
          iVar4 = FUN_0043fc00(param_1);
          local_c8 = local_res8;
          local_2c[0] = FUN_00f2bba0(auStack_e8,0xffffffffffffff80,0x7f,(longlong)iVar4);
        }
        else if (bVar1 == 1) {
          iVar4 = FUN_0043fc00(param_1);
          local_c8 = local_res8;
          local_2c[0] = FUN_00f2bba0(auStack_e8,0,0xff,(longlong)iVar4);
        }
        else if (bVar1 == 2) {
          iVar4 = FUN_0043fc00(param_1);
          local_c8 = local_res8;
          local_2c[0] = FUN_00f2bba0(auStack_e8,0xffffffffffff8000,0x7fff,(longlong)iVar4);
        }
      }
      else if (bVar1 == 4) {
        local_2c[0] = FUN_0043fc00(param_1);
      }
      else if (bVar1 == 5) {
        uVar6 = FUN_0043fcb0(param_1);
        local_c8 = local_res8;
        local_2c[0] = FUN_00f2bba0(auStack_e8,0,0xffffffff,uVar6);
      }
      ppuVar9 = (undefined2 **)local_2c;
      goto LAB_00f2c276;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        cVar3 = FUN_00f2bbf0(auStack_e8);
        if (cVar3 == '\0') {
          local_2c[0] = FUN_00589bc0(local_res10,local_res8);
          bVar10 = -1 < local_2c[0];
          if (!bVar10) {
            local_2c[0] = FUN_0040e860(local_res8,&local_68);
            bVar10 = local_68 == 0;
          }
          uVar7 = (undefined4)CONCAT71(uVar8,bVar10);
          if (bVar10 != false) {
            ppuVar9 = (undefined2 **)local_2c;
          }
        }
        else {
          local_39 = FUN_0043fe80(local_res8);
          ppuVar9 = (undefined2 **)&local_39;
        }
        goto LAB_00f2c276;
      }
      if (uVar5 == 4) {
        local_b8 = param_2 + 1;
        bVar1 = param_2[(ulonglong)*local_b8 + 2];
        local_b0 = local_b8;
        local_a8 = param_2;
        if (bVar1 < 3) {
          if (bVar1 == 2) {
            local_50 = (undefined2 *)FUN_00448650(param_1,&DAT_0202eb60);
            ppuVar9 = &local_50;
          }
          else if (bVar1 == 0) {
            dVar2 = (double)FUN_00448650(param_1,&DAT_0202eb60);
            local_40 = (float)dVar2;
            ppuVar9 = (undefined2 **)&local_40;
          }
          else {
            ppuVar9 = (undefined2 **)0x0;
            if (bVar1 == 1) {
              if (param_2 == &DAT_00403aa0) {
                local_48 = (undefined2 *)FUN_005c1920(param_1,0x403a01);
              }
              else if (param_2 == &DAT_00403ab8) {
                local_48 = (undefined2 *)FUN_005c1920(param_1,0x403a01);
              }
              else if (param_2 == &DAT_00403a88) {
                local_48 = (undefined2 *)FUN_005c1920(param_1,0x403a01);
              }
              else {
                local_48 = (undefined2 *)FUN_00448650(param_1,&DAT_0202eb60);
              }
              ppuVar9 = &local_48;
            }
          }
        }
        else if (bVar1 == 3) {
          dVar2 = (double)FUN_00448650(param_1,&DAT_0202eb60);
          local_58 = (undefined2 *)(longlong)ROUND(dVar2);
          ppuVar9 = &local_58;
        }
        else if (bVar1 == 4) {
          local_60 = (undefined2 *)FUN_004487c0(param_1,&DAT_0202eb60);
          ppuVar9 = &local_60;
        }
        goto LAB_00f2c276;
      }
LAB_00f2c273:
      uVar7 = 0;
      goto LAB_00f2c276;
    }
  }
  else if (uVar5 != 9) {
    if (1 < uVar5 - 10) {
      if (uVar5 == 0x10) {
        local_90 = param_2 + 1;
        local_a0 = param_2 + 1;
        local_98 = local_a0;
        local_88 = local_90;
        if (*(longlong *)(param_2 + (ulonglong)*local_a0 + 10) <
            *(longlong *)(param_2 + (ulonglong)*local_90 + 2)) {
          local_38 = (undefined2 *)FUN_0043fd60(param_1);
        }
        else {
          local_38 = (undefined2 *)FUN_0043fcb0(param_1);
        }
        ppuVar9 = &local_38;
        goto LAB_00f2c276;
      }
      if (uVar5 != 0x12) goto LAB_00f2c273;
    }
    goto LAB_00f2c26a;
  }
  iVar4 = 0;
  if (param_1 != (undefined2 *)0x0) {
    iVar4 = *(int *)(param_1 + -2);
  }
  if (iVar4 == 1) {
    local_62 = *param_1;
    ppuVar9 = (undefined2 **)&local_62;
  }
  else {
    uVar7 = 0;
  }
LAB_00f2c276:
  if (((char)uVar7 != '\0') && (ppuVar9 != (undefined2 **)0x0)) {
    uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(ppuVar9,local_res10,uVar6);
  }
  return uVar7;
}

