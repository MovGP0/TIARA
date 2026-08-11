/* Ghidra address: 00bc7340 */
/* Ghidra symbol: FUN_00bc7340 */


longlong FUN_00bc7340(undefined8 *param_1,uint *param_2)

{
  short sVar1;
  short *psVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  uint local_28;
  ushort local_24;
  char local_21;
  longlong local_20;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_60 = 0;
  *param_2 = 0;
  param_1[0x2a] = param_1[0x2a] + 2;
  psVar2 = (short *)param_1[0x2a];
  uVar8 = (ulonglong)(ushort)psVar2[-1];
  if (uVar8 < 0x2f) {
    if (uVar8 == 0x2e) {
      if ((*(uint *)(param_1 + 0x34) & 4) == 0) {
        local_20 = FUN_00bc5e20(param_1,0x24);
        *param_2 = *param_2 | 1;
      }
      else {
        local_20 = FUN_00bc5e20(param_1,3);
        *param_2 = *param_2 | 3;
      }
    }
    else {
      if (0x28 < uVar8) {
        if (uVar8 != 0x29) {
          if (uVar8 - 0x2a < 2) goto LAB_00bc7c4b;
          goto LAB_00bc7f1d;
        }
LAB_00bc7c2e:
        (**(code **)*param_1)(param_1,0x72);
        goto LAB_00bc81f4;
      }
      if (uVar8 == 0x28) {
        if (*psVar2 == 0x3f) {
          if (psVar2[1] != 0x23) {
            param_1[0x2a] = param_1[0x2a] + 2;
            lVar7 = param_1[0x2a];
            while ((*(short *)param_1[0x2a] != 0 && (*(short *)param_1[0x2a] != 0x29))) {
              param_1[0x2a] = param_1[0x2a] + 2;
            }
            psVar2 = (short *)param_1[0x2a];
            if (*psVar2 == 0x29) {
              FUN_004167d0(&local_58,lVar7);
              FUN_00416dc0(&local_50,local_58,1,((longlong)psVar2 - lVar7) / 2 & 0xffffffff);
              cVar4 = FUN_00bc5890(*param_1,local_50,param_1 + 0x34);
              if (cVar4 != '\0') {
                param_1[0x2a] = param_1[0x2a] + 2;
                local_20 = FUN_00bc5e20(param_1,0x13);
                goto LAB_00bc81eb;
              }
            }
            (**(code **)*param_1)(param_1,0x7f);
            goto LAB_00bc81f4;
          }
          param_1[0x2a] = param_1[0x2a] + 4;
          while ((*(short *)param_1[0x2a] != 0 && (*(short *)param_1[0x2a] != 0x29))) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
          if (*(short *)param_1[0x2a] != 0x29) {
            (**(code **)*param_1)(param_1,0x7d);
            goto LAB_00bc81f4;
          }
          param_1[0x2a] = param_1[0x2a] + 2;
          local_20 = FUN_00bc5e20(param_1,0x13);
        }
        else {
          local_20 = FUN_00bc62b0(param_1,1,&local_28);
          if (local_20 == 0) {
            local_60 = 0;
            goto LAB_00bc81f4;
          }
          *param_2 = *param_2 | local_28 & 5;
        }
      }
      else {
        if (uVar8 == 0) goto LAB_00bc7c2e;
        if (uVar8 != 0x24) goto LAB_00bc7f1d;
        if (((*(uint *)(param_1 + 0x34) & 0x10) == 0) ||
           ((param_1[0x39] == 0 && (*(char *)(param_1 + 0x3a) == '\0')))) {
          local_20 = FUN_00bc5e20(param_1,2);
        }
        else {
          local_20 = FUN_00bc5e20(param_1,0x23);
        }
      }
    }
  }
  else if (uVar8 < 0x5d) {
    if (uVar8 == 0x5c) {
      if (*psVar2 == 0) {
        (**(code **)*param_1)(param_1,0x74);
        goto LAB_00bc81f4;
      }
      uVar8 = (ulonglong)*(ushort *)param_1[0x2a];
      if (uVar8 < 0x58) {
        if (uVar8 == 0x57) {
          local_20 = FUN_00bc5e20(param_1,0xf);
          *param_2 = *param_2 | 3;
        }
        else if (uVar8 < 0x43) {
          if (uVar8 == 0x42) {
            local_20 = FUN_00bc5e20(param_1,0x26);
          }
          else if (uVar8 - 0x31 < 9) {
            if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
              local_20 = FUN_00bc5e20(param_1,0x1c);
            }
            else {
              local_20 = FUN_00bc5e20(param_1,0x1d);
            }
            FUN_00bc5e70(param_1,*(short *)param_1[0x2a] + -0x30);
            *param_2 = *param_2 | 3;
          }
          else {
            if (uVar8 - 0x31 != 0x10) goto LAB_00bc7ee6;
            local_20 = FUN_00bc5e20(param_1,1);
          }
        }
        else if (uVar8 == 0x44) {
          local_20 = FUN_00bc5e20(param_1,0xd);
          *param_2 = *param_2 | 3;
        }
        else {
          if (uVar8 != 0x53) goto LAB_00bc7ee6;
          local_20 = FUN_00bc5e20(param_1,0x11);
          *param_2 = *param_2 | 3;
        }
      }
      else if (uVar8 < 0x65) {
        if (uVar8 == 100) {
          local_20 = FUN_00bc5e20(param_1,0xc);
          *param_2 = *param_2 | 3;
        }
        else if (uVar8 == 0x5a) {
          local_20 = FUN_00bc5e20(param_1,2);
        }
        else {
          if (uVar8 != 0x62) goto LAB_00bc7ee6;
          local_20 = FUN_00bc5e20(param_1,0x25);
        }
      }
      else if (uVar8 == 0x73) {
        local_20 = FUN_00bc5e20(param_1,0x10);
        *param_2 = *param_2 | 3;
      }
      else if (uVar8 == 0x77) {
        local_20 = FUN_00bc5e20(param_1,0xe);
        *param_2 = *param_2 | 3;
      }
      else {
LAB_00bc7ee6:
        uVar5 = FUN_00bc71a0(auStack_88,param_1 + 0x2a);
        FUN_00bc6fd0(auStack_88,uVar5);
      }
      param_1[0x2a] = param_1[0x2a] + 2;
    }
    else {
      if (uVar8 == 0x3f) {
LAB_00bc7c4b:
        (**(code **)*param_1)(param_1,0x73);
        goto LAB_00bc81f4;
      }
      if (uVar8 == 0x5b) {
        if (*psVar2 == 0x5e) {
          if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
            local_20 = FUN_00bc70d0(auStack_88,5);
          }
          else {
            local_20 = FUN_00bc70d0(auStack_88,0x16);
          }
          param_1[0x2a] = param_1[0x2a] + 2;
        }
        else if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
          local_20 = FUN_00bc70d0(auStack_88,4);
        }
        else {
          local_20 = FUN_00bc70d0(auStack_88,0x15);
        }
        local_21 = '\0';
        if (*(short *)param_1[0x2a] == 0x5d) {
          FUN_00bc7110(auStack_88,0x5d);
          param_1[0x2a] = param_1[0x2a] + 2;
        }
LAB_00bc79b2:
        while( true ) {
          if ((*(short *)param_1[0x2a] == 0) || (*(short *)param_1[0x2a] == 0x5d))
          goto LAB_00bc79d3;
          psVar2 = (short *)param_1[0x2a];
          sVar1 = *psVar2;
          if ((sVar1 == 0x2d) && (((psVar2[1] != 0 && (psVar2[1] != 0x5d)) && (local_21 != '\0'))))
          break;
          if (sVar1 == 0x5c) {
            param_1[0x2a] = param_1[0x2a] + 2;
            if (*(short *)param_1[0x2a] == 0) {
              (**(code **)*param_1)(param_1,0x6e);
              goto LAB_00bc81f4;
            }
            sVar1 = *(short *)param_1[0x2a];
            if (sVar1 == 100) {
              FUN_00bc7140(auStack_88,L"0123456789");
            }
            else if (sVar1 == 0x73) {
              FUN_00bc7140(auStack_88,param_1[0x35]);
            }
            else if (sVar1 == 0x77) {
              FUN_00bc7140(auStack_88,param_1[0x36]);
            }
            else {
              uVar5 = FUN_00bc71a0(auStack_88,param_1 + 0x2a);
              FUN_00bc7110(auStack_88,uVar5);
            }
          }
          else {
            FUN_00bc7110(auStack_88,sVar1);
          }
          param_1[0x2a] = param_1[0x2a] + 2;
        }
        param_1[0x2a] = param_1[0x2a] + 2;
        uVar10 = (uint)*(ushort *)param_1[0x2a];
        if (*(ushort *)param_1[0x2a] == 0x5c) {
          if ((*(ushort *)(param_1[0x2a] + 2) < 0x100) &&
             (bVar3 = *(char *)(param_1[0x2a] + 2) - 0x40,
             bVar3 < 0x40 && (1L << (bVar3 & 0x3f) & 0x88001000880010U) != 0)) {
            FUN_00bc70f0(auStack_88,0x2d);
            goto LAB_00bc79b2;
          }
          param_1[0x2a] = param_1[0x2a] + 2;
          uVar10 = FUN_00bc71a0(auStack_88,param_1 + 0x2a);
        }
        uVar9 = (ushort)uVar10;
        if ((((*(uint *)(param_1 + 0x34) & 2) == 0) || (local_24 != 0x430)) || (uVar9 != 0x44f)) {
          if ((((*(uint *)(param_1 + 0x34) & 2) == 0) || (local_24 != 0x410)) || (uVar9 != 0x42f)) {
            if ((((*(uint *)(param_1 + 0x34) & 2) == 0) || (local_24 != 0x430)) || (uVar9 != 0x42f))
            {
              if (uVar9 < local_24) {
                (**(code **)*param_1)(param_1,0x6d);
                goto LAB_00bc81f4;
              }
              local_24 = local_24 + 1;
              FUN_00bc70f0(auStack_88,uVar10);
              for (; local_24 < uVar9; local_24 = local_24 + 1) {
                FUN_00bc70f0(auStack_88,local_24);
              }
            }
            else {
              FUN_00416830(&local_40,&DAT_01e9a07a,0x22);
              FUN_00bc7140(auStack_88,local_40);
              FUN_00416830(&local_48,&DAT_01e9a0be,0x22);
              FUN_00bc7140(auStack_88,local_48);
            }
          }
          else {
            FUN_00416830(&local_38,&DAT_01e9a0be,0x22);
            FUN_00bc7140(auStack_88,local_38);
          }
        }
        else {
          FUN_00416830(&local_30,&DAT_01e9a07a,0x22);
          FUN_00bc7140(auStack_88,local_30);
        }
        param_1[0x2a] = param_1[0x2a] + 2;
        goto LAB_00bc79b2;
      }
LAB_00bc7f1d:
      param_1[0x2a] = param_1[0x2a] + -2;
      if (((*(uint *)(param_1 + 0x34) & 0x20) == 0) ||
         ((*(short *)param_1[0x2a] != 0x23 &&
          (lVar7 = FUN_00bc3cd0(L" \t\r\n",*(short *)param_1[0x2a]), lVar7 == 0)))) {
        iVar6 = FUN_00bc5f30(param_1[0x2a],u______________01e9a060);
        if (iVar6 < 1) {
          if (*(short *)param_1[0x2a] != 0x7b) {
            (**(code **)*param_1)(param_1,0x77);
            goto LAB_00bc81f4;
          }
          iVar6 = FUN_00bc5f30((short *)param_1[0x2a] + 1,u______________01e9a060);
          iVar6 = iVar6 + 1;
        }
        sVar1 = *(short *)(param_1[0x2a] + (longlong)iVar6 * 2);
        if ((1 < iVar6) &&
           ((((sVar1 == 0x2a || (sVar1 == 0x2b)) || (sVar1 == 0x3f)) || (sVar1 == 0x7b)))) {
          iVar6 = iVar6 + -1;
        }
        *param_2 = *param_2 | 1;
        if (iVar6 == 1) {
          *param_2 = *param_2 | 2;
        }
        if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
          local_20 = FUN_00bc5e20(param_1,8);
        }
        else {
          local_20 = FUN_00bc5e20(param_1,0x14);
        }
        while ((0 < iVar6 &&
               (((*(uint *)(param_1 + 0x34) & 0x20) == 0 || (*(short *)param_1[0x2a] != 0x23))))) {
          if (((*(uint *)(param_1 + 0x34) & 0x20) == 0) ||
             (lVar7 = FUN_00bc3cd0(L" \t\r\n",*(undefined2 *)param_1[0x2a]), lVar7 == 0)) {
            FUN_00bc5e70(param_1,*(undefined2 *)param_1[0x2a]);
          }
          param_1[0x2a] = param_1[0x2a] + 2;
          iVar6 = iVar6 + -1;
        }
        FUN_00bc5e70(param_1,0);
      }
      else {
        if (*(short *)param_1[0x2a] == 0x23) {
          while (((sVar1 = *(short *)param_1[0x2a], sVar1 != 0 && (sVar1 != 0xd)) && (sVar1 != 10)))
          {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
          while ((*(short *)param_1[0x2a] == 0xd || (*(short *)param_1[0x2a] == 10))) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        else {
          while (lVar7 = FUN_00bc3cd0(L" \t\r\n",*(undefined2 *)param_1[0x2a]), lVar7 != 0) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        local_20 = FUN_00bc5e20(param_1,0x13);
      }
    }
  }
  else {
    if (uVar8 != 0x5e) {
      if (uVar8 == 0x7c) goto LAB_00bc7c2e;
      goto LAB_00bc7f1d;
    }
    if (((*(uint *)(param_1 + 0x34) & 0x10) == 0) ||
       ((param_1[0x39] == 0 && (*(char *)(param_1 + 0x3a) == '\0')))) {
      local_20 = FUN_00bc5e20(param_1,1);
    }
    else {
      local_20 = FUN_00bc5e20(param_1,0x22);
    }
  }
  goto LAB_00bc81eb;
LAB_00bc79d3:
  FUN_00bc70f0(auStack_88,0);
  if (*(short *)param_1[0x2a] != 0x5d) {
    (**(code **)*param_1)(param_1,0x71);
    goto LAB_00bc81f4;
  }
  param_1[0x2a] = param_1[0x2a] + 2;
  *param_2 = *param_2 | 3;
LAB_00bc81eb:
  local_60 = local_20;
LAB_00bc81f4:
  FUN_00414560(&local_58,6);
  return local_60;
}

