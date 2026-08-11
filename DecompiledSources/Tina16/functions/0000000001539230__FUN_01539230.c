/* Ghidra address: 01539230 */
/* Ghidra symbol: FUN_01539230 */


void FUN_01539230(longlong *param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  double *pdVar7;
  int iVar8;
  uint uVar9;
  byte local_4c;
  byte local_4b;
  undefined1 local_4a;
  undefined1 local_49 [33];
  
  if (param_1 != (longlong *)0x0) {
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((sVar3 == 0xf) || (sVar3 == 0x10)) || (sVar3 == 0xd9)) || (sVar3 == 0xda)) {
      local_4c = 2;
      if (param_2 < 3) {
        if (param_2 == 2) {
          local_4c = 6;
        }
        else if (param_2 == 0) {
          local_4c = 2;
        }
        else if (param_2 == 1) {
          local_4c = 4;
        }
      }
      else if (param_2 == 3) {
        local_4c = 5;
      }
      else if (param_2 == 4) {
        local_4c = 8;
      }
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,1,0,local_49,&local_4a,&local_4b);
      *puVar4 = param_6;
      FUN_01d3a010(puVar4,3,param_6);
      pbVar5 = (byte *)FUN_01cfde70(param_1,2,0,local_49,&local_4a,&local_4b);
      if (param_2 == 4) {
        local_4c = local_4b;
      }
      else if (local_4c != local_4b) {
        if (*pbVar5 == 8) {
          pbVar1 = pbVar5 + 9;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          FUN_00410f20(*(undefined8 *)pbVar1);
          FUN_00410f20(*(undefined8 *)(pbVar5 + 1));
        }
        else if (*pbVar5 == 9) {
          pbVar1 = pbVar5 + 0x11;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          FUN_00410f20(*(undefined8 *)pbVar1);
          FUN_004095f0(*(undefined8 *)(pbVar5 + 9));
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5[0x10] = 0;
          pbVar5[0x19] = 0;
        }
        else if (*pbVar5 == 10) {
          FUN_00442c30(*(undefined8 *)(pbVar5 + 2));
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar1 = pbVar5 + 0xe;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          FUN_00410f20(*(undefined8 *)pbVar1);
        }
        else if (*pbVar5 != 0xb) {
          FUN_004095f0(*(undefined8 *)(pbVar5 + 1));
          if (*(longlong *)(pbVar5 + 9) != 0) {
            uVar9 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar5 - 1];
            iVar8 = 0;
            if (-1 < (int)(uVar9 - 1)) {
              do {
                FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar5 + 9) + (longlong)iVar8 * 8));
                iVar8 = iVar8 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
          }
          FUN_004095f0(*(undefined8 *)(pbVar5 + 9));
        }
        *pbVar5 = local_4c;
        bVar2 = PTR_DAT_02001408[(ulonglong)local_4c - 1];
        *(ushort *)(pbVar5 + 0x11) = (ushort)bVar2 * 8;
        uVar6 = FUN_00409570((ushort)bVar2 * 8);
        *(undefined8 *)(pbVar5 + 1) = uVar6;
        uVar6 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*pbVar5 - 1] << 3);
        *(undefined8 *)(pbVar5 + 9) = uVar6;
      }
      if (local_4c < 6) {
        if (local_4c == 5) {
          puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,1,local_49,&local_4a,&local_4c);
          *puVar4 = param_3;
          FUN_01d3a230(*(undefined8 **)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),0,
                       **(undefined8 **)(pbVar5 + 1));
          puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,2,local_49,&local_4a,&local_4c);
          *puVar4 = param_4;
          FUN_01d3a230(*(longlong *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),1,
                       *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 8));
          FUN_01d3a230(*(longlong *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),2,
                       *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 0x10));
          return;
        }
        if (local_4c == 2) {
          puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,1,local_49,&local_4a,&local_4c);
          if (param_2 == 0) {
            *puVar4 = 0;
          }
          else {
            *puVar4 = param_3;
          }
          FUN_01d3a230(*(undefined8 **)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),0,
                       **(undefined8 **)(pbVar5 + 1));
          FUN_01d3a230(*(undefined8 *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),1,
                       *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 8));
          return;
        }
        if (local_4c != 4) {
          return;
        }
      }
      else {
        if (local_4c == 6) {
          puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,1,local_49,&local_4a,&local_4c);
          *puVar4 = param_3;
          FUN_01d3a230(*(undefined8 **)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),0,
                       **(undefined8 **)(pbVar5 + 1));
          puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,2,local_49,&local_4a,&local_4c);
          *puVar4 = param_4;
          FUN_01d3a230(*(longlong *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),1,
                       *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 8));
          return;
        }
        if (local_4c != 7) {
          return;
        }
      }
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,1,local_49,&local_4a,&local_4c);
      *puVar4 = param_3;
      FUN_01d3a230(*(undefined8 **)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),0,
                   **(undefined8 **)(pbVar5 + 1));
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,2,local_49,&local_4a,&local_4c);
      *puVar4 = param_4;
      FUN_01d3a230(*(longlong *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),1,
                   *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 8));
      pdVar7 = (double *)FUN_01cfde70(param_1,2,3,local_49,&local_4a,&local_4c);
      *pdVar7 = param_5 - 90.0;
      FUN_01d3a230(*(longlong *)(pbVar5 + 1),*(undefined8 *)(pbVar5 + 9),2,
                   *(undefined8 *)(*(longlong *)(pbVar5 + 1) + 0x10));
    }
    else if (sVar3 == 100) {
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,4,0,local_49,&local_4a,&local_4c);
      *puVar4 = param_6;
      FUN_01d3a010(puVar4,3,param_6);
      pdVar7 = (double *)FUN_01cfde70(param_1,5,0,local_49,&local_4a,&local_4c);
      *pdVar7 = param_5;
      FUN_01d3a010(pdVar7,3,param_5);
    }
    else if ((sVar3 == 0x3e) || (sVar3 == 0x3e)) {
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,1,0,local_49,&local_4a,&local_4c);
      *puVar4 = param_3;
      FUN_01d3a010(puVar4,3,param_3);
      puVar4 = (undefined8 *)FUN_01cfde70(param_1,2,0,local_49,&local_4a,&local_4c);
      *puVar4 = param_4;
      FUN_01d3a010(puVar4,3,param_4);
    }
  }
  return;
}

