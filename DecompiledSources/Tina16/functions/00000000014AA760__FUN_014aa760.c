/* Ghidra address: 014aa760 */
/* Ghidra symbol: FUN_014aa760 */


void FUN_014aa760(longlong *param_1,undefined8 param_2,short param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined7 uVar5;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong local_a8;
  char local_89;
  undefined1 local_7f [41];
  undefined1 local_56 [16];
  short local_46;
  short local_44;
  char local_41;
  short local_40;
  undefined8 local_3e;
  int local_36;
  undefined1 local_32 [10];
  
  local_a8 = *(longlong *)(*param_1 + 0x48);
  if (local_a8 == 0) {
    local_a8 = DAT_0210eae0;
  }
  if (param_3 == 0x14) {
    bVar8 = true;
    FUN_01d30f00(*param_1,&local_44,2);
    iVar6 = (int)local_44;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01d30f00(*param_1,&local_36,0xe);
        if (local_36 == -1) {
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_56,0x10);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_7f,0x29);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_7f,0x29);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          puVar1 = (undefined8 *)FUN_004095c0(0x37);
          uVar2 = FUN_0198d420(local_a8,local_36);
          *puVar1 = uVar2;
          FUN_00409a70(local_32,puVar1 + 1,10);
          *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
          FUN_004ae7e0(*(undefined8 *)(local_a8 + 0x478),puVar1);
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x13) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x10);
              FUN_01d30f00(*param_1,uVar2,0x10);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x13),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x1b) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x29);
              FUN_01d30f00(*param_1,uVar2,0x29);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x1b),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x23) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x29);
              FUN_01d30f00(*param_1,uVar2,0x29);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x23),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (bVar8) {
            *(undefined8 *)(local_a8 + 0xa00) = *puVar1;
            *(undefined8 *)(local_a8 + 0xa08) = puVar1[1];
            *(undefined1 *)(local_a8 + 0xa10) = *(undefined1 *)(puVar1 + 2);
            bVar8 = false;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (param_3 == 0x13) {
    FUN_01d30f00(*param_1,&local_44,2);
    iVar6 = (int)local_44;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01d30f00(*param_1,&local_36,0xe);
        if (local_36 == -1) {
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_56,0x10);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_7f,0x29);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          puVar1 = (undefined8 *)FUN_004095c0(0x37);
          uVar2 = FUN_0198d420(local_a8,local_36);
          *puVar1 = uVar2;
          FUN_00409a70(local_32,puVar1 + 1,10);
          *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
          FUN_004ae7e0(*(undefined8 *)(local_a8 + 0x478),puVar1);
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x13) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x10);
              FUN_01d30f00(*param_1,uVar2,0x10);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x13),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x1b) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x29);
              FUN_01d30f00(*param_1,uVar2,0x29);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x1b),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (local_89 != '\0') {
            *(undefined8 *)(local_a8 + 0xa00) = *puVar1;
            *(undefined8 *)(local_a8 + 0xa08) = puVar1[1];
            *(undefined1 *)(local_a8 + 0xa10) = *(undefined1 *)(puVar1 + 2);
            local_89 = '\0';
          }
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x23) = uVar2;
          uVar5 = (undefined7)((ulonglong)puVar1 >> 8);
          if (*(byte *)(puVar1 + 1) < 8) {
            bVar8 = ((int)CONCAT71(uVar5,1) << (*(byte *)(puVar1 + 1) & 0x1f) & 7U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            pcVar3 = (char *)FUN_004095c0(0x29);
            *pcVar3 = *(char *)(puVar1 + 1) + '\x01';
            *(undefined8 *)(pcVar3 + 1) = *(undefined8 *)((longlong)puVar1 + 9);
            pcVar3[9] = '\0';
            pcVar3[10] = '\0';
            pcVar3[0xb] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\x14';
            pcVar3[0x10] = '@';
            FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x23),pcVar3);
            *(undefined1 *)(puVar1 + 1) = 0;
          }
          if (*(byte *)(puVar1 + 1) < 8) {
            bVar8 = ((int)CONCAT71(uVar5,1) << (*(byte *)(puVar1 + 1) & 0x1f) & 0x18U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            *(char *)(puVar1 + 1) = *(char *)(puVar1 + 1) + -2;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,&local_44,2);
    iVar6 = (int)local_44;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01d30f00(*param_1,&local_36,0xe);
        if (local_36 == -1) {
          FUN_01d30f00(*param_1,&local_46,2);
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              FUN_01d30f00(*param_1,local_56,0x10);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          puVar1 = (undefined8 *)FUN_004095c0(0x37);
          uVar2 = FUN_0198d420(local_a8,local_36);
          *puVar1 = uVar2;
          FUN_00409a70(local_32,puVar1 + 1,10);
          *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
          FUN_004ae7e0(*(undefined8 *)(local_a8 + 0x478),puVar1);
          FUN_01d30f00(*param_1,&local_46,2);
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x13) = uVar2;
          iVar7 = (int)local_46;
          if (-1 < iVar7 + -1) {
            do {
              uVar2 = FUN_004095c0(0x10);
              FUN_01d30f00(*param_1,uVar2,0x10);
              FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x13),uVar2);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (local_89 != '\0') {
            *(undefined8 *)(local_a8 + 0xa00) = *puVar1;
            *(undefined8 *)(local_a8 + 0xa08) = puVar1[1];
            *(undefined1 *)(local_a8 + 0xa10) = *(undefined1 *)(puVar1 + 2);
            local_89 = '\0';
          }
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x1b) = uVar2;
          uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)puVar1 + 0x23) = uVar2;
          if (*(byte *)(puVar1 + 1) < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)puVar1 >> 8),1) <<
                     (*(byte *)(puVar1 + 1) & 0x1f) & 7U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            pcVar3 = (char *)FUN_004095c0(0x29);
            *pcVar3 = *(char *)(puVar1 + 1) + '\x01';
            *(undefined8 *)(pcVar3 + 1) = *(undefined8 *)((longlong)puVar1 + 9);
            pcVar3[9] = '\0';
            pcVar3[10] = '\0';
            pcVar3[0xb] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\x14';
            pcVar3[0x10] = '@';
            FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x23),pcVar3);
            *(undefined1 *)(puVar1 + 1) = 0;
          }
          if (*(char *)(puVar1 + 1) == '\x03') {
            *(undefined1 *)(puVar1 + 1) = 1;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_41,0xb);
    if (local_40 != -1) {
      *(undefined1 *)(local_a8 + 0xa08) = 0;
      uVar2 = FUN_0198d420(local_a8,(longlong)local_40);
      *(undefined8 *)(local_a8 + 0xa00) = uVar2;
      *(undefined8 *)(local_a8 + 0xa09) = local_3e;
      puVar1 = (undefined8 *)FUN_004095c0(0x37);
      *puVar1 = *(undefined8 *)(local_a8 + 0xa00);
      puVar1[1] = *(undefined8 *)(local_a8 + 0xa08);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(local_a8 + 0xa10);
      FUN_004ae7e0(*(undefined8 *)(local_a8 + 0x478),puVar1);
      puVar4 = (undefined8 *)FUN_004095c0(0x10);
      *puVar4 = 0x4014000000000000;
      puVar4[1] = *(undefined8 *)(local_a8 + 0xa09);
      uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar1 + 0x13) = uVar2;
      FUN_004ae7e0(uVar2,puVar4);
      uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar1 + 0x1b) = uVar2;
      uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)((longlong)puVar1 + 0x23) = uVar2;
      pcVar3 = (char *)FUN_004095c0(0x29);
      if (param_3 == 0x11) {
        *pcVar3 = local_41 + '\x01';
      }
      else {
        *pcVar3 = local_41;
      }
      *(undefined8 *)(pcVar3 + 1) = local_3e;
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\x14';
      pcVar3[0x10] = '@';
      FUN_004ae7e0(*(undefined8 *)((longlong)puVar1 + 0x23),pcVar3);
    }
  }
  return;
}

