/* Ghidra address: 01397a10 */
/* Ghidra symbol: FUN_01397a10 */


void FUN_01397a10(longlong *param_1,undefined8 param_2,ushort param_3,ushort param_4,
                 undefined8 param_5,ushort *param_6,double *param_7)

{
  ushort uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined6 uVar5;
  undefined8 uVar4;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 *local_a0;
  ushort local_8c;
  ushort local_8a;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  double *local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b9) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  uVar3 = (ulonglong)param_3;
  uVar5 = (undefined6)((ulonglong)param_6 >> 0x10);
  local_8c = param_3;
  local_8a = param_4;
  if (0x68 < uVar3) {
    if (uVar3 < 0xd9) {
      if (uVar3 == 0xd8) {
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        goto LAB_0139a29a;
      }
      if (0xcd < uVar3) {
        if (0xd4 < uVar3) {
          if (uVar3 == 0xd5) {
LAB_0139877e:
            if (param_6[2] < 0x10) {
              bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
            }
            else {
              bVar6 = false;
            }
            *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
            (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
            *local_20 = *param_7;
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
            *local_20 = param_7[1];
            local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
            FUN_00b8fd60(&local_40,*param_7,*PTR_DAT_02005310,0);
            FUN_013977f0(auStack_c8,local_40);
            (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
            if (((ushort)*(byte *)local_20 != param_6[1]) &&
               (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
              *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
            }
            goto LAB_0139a29a;
          }
          if (uVar3 != 0xd6) {
            if (uVar3 != 0xd7) goto LAB_0139a29a;
LAB_01399185:
            (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
            *local_20 = *param_7;
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
            *local_20 = param_7[1];
            (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
            FUN_01397640(*local_20,param_7[2]);
            *local_20 = param_7[2];
            (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
            FUN_01397640(*local_20,param_7[3]);
            *local_20 = param_7[3];
            (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_20);
            FUN_01397640(*local_20,param_7[4]);
            *local_20 = param_7[4];
            (**(code **)(*param_1 + 0x2d0))(param_1,5,&local_20);
            FUN_01397640(*local_20,param_7[5]);
            *local_20 = param_7[5];
            (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_20);
            uVar2 = FUN_0040c840(param_7[7]);
            *(undefined2 *)local_20 = uVar2;
            (**(code **)(*param_1 + 0x2d0))(param_1,7,&local_20);
            FUN_01397650(*(undefined1 *)local_20,(char)param_6[3]);
            *(char *)local_20 = (char)param_6[3];
            (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_20);
            *(char *)local_20 = (char)param_6[1];
            FUN_013977f0(auStack_c8,0);
            *(undefined2 *)(param_1 + 10) = 0xffe9;
            goto LAB_0139a29a;
          }
          goto LAB_01398d0f;
        }
        if (uVar3 == 0xd4) {
LAB_013986c6:
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *local_20 = *param_7;
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *local_20 = param_7[1];
          (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
          *(char *)local_20 = (char)param_6[1];
          goto LAB_0139a29a;
        }
        if (uVar3 - 0xce < 2) goto LAB_01399f8e;
        if (uVar3 - 0xd0 < 2) {
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
          if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
            *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
          }
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *(undefined1 *)(local_20 + 1) = 0;
          *local_20 = 1e+30;
          (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
          *local_20 = 0.001;
          (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
          *(char *)local_20 = (char)param_6[1];
          uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          FUN_01d04aa0(param_1,uVar4);
          goto LAB_0139a29a;
        }
        if (uVar3 != 0xd2) {
          if (uVar3 != 0xd3) goto LAB_0139a29a;
          goto LAB_01397f63;
        }
LAB_013988ae:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
        if (*param_7 != 0.0) {
          *local_20 = (param_7[1] / *param_7) * 100.0;
        }
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_48,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_48);
        goto LAB_0139a29a;
      }
      if (uVar3 == 0xcd) {
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_88,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_88);
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        if (((ushort)*(byte *)local_20 != param_6[1]) &&
           (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        goto LAB_0139a29a;
      }
      if (200 < uVar3) {
        if (uVar3 == 0xc9) {
LAB_013999f3:
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x822U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *local_20 = *param_7;
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *local_20 = param_7[1];
          (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_20);
          *(char *)local_20 = (char)param_6[1];
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_00b8fd60(&local_70,*param_7,*PTR_DAT_02005310,0);
          FUN_013977f0(auStack_c8,local_70);
          goto LAB_0139a29a;
        }
        if (uVar3 == 0xca) {
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *local_20 = *param_7;
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *(char *)local_20 = (char)param_6[3];
          (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
          *(char *)local_20 = (char)param_6[4];
          (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
          *(char *)local_20 = (char)param_6[1];
          uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          FUN_01d04aa0(param_1,uVar4);
          goto LAB_0139a29a;
        }
        if (uVar3 == 0xcb) {
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *local_20 = *param_7;
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *local_20 = param_7[1];
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_00b8fd60(&local_78,*param_7,*PTR_DAT_02005310,0);
          FUN_013977f0(auStack_c8,local_78);
          (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
          if (((ushort)*(byte *)local_20 != param_6[1]) &&
             (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
            *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
          }
          goto LAB_0139a29a;
        }
        if (uVar3 != 0xcc) goto LAB_0139a29a;
LAB_01399c08:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_80,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_80);
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        if (((ushort)*(byte *)local_20 != param_6[1]) &&
           (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        *(undefined2 *)(param_1 + 10) = 0xffe1;
        goto LAB_0139a29a;
      }
      if (uVar3 == 200) goto LAB_01398c24;
      if (uVar3 - 0x69 < 4) {
        (**(code **)(*param_1 + 0x2d0))(param_1,0x13,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,1,&local_21);
        *local_20 = *param_7;
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,0,&local_21);
        *(undefined1 *)((longlong)local_20 + 0x2e) = 1;
        goto LAB_0139a29a;
      }
      if (uVar3 != 0x6f) {
        if (uVar3 != 0x70) {
          if (uVar3 != 0x71) goto LAB_0139a29a;
          goto LAB_01399897;
        }
        goto LAB_0139861f;
      }
    }
    else {
      if (0xe2 < uVar3) {
        if (uVar3 < 0xea) {
          if (uVar3 == 0xe9) goto LAB_013988ae;
          if (uVar3 == 0xe3) {
LAB_01399f8e:
            (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
            if (((uint)*(byte *)local_20 != (uint)((ulonglong)*param_6 % 2)) &&
               (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) < 8 &&
                (1 << (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) & 0x1f) & 0x12U) != 0)) {
              *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
              FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0));
              FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0);
            }
            *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
            if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
              *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
            }
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
            *(undefined1 *)(local_20 + 1) = 0;
            *local_20 = 1e+30;
            (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
            *local_20 = 0.001;
            (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
            *(char *)local_20 = (char)param_6[1];
            uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            FUN_01d04aa0(param_1,uVar4);
            goto LAB_0139a29a;
          }
          if (uVar3 == 0xe4) goto LAB_013997ae;
          if (uVar3 != 0xe5) {
            if (uVar3 != 0xe7) goto LAB_0139a29a;
            goto LAB_013999f3;
          }
        }
        else {
          if (uVar3 == 0xea) {
LAB_013997ae:
            (**(code **)(*param_1 + 0x2d0))(param_1,0x13,&local_20);
            if ((ushort)*(byte *)local_20 != param_6[1]) {
              *(char *)local_20 = (char)param_6[1];
              *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
            }
            local_a8 = &local_22;
            local_a0 = &local_23;
            local_20 = (double *)FUN_01cfde70(param_1,1,1,&local_21);
            *local_20 = *param_7;
            local_a8 = &local_22;
            local_a0 = &local_23;
            local_20 = (double *)FUN_01cfde70(param_1,1,0,&local_21);
            *(undefined1 *)((longlong)local_20 + 0x2e) = 1;
            goto LAB_0139a29a;
          }
          if (uVar3 != 0xeb) {
            if (uVar3 != 0xec) goto LAB_0139a29a;
            goto LAB_01399c08;
          }
        }
        (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,0xf,&local_21);
        *local_20 = *param_7;
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,0,&local_21);
        *(undefined1 *)((longlong)local_20 + 0x2e) = 1;
        goto LAB_0139a29a;
      }
      if (uVar3 == 0xe2) {
LAB_013993bd:
        (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        if (1 < local_8a) {
          uVar1 = param_6[2];
          if (uVar1 == 0) {
            FUN_01397660(param_1,L"CQX36A");
          }
          else if (uVar1 == 1) {
            FUN_01397660(param_1,L"CQX35A");
          }
          else if (uVar1 == 2) {
            FUN_01397660(param_1,L"CQX37A");
          }
        }
        goto LAB_0139a29a;
      }
      if (uVar3 < 0xdf) {
        if (uVar3 == 0xde) {
LAB_01399897:
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,1,1,&local_21);
          *local_20 = *param_7;
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,1,2,&local_21);
          *local_20 = param_7[1];
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,1,3,&local_21);
          *local_20 = param_7[2];
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *(char *)local_20 = (char)param_6[1];
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,1,0,&local_21);
          *(undefined1 *)((longlong)local_20 + 0x2e) = 1;
          goto LAB_0139a29a;
        }
        if (uVar3 == 0xd9) {
LAB_01398a58:
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
          *(undefined1 *)local_20 = 4;
          FUN_00409620((undefined1 *)((longlong)local_20 + 1),
                       (ulonglong)(byte)PTR_DAT_02001408[3] << 3);
          *(ushort *)((longlong)local_20 + 0x11) =
               (ushort)(byte)PTR_DAT_02001408[(ulonglong)*(byte *)local_20 - 1] * 8;
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,2,1,&local_21);
          *local_20 = *param_7;
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,2,2,&local_21);
          *local_20 = param_7[1];
          local_a8 = &local_22;
          local_a0 = &local_23;
          local_20 = (double *)FUN_01cfde70(param_1,2,3,&local_21);
          *local_20 = param_7[2] - 90.0;
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_00b8fd60(&local_50,param_7[1],*PTR_DAT_02005310,0);
          FUN_00416ad0(&local_50,&DAT_0139a330);
          FUN_013977f0(auStack_c8,local_50);
          goto LAB_0139a29a;
        }
        if (uVar3 != 0xdb) {
          if (uVar3 == 0xdc) goto LAB_01398f80;
          if (uVar3 != 0xdd) goto LAB_0139a29a;
          goto LAB_01399494;
        }
        goto LAB_01399067;
      }
      if (uVar3 == 0xdf) {
LAB_0139861f:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        *(undefined2 *)(param_1 + 10) = 0xffe1;
        FUN_017bf050(param_1,param_2,&DAT_0139a320);
        goto LAB_0139a29a;
      }
      if (uVar3 != 0xe0) {
        if (uVar3 != 0xe1) goto LAB_0139a29a;
LAB_0139899e:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        *(undefined2 *)(param_1 + 10) = 0xffe1;
        goto LAB_0139a29a;
      }
    }
LAB_013985a1:
    if (param_6[2] < 0x10) {
      bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
    }
    else {
      bVar6 = false;
    }
    *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
    (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
    *(char *)local_20 = (char)param_6[1];
    *(undefined2 *)(param_1 + 10) = 0xffe1;
    FUN_017bf050(param_1,param_2,&DAT_0139a320);
    goto LAB_0139a29a;
  }
  if (uVar3 < 0x2c) {
    if (uVar3 == 0x2b) {
LAB_01399067:
      if (param_6[2] < 0x10) {
        bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
      }
      else {
        bVar6 = false;
      }
      *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
      *local_20 = *param_7;
      (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
      *(undefined1 *)(local_20 + 1) = 0;
      *local_20 = 1000000000.0;
      (**(code **)(*param_1 + 0x2d0))(param_1,9,&local_20);
      if ((ushort)*(byte *)local_20 != param_6[1]) {
        *(char *)local_20 = (char)param_6[1];
        *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
      }
      local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
      FUN_00b8fd60(&local_68,*param_7,*PTR_DAT_02005310,0);
      FUN_013977f0(auStack_c8,local_68);
      goto LAB_0139a29a;
    }
    if (uVar3 < 0xd) {
      if (uVar3 == 0xc) goto LAB_013988ae;
      if (6 < uVar3) {
        if (uVar3 == 7) goto LAB_0139861f;
        if (uVar3 != 8) {
          if (uVar3 == 10) goto LAB_013986c6;
          if (uVar3 != 0xb) goto LAB_0139a29a;
          goto LAB_0139877e;
        }
LAB_01398149:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_38,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_38);
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        if (((ushort)*(byte *)local_20 != param_6[1]) &&
           (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        goto LAB_0139a29a;
      }
      if (uVar3 == 6) goto LAB_013985a1;
      if (uVar3 == 1) goto LAB_01397f63;
      if (uVar3 == 2) {
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_30,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_30);
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        if (((ushort)*(byte *)local_20 != param_6[1]) &&
           (*(char *)local_20 = (char)param_6[1], param_6[1] < 10)) {
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        *(undefined2 *)(param_1 + 10) = 0xffe1;
        goto LAB_0139a29a;
      }
      if (uVar3 != 3) {
        if (uVar3 != 5) goto LAB_0139a29a;
        goto LAB_0139840d;
      }
    }
    else {
      if (0x1c < uVar3) {
        if (uVar3 != 0x1d) {
          if (uVar3 == 0x27) {
            if (param_6[2] < 0x10) {
              bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
            }
            else {
              bVar6 = false;
            }
            *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
            (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
            *local_20 = *param_7;
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
            *(char *)local_20 = (char)param_6[3];
            (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
            *(char *)local_20 = (char)param_6[4];
            (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
            *(char *)local_20 = (char)param_6[1];
            uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            FUN_01d04aa0(param_1,uVar4);
            goto LAB_0139a29a;
          }
          if (uVar3 != 0x2a) goto LAB_0139a29a;
LAB_01398f80:
          if (param_6[2] < 0x10) {
            bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
          }
          else {
            bVar6 = false;
          }
          *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
          *local_20 = *param_7;
          (**(code **)(*param_1 + 0x2d0))(param_1,9,&local_20);
          if ((ushort)*(byte *)local_20 != param_6[1]) {
            *(char *)local_20 = (char)param_6[1];
            *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
          }
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_00b8fd60(&local_60,*param_7,*PTR_DAT_02005310,0);
          FUN_013977f0(auStack_c8,local_60);
          goto LAB_0139a29a;
        }
LAB_01398d0f:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x802U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        FUN_01397640(*local_20,param_7[4]);
        *local_20 = param_7[4];
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        *local_20 = param_7[3];
        (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_20);
        *local_20 = param_7[2];
        (**(code **)(*param_1 + 0x2d0))(param_1,5,&local_20);
        *(char *)local_20 = (char)param_6[1];
        FUN_013977f0(auStack_c8,0);
        *(undefined2 *)(param_1 + 10) = 0xffe9;
        goto LAB_0139a29a;
      }
      if (uVar3 == 0x1c) {
        *(undefined2 *)(param_1 + 10) = 0xffef;
        goto LAB_0139a29a;
      }
      if (uVar3 != 0xf) {
        if (uVar3 == 0x14) goto LAB_0139899e;
        if (uVar3 == 0x15) goto LAB_01398a58;
        if (1 < uVar3 - 0x1a) goto LAB_0139a29a;
        goto LAB_01398c24;
      }
    }
LAB_01398279:
    (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
    if (((uint)*(byte *)local_20 != (uint)((ulonglong)*param_6 % 2)) &&
       (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) < 8 &&
        (1 << (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) & 0x1f) & 0x12U) != 0)) {
      *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0));
      FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0);
    }
    *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
    if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
      *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
    }
    (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
    *(undefined1 *)(local_20 + 1) = 0;
    *local_20 = 1e+30;
    (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
    *local_20 = 0.001;
    (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
    *(char *)local_20 = (char)param_6[1];
    uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_01d04aa0(param_1,uVar4);
  }
  else {
    if (uVar3 < 0x47) {
      if (uVar3 == 0x46) goto LAB_01398279;
      if (uVar3 < 0x38) {
        if (uVar3 != 0x37) {
          if (uVar3 - 0x2c < 2) {
LAB_01397f63:
            if (param_6[2] < 0x10) {
              bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x822U) != 0;
            }
            else {
              bVar6 = false;
            }
            *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
            (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
            *local_20 = *param_7;
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
            *local_20 = param_7[1];
            (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
            *(char *)local_20 = (char)param_6[1];
            goto LAB_0139a29a;
          }
          if (uVar3 == 0x2e) goto LAB_01399185;
          if (uVar3 - 0x31 < 4) goto LAB_013993bd;
          if (uVar3 - 0x31 != 4) goto LAB_0139a29a;
        }
LAB_013994f3:
        (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_20);
        if ((ushort)*(byte *)local_20 != param_6[1]) {
          *(char *)local_20 = (char)param_6[1];
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,0xf,&local_21);
        *local_20 = *param_7;
        local_a8 = &local_22;
        local_a0 = &local_23;
        local_20 = (double *)FUN_01cfde70(param_1,1,0,&local_21);
        *(undefined1 *)((longlong)local_20 + 0x2e) = 1;
        goto LAB_0139a29a;
      }
      if (uVar3 - 0x39 < 4) {
LAB_01398c24:
        if (param_6[2] < 0x10) {
          bVar6 = ((int)CONCAT62(uVar5,1) << ((byte)param_6[2] & 0x1f) & 0x822U) != 0;
        }
        else {
          bVar6 = false;
        }
        *(bool *)((longlong)param_1 + 0x3b9) = bVar6;
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        *local_20 = *param_7;
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *local_20 = param_7[1];
        (**(code **)(*param_1 + 0x2d0))(param_1,8,&local_20);
        *(char *)local_20 = (char)param_6[1];
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_00b8fd60(&local_58,*param_7,*PTR_DAT_02005310,0);
        FUN_013977f0(auStack_c8,local_58);
        goto LAB_0139a29a;
      }
      if (uVar3 - 0x3d < 2) goto LAB_01398149;
      uVar3 = uVar3 - 0x3f;
joined_r0x01397cf9:
      if (5 < uVar3) goto LAB_0139a29a;
    }
    else {
      if (0x51 < uVar3) {
        if (uVar3 - 0x52 < 4) {
LAB_01399494:
          (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_20);
          if ((ushort)*(byte *)local_20 != param_6[1]) {
            *(char *)local_20 = (char)param_6[1];
            *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
          }
          goto LAB_0139a29a;
        }
        if ((uVar3 == 0x56) || (uVar3 == 0x58)) goto LAB_013994f3;
        uVar3 = uVar3 - 99;
        goto joined_r0x01397cf9;
      }
      if (uVar3 - 0x47 < 2) {
LAB_0139840d:
        (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_20);
        if (((uint)*(byte *)local_20 != (uint)((ulonglong)*param_6 % 2)) &&
           (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) < 8 &&
            (1 << (*(byte *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) & 0x1f) & 0x12U) != 0)) {
          *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
          FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0));
          FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0);
        }
        *(char *)local_20 = (char)((ulonglong)*param_6 % 2);
        if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f3) = 1;
        }
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
        *(undefined1 *)(local_20 + 1) = 0;
        *local_20 = 1e+30;
        (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
        *local_20 = 0.001;
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
        *(char *)local_20 = (char)param_6[1];
        uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        FUN_01d04aa0(param_1,uVar4);
        goto LAB_0139a29a;
      }
      if (5 < uVar3 - 0x49) {
        if (uVar3 == 0x50) goto LAB_01398f80;
        if (uVar3 != 0x51) goto LAB_0139a29a;
        goto LAB_01399067;
      }
    }
    (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_20);
    *(undefined1 *)local_20 = 2;
    (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_20);
    *(undefined1 *)local_20 = 2;
    (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
    *(undefined1 *)local_20 = 2;
  }
LAB_0139a29a:
  uVar4 = FUN_019a4600();
  FUN_019af250(uVar4);
  uVar4 = FUN_019a4600();
  FUN_019af200(uVar4,param_1);
  FUN_00414560(&local_88,0xc);
  return;
}

