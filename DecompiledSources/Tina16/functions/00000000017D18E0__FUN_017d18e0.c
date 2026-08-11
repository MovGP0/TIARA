/* Ghidra address: 017d18e0 */
/* Ghidra symbol: FUN_017d18e0 */


void FUN_017d18e0(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_44;
  undefined1 local_2f;
  char local_2e;
  byte local_2d;
  undefined1 local_2c [4];
  
  lVar3 = FUN_01b10900(&PTR_FUN_01af4ef8,1,0x14,5);
  *(longlong *)(param_1 + 0x4c0) = lVar3;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  puVar4 = (undefined8 *)FUN_004095c0(0x18);
  *puVar4 = 0;
  uVar5 = FUN_01b077e0(param_1);
  puVar4[1] = uVar5;
  uVar5 = FUN_01b077e0(param_1);
  puVar4[2] = uVar5;
  (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x50))(*(longlong **)(param_1 + 0x4c0),puVar4);
  iVar9 = *(int *)(param_1 + 0x2d8);
  local_44 = 1;
  if (0 < iVar9) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_44 * 8);
      sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))(*(longlong **)(lVar3 + 0x128));
      if ((((sVar2 == 0x10) ||
           (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                              (*(longlong **)(lVar3 + 0x128)), sVar2 == 0xd9)) ||
          (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                             (*(longlong **)(lVar3 + 0x128)), sVar2 == 0xda)) ||
         (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                            (*(longlong **)(lVar3 + 0x128)), sVar2 == 0xf)) {
        puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,2,2,&local_2e,&local_2f,&local_2d);
        if (local_2e == '\x05') {
          if (local_2d < 8) {
            bVar10 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << (local_2d & 0x1f) & 0x90U)
                     != 0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x4c0),puVar4,local_2c);
            if (cVar1 == '\0') {
              puVar6 = (undefined8 *)FUN_004095c0(0x18);
              *puVar6 = *puVar4;
              uVar5 = FUN_01b077e0(param_1);
              puVar6[1] = uVar5;
              uVar5 = FUN_01b077e0(param_1);
              puVar6[2] = uVar5;
              (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x50))
                        (*(longlong **)(param_1 + 0x4c0),puVar6);
            }
            puVar6 = (undefined8 *)FUN_004095c0(0x18);
            puVar6[1] = *puVar4;
            puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,2,1,&local_2e,&local_2f,&local_2d);
            puVar6[2] = puVar4;
            *puVar6 = *puVar4;
            FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x30),puVar6);
          }
        }
        pdVar7 = (double *)FUN_01b05ad0(lVar3,1,0,&local_2e,&local_2f,&local_2d);
        if (*pdVar7 != 0.0) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x4c0) + 0x28) = 1;
        }
      }
      sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))(*(longlong **)(lVar3 + 0x128));
      if ((sVar2 == 0x3e) ||
         (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                            (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x66)) {
        puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,2,0,&local_2e,&local_2f,&local_2d);
        cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x4c0),puVar4);
        if (cVar1 == '\0') {
          puVar6 = (undefined8 *)FUN_004095c0(0x18);
          *puVar6 = *puVar4;
          uVar5 = FUN_01b077e0(param_1);
          puVar6[1] = uVar5;
          uVar5 = FUN_01b077e0(param_1);
          puVar6[2] = uVar5;
          (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x50))
                    (*(longlong **)(param_1 + 0x4c0),puVar6);
        }
        puVar6 = (undefined8 *)FUN_004095c0(0x18);
        puVar6[1] = *puVar4;
        puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,1,0,&local_2e,&local_2f,&local_2d);
        puVar6[2] = puVar4;
        *puVar6 = *puVar4;
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x30),puVar6);
      }
      sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))(*(longlong **)(lVar3 + 0x128));
      if (((sVar2 == 0xe) ||
          (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                             (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x43)) ||
         (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                            (*(longlong **)(lVar3 + 0x128)), sVar2 == 0xd)) {
        pdVar7 = (double *)FUN_01b05ad0(lVar3,1,0,&local_2e,&local_2f,&local_2d);
        if (*pdVar7 != 0.0) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x4c0) + 0x28) = 1;
        }
      }
      sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))(*(longlong **)(lVar3 + 0x128));
      if ((((sVar2 == 8) ||
           (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                              (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x62)) ||
          (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                             (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x3f)) ||
         (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                            (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x6a)) {
        sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))(*(longlong **)(lVar3 + 0x128));
        if ((sVar2 == 0x3f) ||
           (sVar2 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                              (*(longlong **)(lVar3 + 0x128)), sVar2 == 0x6a)) {
          pcVar8 = (char *)FUN_01b05ad0(lVar3,2,0,&local_2e,&local_2f,&local_2d);
          if (*pcVar8 != '\x02') goto LAB_017d1f10;
          puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,1,0,&local_2e,&local_2f,&local_2d);
        }
        else {
          puVar4 = (undefined8 *)FUN_01b05ad0(lVar3,1,0,&local_2e,&local_2f,&local_2d);
        }
        cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x4c0),puVar4);
        if (cVar1 == '\0') {
          puVar6 = (undefined8 *)FUN_004095c0(0x18);
          *puVar6 = *puVar4;
          uVar5 = FUN_01b077e0(param_1);
          puVar6[1] = uVar5;
          uVar5 = FUN_01b077e0(param_1);
          puVar6[2] = uVar5;
          (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x50))
                    (*(longlong **)(param_1 + 0x4c0),puVar6);
        }
        puVar6 = (undefined8 *)FUN_004095c0(0x18);
        puVar6[1] = *puVar4;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x30),puVar6);
      }
LAB_017d1f10:
      local_44 = local_44 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}

