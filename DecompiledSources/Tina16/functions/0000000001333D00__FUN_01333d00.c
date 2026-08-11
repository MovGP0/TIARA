/* Ghidra address: 01333d00 */
/* Ghidra symbol: FUN_01333d00 */


longlong FUN_01333d00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  short sVar5;
  longlong unaff_RSI;
  int iVar6;
  short sVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_d8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70 [9];
  
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x50);
  FUN_01332120(param_1,*(undefined8 *)(param_1 + 0x60),0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x66) = 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 1;
  local_70[0] = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_98 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_90 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_80 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_a0 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_a8 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_78 = 0;
  local_88 = 0;
  local_b0 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
  FUN_0132e510(local_b0);
  local_b8 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
  FUN_0132e440(local_b8);
  local_c0 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
  uVar4 = FUN_01b077e0(*(undefined8 *)(param_1 + 0x148));
  *(undefined8 *)(param_1 + 8) = uVar4;
  FUN_017c5220(param_1 + 0x10,*(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x31c));
  *(undefined2 *)(param_1 + 0x18) = 0;
  bVar2 = false;
  sVar7 = *(short *)(param_1 + 0x28);
  sVar5 = 0;
  do {
    dVar8 = (double)FUN_0132daf0(param_2,sVar5);
    dVar9 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd0),sVar5);
    if (dVar9 <= dVar8) {
LAB_01333f0d:
      local_d8 = 0;
      bVar2 = true;
    }
    else {
      dVar8 = (double)FUN_0132daf0(param_2,sVar5);
      dVar9 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd8),sVar5);
      if (dVar8 <= dVar9) goto LAB_01333f0d;
    }
    sVar5 = sVar5 + 1;
    sVar7 = sVar7 + -1;
    if (sVar7 == 0) {
      if (!bVar2) {
        FUN_0132d960(local_70[0],param_2);
        *(undefined1 *)(param_1 + 0x121) = *(undefined1 *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x120) != '\0') {
          unaff_RSI = FUN_013333e0(param_1,local_70[0]);
          FUN_01332800(param_1);
          dVar8 = (double)FUN_013324a0(param_1,unaff_RSI,local_70[0]);
          FUN_0132e400(&local_b0);
          FUN_01332860(param_1);
          local_b0 = FUN_01333ad0(param_1,local_70[0],unaff_RSI);
          iVar6 = 1;
          while ((((*(double *)(param_1 + 0x60) <= dVar8 || (*(ushort *)(param_1 + 0x18) < 10)) &&
                  ((int)(uint)*(ushort *)(param_1 + 0x18) < *(int *)(param_1 + 0x68))) &&
                 (*(char *)(*(longlong *)(param_1 + 0x148) + 0x49c) != '\x01'))) {
            if ((double)iVar6 <
                ((double)*(ushort *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x68)) * 10.0) {
              *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) * 2.0;
              iVar6 = iVar6 + 1;
            }
            FUN_0132d960(local_80,local_70[0]);
            if (local_78 != 0) {
              FUN_0132cce0(&local_78);
            }
            local_78 = unaff_RSI;
            local_98 = FUN_0132cf10(local_98,unaff_RSI,local_70[0]);
            FUN_0132cce0(&local_88);
            local_88 = FUN_0132f210(local_b0,local_98,&local_c4);
            if (local_c4 != 0) {
              local_88 = FUN_0132f4b0(&local_88,*(double *)(param_1 + 0x60) * 10.0,
                                      (double)*(ushort *)(param_1 + 0x28),0xc6293e5939a08cea,
                                      0x3ff0000000000000);
            }
            dVar8 = *(double *)(param_1 + 0x70);
            sVar7 = *(short *)(param_1 + 0x28);
            sVar5 = 0;
            do {
              dVar9 = (double)FUN_0132daf0(local_70[0],sVar5);
              dVar10 = (double)FUN_0132daf0(local_88,sVar5);
              dVar11 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd0),sVar5);
              if (dVar11 < dVar9 + dVar8 * dVar10) {
                dVar9 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd0),sVar5);
                dVar10 = (double)FUN_0132daf0(local_70[0],sVar5);
                dVar11 = (double)FUN_0132daf0(local_88,sVar5);
                dVar8 = (double)FUN_00b90650(dVar8,(dVar9 - dVar10) / dVar11);
              }
              dVar9 = (double)FUN_0132daf0(local_70[0],sVar5);
              dVar10 = (double)FUN_0132daf0(local_88,sVar5);
              dVar11 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd8),sVar5);
              if (dVar9 + dVar8 * dVar10 < dVar11) {
                dVar9 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0xd8),sVar5);
                dVar10 = (double)FUN_0132daf0(local_70[0],sVar5);
                dVar11 = (double)FUN_0132daf0(local_88,sVar5);
                dVar8 = (double)FUN_00b90650(dVar8,(dVar9 - dVar10) / dVar11);
              }
              cVar3 = FUN_01332da0(param_1);
              if (cVar3 == '\x01') {
                FUN_0132daf0(local_88,sVar5);
                dVar9 = (double)FUN_0040c850();
                FUN_0132daf0(local_70[0],sVar5);
                dVar10 = (double)FUN_0040c850();
                if (*(double *)(param_1 + 0xf8) * dVar10 + *(double *)(param_1 + 0x100) <
                    dVar8 * dVar9) {
                  FUN_0132daf0(local_70[0],sVar5);
                  dVar9 = (double)FUN_0040c850();
                  FUN_0132daf0(local_88,sVar5);
                  dVar10 = (double)FUN_0040c850();
                  dVar8 = (double)FUN_00b90650(dVar8,(*(double *)(param_1 + 0xf8) * dVar9 +
                                                     *(double *)(param_1 + 0x100)) / dVar10);
                }
              }
              else {
                FUN_0132daf0(local_88,sVar5);
                dVar9 = (double)FUN_0040c850();
                FUN_0132daf0(local_70[0],sVar5);
                dVar10 = (double)FUN_0040c850();
                if (*(double *)(param_1 + 0xf8) * dVar10 + *(double *)(param_1 + 0x108) <
                    dVar8 * dVar9) {
                  FUN_0132daf0(local_70[0],sVar5);
                  dVar9 = (double)FUN_0040c850();
                  FUN_0132daf0(local_88,sVar5);
                  dVar10 = (double)FUN_0040c850();
                  dVar8 = (double)FUN_00b90650(dVar8,(*(double *)(param_1 + 0xf8) * dVar9 +
                                                     *(double *)(param_1 + 0x108)) / dVar10);
                }
              }
              sVar5 = sVar5 + 1;
              sVar7 = sVar7 + -1;
            } while (sVar7 != 0);
            if (dVar8 <= 0.0) {
              return local_d8;
            }
            local_88 = FUN_0132d7b0(local_88,local_88,dVar8);
            local_70[0] = FUN_0132cd70(local_70[0],local_80,local_88);
            FUN_01332860(param_1);
            unaff_RSI = FUN_013333e0(param_1,local_70[0]);
            FUN_01332800(param_1);
            dVar8 = (double)FUN_013324a0(param_1,unaff_RSI,local_70[0]);
            if (*(double *)(param_1 + 0x60) <= dVar8) {
              if (*(char *)(param_1 + 0x120) == '\x01') {
                FUN_0132e400(&local_b0);
                local_b0 = FUN_01333ad0(param_1,local_70[0],unaff_RSI);
              }
              if (*(char *)(param_1 + 0x120) == '\x02') {
                uVar4 = FUN_0132cf10(local_98,local_70[0],unaff_RSI);
                uVar4 = FUN_0132cf10(local_98,uVar4,local_80);
                local_98 = FUN_0132cd70(local_98,uVar4,local_78);
                local_a0 = FUN_0132f5a0(local_b0,local_88);
                local_90 = FUN_0132cf10(local_90,local_98,local_a0);
                dVar9 = (double)FUN_0132f6f0(local_88,local_88);
                sVar7 = *(short *)(param_1 + 0x28);
                sVar5 = 0;
                do {
                  dVar10 = (double)FUN_0132daf0(local_90,sVar5);
                  local_a0 = FUN_0132d7b0(local_a0,local_88,dVar10 / dVar9);
                  uVar4 = FUN_0132e5a0(&local_a8,local_c0,sVar5);
                  FUN_0132d960(uVar4,local_a0);
                  sVar5 = sVar5 + 1;
                  sVar7 = sVar7 + -1;
                } while (sVar7 != 0);
                FUN_0132e830(local_b0,local_c0);
              }
            }
          }
          *(double *)(param_1 + 0x88) = dVar8;
        }
        local_d8 = unaff_RSI;
        if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x49c) != '\x01') {
          *(undefined1 *)(param_1 + 0x121) = 0;
          local_d8 = FUN_01333680(param_1,local_70[0],0);
          if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x49c) != '\x01') {
            FUN_013328c0(param_1);
          }
        }
      }
      FUN_0132cce0(local_70);
      FUN_0132cce0(&local_80);
      FUN_0132cce0(&local_98);
      FUN_0132cce0(&local_88);
      FUN_0132cce0(&local_90);
      FUN_0132cce0(&local_a0);
      FUN_0132cce0(&local_a8);
      FUN_0132e400(&local_b0);
      FUN_0132e400(&local_b8);
      FUN_0132e400(&local_c0);
      FUN_017c52d0(param_1 + 8);
      FUN_017c52d0(param_1 + 0x10);
      lVar1 = *(longlong *)(param_1 + 0x140);
      *(undefined1 *)(lVar1 + 0x66) = 0;
      FUN_01330ba0(lVar1);
      return local_d8;
    }
  } while( true );
}

