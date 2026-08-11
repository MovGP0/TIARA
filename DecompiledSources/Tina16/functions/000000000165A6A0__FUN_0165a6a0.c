/* Ghidra address: 0165a6a0 */
/* Ghidra symbol: FUN_0165a6a0 */


undefined8 * FUN_0165a6a0(longlong param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined7 uVar7;
  undefined8 *puVar6;
  bool bVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(char *)((longlong)param_3 + 0x51) != '\0') {
    *param_2 = *(undefined8 *)(param_3 + 0xe);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = *param_3;
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar2 < 4) {
    if (iVar2 == 1) {
      FUN_00c44460(param_2,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
      return param_2;
    }
    if (iVar2 == 2) {
      iVar2 = param_3[0x12];
      if (iVar2 < 0xb) {
        if (iVar2 != 10) {
          if (4 < iVar2) {
            if (iVar2 == 5) {
              uVar4 = FUN_016ed780(*(undefined8 *)(param_1 + 0x68),
                                   *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x89));
              FUN_00c44460(param_2,uVar4,0);
              return param_2;
            }
            if (iVar2 != 6) {
              return param_2;
            }
            if (((char)param_3[0x2c] != '\0') && (param_3[0x21] == 1)) {
              FUN_00c44460(param_2,(*(double *)(param_3 + 10) * 1.3806226e-23) / 1.6021917e-19,0);
              return param_2;
            }
            FUN_00c44460(param_2,((*(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15) *
                                 1.3806226e-23) / 1.6021917e-19,0);
            return param_2;
          }
          if (iVar2 == 4) {
            if ((char)param_3[0x2c] != '\0') {
              FUN_00c44460(param_2,*(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15,0);
              return param_2;
            }
            FUN_00c44460(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x6a0),0);
            return param_2;
          }
          if (iVar2 != 1) {
            if (iVar2 == 2) {
              FUN_00c44460(param_2,0,0x3ff0000000000000);
              return param_2;
            }
            if (iVar2 != 3) {
              return param_2;
            }
            FUN_016ed8a0(param_2,*(undefined8 *)(param_1 + 0x68),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x89));
            return param_2;
          }
          FUN_00c44460(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x430),0);
          return param_2;
        }
      }
      else if (iVar2 < 0xe) {
        if (iVar2 == 0xd) {
          if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\f') {
            FUN_00c44460(param_2,0x3ff0000000000000,0);
            return param_2;
          }
          FUN_00c44460(param_2,0,0);
          return param_2;
        }
        if (iVar2 == 0xb) {
          FUN_00c44460(param_2,0x3ff0000000000000,0);
          return param_2;
        }
        if (iVar2 != 0xc) {
          return param_2;
        }
      }
      else if (iVar2 != 0xe) {
        if (1 < iVar2 - 0xfU) {
          return param_2;
        }
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x89);
        if ((cVar1 != '\a') && (cVar1 != '\x05')) {
          FUN_00c44460(param_2,0,0);
          return param_2;
        }
        FUN_00c44460(param_2,0x3ff0000000000000,0);
        return param_2;
      }
      FUN_00c44460(param_2,0,0);
      return param_2;
    }
    if (iVar2 == 3) {
      if (param_3[0x12] + -1 < 0) {
        FUN_01b05000(L"Internal error: function EvaluateCplxInt",0);
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_00c44460(param_2,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x78) + (longlong)(param_3[0x12] + -1) * 8),0
                    );
        return param_2;
      }
      puVar6 = (undefined8 *)(PTR_DAT_020025e0 + 8);
      *param_2 = *(undefined8 *)PTR_DAT_020025e0;
      param_2[1] = *puVar6;
      return param_2;
    }
  }
  else {
    if (iVar2 - 4U < 5) {
      FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
      FUN_0165a6a0(param_1,&local_48,*(undefined8 *)(param_3 + 4));
      local_78 = local_38;
      uStack_70 = uStack_30;
      local_68 = local_48;
      uStack_60 = uStack_40;
      (**(code **)(PTR_PTR_02005450 + (longlong)*param_3 * 8 + -0x20))(param_2,&local_78,1);
      return param_2;
    }
    if (iVar2 == 9) {
      *(int *)PTR_DAT_020021c0 = param_3[0x13];
      uVar3 = param_3[0x13];
      if (uVar3 < 8) {
        uVar5 = (int)CONCAT71(uVar7,1) << ((byte)uVar3 & 0x1f);
        bVar8 = (uVar5 & 0xc0) != 0;
        puVar6 = (undefined8 *)(ulonglong)uVar5;
      }
      else {
        bVar8 = false;
        puVar6 = param_2;
      }
      if (bVar8) {
        FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
        FUN_0165a6a0(param_1,&local_48,*(undefined8 *)(param_3 + 4));
        local_78 = local_38;
        uStack_70 = uStack_30;
        local_68 = local_48;
        uStack_60 = uStack_40;
        (**(code **)(PTR_PTR_02002420 + (longlong)param_3[0x13] * 8 + -8))(param_2,&local_78,1);
        return param_2;
      }
      if (uVar3 - 0x30 < 8) {
        uVar5 = (int)CONCAT71((int7)((ulonglong)puVar6 >> 8),1) << ((byte)(uVar3 - 0x30) & 0x1f);
        puVar6 = (undefined8 *)(ulonglong)uVar5;
        bVar8 = (uVar5 & 0x30) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
        local_80 = local_38;
        FUN_016aabe0(param_2,&local_80,0,param_3,*(undefined8 *)(param_1 + 0x78),8);
        return param_2;
      }
      if (uVar3 - 0x30 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)puVar6 >> 8),1) << ((byte)(uVar3 - 0x30) & 0x1f) &
                0xc0U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
        local_80 = local_38;
        FUN_016aabe0(param_2,&local_80,0,*(undefined8 *)(param_3 + 4),
                     *(undefined8 *)(param_1 + 0x78),8);
        return param_2;
      }
      FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
      local_90 = local_38;
      uStack_88 = uStack_30;
      (**(code **)(PTR_PTR_02002420 + (longlong)param_3[0x13] * 8 + -8))(param_2,&local_90,0);
      return param_2;
    }
    if (iVar2 == 10) {
      FUN_0165a6a0(param_1,&local_38,*(undefined8 *)(param_3 + 2));
      *param_2 = local_38;
      param_2[1] = uStack_30;
      return param_2;
    }
    if (iVar2 == 0x15) {
      FUN_00c44460(param_2,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
      return param_2;
    }
  }
  uVar4 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71(uVar7,1),L"Unknown case: EvaluateCplxInt");
  FUN_004134c0(uVar4);
  return param_2;
}

