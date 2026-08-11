/* Ghidra address: 00971dc0 */
/* Ghidra symbol: FUN_00971dc0 */


void FUN_00971dc0(longlong param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined7 uVar8;
  bool bVar9;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  char local_289 [16];
  undefined1 local_279 [16];
  undefined1 local_269 [16];
  char local_259 [16];
  char local_249 [16];
  undefined1 local_239 [16];
  char local_229 [16];
  byte local_219 [16];
  undefined1 local_209 [16];
  undefined1 local_1f9 [16];
  byte local_1e9 [16];
  undefined1 local_1d9 [16];
  undefined1 local_1c9 [16];
  char local_1b9 [16];
  undefined1 local_1a9 [16];
  char local_199 [16];
  undefined1 local_189 [16];
  char local_179 [16];
  undefined1 local_169 [16];
  undefined1 local_159 [16];
  undefined1 local_149 [16];
  undefined1 local_139 [16];
  char local_129 [16];
  undefined1 local_119 [16];
  undefined1 local_109 [16];
  undefined1 local_f9 [16];
  char local_e9 [16];
  byte local_d9 [16];
  undefined1 local_c9 [16];
  char local_b9 [16];
  undefined1 local_a9 [16];
  byte local_99 [16];
  undefined1 local_89 [16];
  char local_79 [16];
  undefined1 local_69 [16];
  char local_59 [16];
  undefined1 local_49 [16];
  char local_39 [16];
  undefined1 local_29;
  longlong local_28;
  longlong *local_20;
  
  local_2a0 = auStack_348;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  *param_3 = 0;
  *param_4 = 0;
  pbVar5 = param_2;
  cVar2 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x90));
  if (cVar2 == '\0') {
    *param_2 = 0x76;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
    FUN_00414520(param_4);
  }
  else {
    *param_2 = 0;
    FUN_00414520(param_3);
    FUN_00414520(param_4);
    uVar6 = CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
    local_28 = FUN_009ab600(&PTR_FUN_0098f328,uVar6);
    puVar7 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    local_20 = (longlong *)FUN_0096d130(&PTR_FUN_009183f8,puVar7,*(undefined8 *)(param_1 + 0x88));
    do {
      bVar1 = *(byte *)(local_20 + 5);
      uVar8 = (undefined7)((ulonglong)puVar7 >> 8);
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_129);
          if (local_129[0] == '\0') {
            local_139[0] = 1;
            puVar7 = local_139;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else if (local_129[0] == '\x06') {
            local_149[0] = 5;
            puVar7 = local_149;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else if (local_129[0] == '\b') {
            local_159[0] = 10;
            puVar7 = local_159;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else {
            if (local_129[0] != '\r') {
              *param_2 = 0x87;
              (**(code **)*local_20)(local_20,&local_2d8);
              FUN_00414b90(param_3,local_2d8);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            local_169[0] = 0xe;
            puVar7 = local_169;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
        }
        else if (bVar1 < 3) {
          if (bVar1 == 2) {
            FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_59);
            if (local_59[0] != '\f') {
              *param_2 = 0x85;
              (**(code **)*local_20)(local_20,&local_2b0);
              FUN_00414b90(param_3,local_2b0);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            local_69[0] = 3;
            puVar7 = local_69;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else if (bVar1 == 0) {
            FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_39);
            if (local_39[0] != '\f') {
              *param_2 = 0x84;
              (**(code **)*local_20)(local_20,&local_2a8);
              FUN_00414b90(param_3,local_2a8);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            local_49[0] = 3;
            puVar7 = local_49;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else if (bVar1 == 1) {
            uVar6 = CONCAT71(uVar8,5);
            FUN_0059b830(local_28 + 8,uVar6,1,local_b9);
            if (local_b9[0] == '\x04') {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),5);
              FUN_0059b830(local_28 + 8,uVar6,0,local_c9);
            }
            uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),5);
            FUN_0059b830(local_28 + 8,uVar6,1,local_d9);
            if (local_d9[0] < 0x10) {
              bVar9 = ((int)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),1) << (local_d9[0] & 0x1f) &
                      0x3b49U) != 0;
            }
            else {
              bVar9 = false;
            }
            if (bVar9) {
              *param_2 = 0x87;
              (**(code **)*local_20)(local_20,&local_2c8);
              FUN_00414b90(param_3,local_2c8);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            cVar2 = FUN_00971cd0(auStack_348,local_28);
            if (cVar2 != '\0') {
              *param_2 = 0x87;
              (**(code **)*local_20)(local_20,&local_2d0);
              FUN_00414b90(param_3,local_2d0);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            FUN_0059b830(local_28 + 8,5,1,local_e9);
            if (local_e9[0] == '\a') {
              local_f9[0] = 0xb;
              puVar7 = local_f9;
              FUN_0059b9e0(local_28 + 8,puVar7);
            }
            else if (local_e9[0] == '\n') {
              local_109[0] = 9;
              puVar7 = local_109;
              FUN_0059b9e0(local_28 + 8,puVar7);
            }
            else {
              local_119[0] = 2;
              puVar7 = local_119;
              FUN_0059b9e0(local_28 + 8,puVar7);
            }
          }
        }
        else {
          if (bVar1 == 3) {
            uVar6 = CONCAT71(uVar8,5);
            FUN_0059b830(local_28 + 8,uVar6,1,local_219);
            if (local_219[0] < 0x10) {
              bVar9 = ((int)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),1) << (local_219[0] & 0x1f) &
                      0x808U) != 0;
            }
            else {
              bVar9 = false;
            }
            if (!bVar9) {
              FUN_0059b830(local_28 + 8,5,1,local_229);
              if (local_229[0] == '\x04') {
                FUN_0059b830(local_28 + 8,5,0,local_239);
              }
              FUN_0059b830(local_28 + 8,5,1,local_249);
              if (local_249[0] == '\x02') {
                do {
                  FUN_0059b830(local_28 + 8,5,0,local_269);
                  FUN_0059b830(local_28 + 8,5,1,local_259);
                } while (local_259[0] != '\x06');
                FUN_0059b830(local_28 + 8,5,0,local_279);
                FUN_0059b830(local_28 + 8,5,1,local_289);
                if (local_289[0] != '\f') {
                  *param_2 = 0x87;
                  (**(code **)*local_20)(local_20,&local_318);
                  FUN_00414b90(param_3,local_318);
                  FUN_00414520(param_4);
                }
              }
              else {
                *param_2 = 0x87;
                (**(code **)*local_20)(local_20,&local_320);
                FUN_00414b90(param_3,local_320);
                FUN_00414520(param_4);
              }
            }
            goto LAB_00972b2c;
          }
          if (bVar1 == 4) {
            FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_1e9);
            uVar4 = (ulonglong)local_1e9[0];
            if (uVar4 < 10) {
              if (uVar4 == 9) {
LAB_009727f7:
                (**(code **)*local_20)(local_20,&local_300);
                iVar3 = FUN_00416420(local_300,&DAT_00972bec);
                if (iVar3 == 0) {
                  local_209[0] = 3;
                  puVar7 = local_209;
                  FUN_0059b9e0(local_28 + 8,puVar7);
                  goto LAB_00972a8e;
                }
                *param_2 = 0x87;
                (**(code **)*local_20)(local_20,&local_308);
                FUN_00414b90(param_3,local_308);
                FUN_00414520(param_4);
                goto LAB_00972b2c;
              }
              if ((1 < uVar4 - 1) && (uVar4 - 1 != 4)) {
LAB_00972887:
                *param_2 = 0x87;
                (**(code **)*local_20)(local_20,&local_310);
                FUN_00414b90(param_3,local_310);
                FUN_00414520(param_4);
                goto LAB_00972b2c;
              }
            }
            else {
              if (uVar4 == 0xb) goto LAB_009727f7;
              if (uVar4 != 0xe) goto LAB_00972887;
            }
            local_1f9[0] = 4;
            puVar7 = local_1f9;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
        }
      }
      else if (bVar1 == 7) {
        uVar6 = CONCAT71(uVar8,5);
        FUN_0059b830(local_28 + 8,uVar6,1,local_99);
        if (local_99[0] < 0x10) {
          bVar9 = ((int)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),1) << (local_99[0] & 0x1f) &
                  0x3041U) != 0;
        }
        else {
          bVar9 = false;
        }
        if (!bVar9) {
          *param_2 = 0x87;
          (**(code **)*local_20)(local_20,&local_2c0);
          FUN_00414b90(param_3,local_2c0);
          FUN_00414520(param_4);
          goto LAB_00972b2c;
        }
        local_a9[0] = 6;
        puVar7 = local_a9;
        FUN_0059b9e0(local_28 + 8,puVar7);
      }
      else if (bVar1 == 8) {
        FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_79);
        if (local_79[0] != '\x06') {
          *param_2 = 0x86;
          (**(code **)*local_20)(local_20,&local_2b8);
          FUN_00414b90(param_3,local_2b8);
          FUN_00414520(param_4);
          goto LAB_00972b2c;
        }
        local_89[0] = 7;
        puVar7 = local_89;
        FUN_0059b9e0(local_28 + 8,puVar7);
      }
      else if (bVar1 == 9) {
        FUN_0059b830(local_28 + 8,CONCAT71(uVar8,5),1,local_179);
        if (local_179[0] == '\x04') {
          FUN_0059b830(local_28 + 8,5,0,local_189);
        }
        cVar2 = FUN_00971cd0(auStack_348,local_28);
        if (cVar2 != '\0') {
          *param_2 = 0x87;
          (**(code **)*local_20)(local_20,&local_2e0);
          FUN_00414b90(param_3,local_2e0);
          FUN_00414520(param_4);
          goto LAB_00972b2c;
        }
        (**(code **)*local_20)(local_20,&local_2e8);
        iVar3 = FUN_00416420(local_2e8,&DAT_00972be4);
        if (iVar3 == 0) {
          FUN_0059b830(local_28 + 8,5,1,local_199);
          if ((local_199[0] != '\x05') && (local_199[0] != '\x0e')) {
            *param_2 = 0x87;
            (**(code **)*local_20)(local_20,&local_2f0);
            FUN_00414b90(param_3,local_2f0);
            FUN_00414520(param_4);
            goto LAB_00972b2c;
          }
          local_1a9[0] = 0xd;
          puVar7 = local_1a9;
          FUN_0059b9e0(local_28 + 8,puVar7);
        }
        else {
          FUN_0059b830(local_28 + 8,5,1,local_1b9);
          if ((local_1b9[0] == '\x01') || (local_1b9[0] == '\x05')) {
            local_1c9[0] = 0;
            puVar7 = local_1c9;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
          else {
            if ((1 < (byte)(local_1b9[0] - 7U)) && (local_1b9[0] != '\n')) {
              *param_2 = 0x87;
              (**(code **)*local_20)(local_20,&local_2f8);
              FUN_00414b90(param_3,local_2f8);
              FUN_00414520(param_4);
              goto LAB_00972b2c;
            }
            local_1d9[0] = 8;
            puVar7 = local_1d9;
            FUN_0059b9e0(local_28 + 8,puVar7);
          }
        }
      }
      else if (bVar1 == 10) {
        local_29 = 0xc;
        puVar7 = &local_29;
        FUN_0059b9e0(local_28 + 8,puVar7);
      }
LAB_00972a8e:
      (**(code **)(*local_20 + 8))(local_20);
      bVar1 = *(byte *)((longlong)local_20 + 0x11);
      if (bVar1 < 0xa0) {
        bVar9 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
      }
      else {
        bVar9 = false;
      }
    } while (!bVar9);
    *param_2 = bVar1;
    (**(code **)*local_20)(local_20,&local_328);
    FUN_00414b90(param_3,local_328);
    FUN_00414b90(param_4,local_20[1]);
LAB_00972b2c:
    FUN_00972b80(0,local_2a0);
    FUN_00972ba0(0,local_2a0);
  }
  FUN_004145c0(&local_328,0x11);
  return;
}

