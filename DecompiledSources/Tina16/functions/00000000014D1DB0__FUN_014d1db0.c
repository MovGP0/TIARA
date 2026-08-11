/* Ghidra address: 014d1db0 */
/* Ghidra symbol: FUN_014d1db0 */


void FUN_014d1db0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  undefined8 in_RAX;
  int unaff_R13D;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  ulonglong in_stack_ffffffffffffff40;
  byte local_7a;
  undefined1 local_79;
  double local_78;
  double local_70;
  double local_68;
  double local_60 [7];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                       param_1[0xd],0);
          local_60[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xe],
                                             param_1[0xf],0);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd80(param_2,param_3,dVar5,*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
          }
        }
        else {
          dVar5 = 0.0;
          local_60[0] = *(double *)(param_1 + 0x88);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd10(param_2,param_3,0,local_7a,param_1[2] + '\x01');
          }
        }
      }
      else {
        dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                     param_1[0xd],0);
        local_60[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xe],
                                           param_1[0xf],0);
        if (*(double *)(param_1 + 0x20) != 0.0) {
          dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                       param_1[0xd],0);
          unaff_R13D = FUN_014cfc00(param_2,param_3,dVar5,*(undefined8 *)(param_1 + 0x38),
                                    *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
        }
      }
      if (*(double *)(param_1 + 0x20) == 0.0) {
        dVar8 = *(double *)(param_1 + 0x38);
      }
      else if (unaff_R13D == 0) {
        dVar8 = *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
      }
      else {
        dVar8 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      }
      dVar1 = *(double *)(param_1 + 0x60);
      *(double *)(param_1 + 0x68) =
           dVar1 * (dVar5 - dVar8) + *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x40);
      FUN_00daa090(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x80),
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
                   (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50)) * 0.01,param_1 + 0x68
                   ,param_1 + 0x90,&local_68,&local_79);
      FUN_016e9f80(param_2,param_3,local_79,9);
      *(double *)(param_1 + 0x80) = local_68;
      *(double *)(param_1 + 0x90) = *(double *)(param_1 + 0x90) * dVar1;
      dVar5 = *(double *)(param_1 + 0x58);
      dVar1 = *(double *)(param_1 + 0x40);
      dVar2 = *(double *)(param_1 + 0x60);
      dVar6 = (double)FUN_0040c850(*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30));
      dVar6 = dVar6 * 0.01;
      if (dVar6 < 0.01) {
        dVar6 = 0.01;
      }
      uVar4 = FUN_0040c850(*(double *)(param_1 + 0x48) / dVar6);
      uVar7 = FUN_0040c850(*(double *)(param_1 + 0x50) / dVar6);
      uVar4 = FUN_00b90620(uVar4,uVar7);
      local_70 = 0.0;
      local_78 = 0.0;
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      param_1[0x78] = '\0';
      param_1[0x79] = '\0';
      param_1[0x7a] = '\0';
      param_1[0x7b] = '\0';
      param_1[0x7c] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
      if (local_60[0] <= (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30)) / 2.0) {
        FUN_00daa3d0(local_60[0],*(undefined8 *)(param_1 + 0x88),
                     *(double *)(param_1 + 0x30) + dVar6 * 0.9,0,dVar6,uVar4,0,param_1 + 0x78,
                     &local_78,local_60,&local_79);
      }
      else {
        FUN_00daa3d0(local_60[0],*(undefined8 *)(param_1 + 0x88),
                     *(double *)(param_1 + 0x28) - dVar6 * 0.9,0,dVar6,0,uVar4,param_1 + 0x70,
                     &local_70,local_60,&local_79);
      }
      *(double *)(param_1 + 0x88) = local_60[0];
      FUN_016e9f80(param_2,param_3,local_79,10);
      *(double *)(param_1 + 0x98) = local_70 + local_78;
      *(double *)(param_1 + 0x70) = *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x78);
      FUN_016ed320(param_2,*param_1 + '\x01',
                   ((*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x70)) -
                   *(double *)(param_1 + 0x90) * ((local_68 - dVar5 * dVar1) / dVar2 + dVar8)) +
                   *(double *)(param_1 + 0x98) * local_60[0],
                   *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x98),0);
      FUN_016ed220(param_2,*param_1 + '\x02',*(undefined8 *)(param_1 + 0x90),0);
    }
    else if (*(double *)(param_1 + 0x20) != 0.0) {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],param_1[0xd],0);
      FUN_014cfb80(param_2,param_3,uVar4,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x20),in_stack_ffffffffffffff40 & 0xffffffffffffff00,
                   &local_7a,param_1[2] + '\x01');
    }
  }
  return;
}

