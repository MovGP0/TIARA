/* Ghidra address: 01182570 */
/* Ghidra symbol: FUN_01182570 */


undefined4 FUN_01182570(longlong *param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_res10;
  longlong local_res18;
  undefined4 local_704;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0 [2];
  undefined1 local_690 [1608];
  short *local_48;
  undefined8 local_40 [2];
  
  local_700 = 0;
  local_6f8 = 0;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = 0;
  local_6b0 = 0;
  local_6a8 = 0;
  local_6a0[0] = 0;
  local_40[0] = 0;
  local_48 = (short *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (local_res18 == 0) {
    local_704 = 0;
  }
  else {
    FUN_00414b50(local_40,local_res18);
    FUN_0040cf10(local_690,local_40[0],0);
    FUN_00409900();
    FUN_0040c9e0(local_690);
    FUN_00409900();
    FUN_0040e200(local_690,&local_48);
    FUN_0040e480(local_690);
    FUN_00409900();
    if (*local_48 == 0x41) {
      if (local_48[1] == 0x44) {
        if (local_48[2] == 0x46) {
          if (local_48[3] == 0x44) {
            if (local_48[4] == 99) {
              *(short *)(*param_1 + 0x1fa8) = local_48[5];
              *(short *)(*param_1 + 0x1fa6) = local_48[6];
              *(short *)(*param_1 + 0x1fa4) = local_48[7];
              FUN_0040e200(local_690,&local_res10);
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x7b0),local_res10);
              iVar4 = FUN_0040dbe0(local_690);
              FUN_0040e480(local_690);
              FUN_00409900();
              if (iVar4 == 1) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0),1);
              }
              else {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8),1);
              }
              uVar5 = FUN_0040dbe0(local_690);
              *(undefined4 *)(*param_1 + 0x1fa0) = uVar5;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_020040b8 + 0xb0) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x800),
                           *(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_020040b8 + 0xb8) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x808),
                           *(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_020040b8 + 0xc0) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x810),
                           *(undefined8 *)(PTR_DAT_020040b8 + 0xc0));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_02001d30 + 0xa8) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x750),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xa8));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_02001d30 + 0xb0) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x748),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xb0));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(PTR_DAT_02001d30 + 0xb8) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x758),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xb8));
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x750),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xa8));
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x748),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xb0));
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x758),
                           *(undefined8 *)(PTR_DAT_02001d30 + 0xb8));
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x40) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)*param_1 = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 8) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x10) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x18) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x20) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x28) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x30) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x38) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              uVar9 = FUN_0040e370(local_690);
              *(undefined8 *)(*param_1 + 0x48) = uVar9;
              FUN_0040e480(local_690);
              FUN_00409900();
              sVar1 = *(short *)(*param_1 + 0x1fa4);
              if (sVar1 == 0x48) {
                *(undefined8 *)(PTR_DAT_020040b8 + 0x28) = *(undefined8 *)(*param_1 + 0x20);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x20) = *(undefined8 *)(*param_1 + 0x30);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x38) = *(undefined8 *)*param_1;
                *(undefined8 *)(PTR_DAT_020040b8 + 0x30) = *(undefined8 *)(*param_1 + 0x10);
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788),1);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x788);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6a8,1);
                FUN_0064de00(lVar2,local_6a8);
              }
              else if (sVar1 == 0x4c) {
                *(undefined8 *)PTR_DAT_020040b8 = *(undefined8 *)(*param_1 + 0x20);
                *(undefined8 *)(PTR_DAT_020040b8 + 8) = *(undefined8 *)(*param_1 + 0x30);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x10) = *(undefined8 *)*param_1;
                *(undefined8 *)(PTR_DAT_020040b8 + 0x18) = *(undefined8 *)(*param_1 + 0x10);
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788),0);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x788);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,local_6a0,0);
                FUN_0064de00(lVar2,local_6a0[0]);
              }
              else if (sVar1 == 0x50) {
                *(undefined8 *)(PTR_DAT_020040b8 + 0x48) = *(undefined8 *)(*param_1 + 0x20);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x50) = *(undefined8 *)(*param_1 + 0x28);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x40) = *(undefined8 *)(*param_1 + 0x30);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x58) = *(undefined8 *)(*param_1 + 0x38);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x68) = *(undefined8 *)*param_1;
                *(undefined8 *)(PTR_DAT_020040b8 + 0x60) = *(undefined8 *)(*param_1 + 0x10);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x70) = *(undefined8 *)(*param_1 + 0x18);
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788),2);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x788);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6b0,2);
                FUN_0064de00(lVar2,local_6b0);
              }
              else if (sVar1 == 0x53) {
                *(undefined8 *)(PTR_DAT_020040b8 + 0x78) = *(undefined8 *)(*param_1 + 0x20);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x90) = *(undefined8 *)(*param_1 + 0x28);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x80) = *(undefined8 *)(*param_1 + 0x30);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x88) = *(undefined8 *)(*param_1 + 0x38);
                *(undefined8 *)(PTR_DAT_020040b8 + 0x98) = *(undefined8 *)*param_1;
                *(undefined8 *)(PTR_DAT_020040b8 + 0xa8) = *(undefined8 *)(*param_1 + 8);
                *(undefined8 *)(PTR_DAT_020040b8 + 0xa0) = *(undefined8 *)(*param_1 + 0x10);
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x788),3);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x788);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6b8,3);
                FUN_0064de00(lVar2,local_6b8);
              }
              *(double *)(*param_1 + 0x20) = *(double *)(*param_1 + 0x20) * 6.2831853071796;
              *(double *)(*param_1 + 0x28) = *(double *)(*param_1 + 0x28) * 6.2831853071796;
              *(double *)(*param_1 + 0x30) = *(double *)(*param_1 + 0x30) * 6.2831853071796;
              *(double *)(*param_1 + 0x38) = *(double *)(*param_1 + 0x38) * 6.2831853071796;
              if ((*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x41) ||
                 (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x49)) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x278))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798));
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Butterworth");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Chebyshev");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Elliptic");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Inverse Chebyshev");
              }
              else {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x278))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798));
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Rectang");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Bartlett");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Blackman");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Hamming");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Hanning");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Kaiser");
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x78))(plVar3,L"Parks-McCl");
              }
              uVar6 = (ulonglong)*(ushort *)(*param_1 + 0x1fa6);
              if (uVar6 < 0x44) {
                if (uVar6 == 0x43) {
                  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x268))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798),1);
                  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798);
                  plVar3 = *(longlong **)(lVar2 + 0x4f0);
                  (**(code **)(*plVar3 + 0x18))(plVar3,&local_6c8,1);
                  FUN_0064de00(lVar2,local_6c8);
                }
                else if (uVar6 - 0x30 < 7) {
                  FUN_00416780(&local_6e0,*(undefined2 *)(*param_1 + 0x1fa6));
                  uVar5 = FUN_0043fc00(local_6e0);
                  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x268))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798),uVar5);
                  plVar3 = *(longlong **)
                            (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                  (**(code **)(*plVar3 + 0x18))(plVar3,&local_6e8,uVar5);
                  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x798),local_6e8);
                }
                else if (uVar6 - 0x30 == 0x12) {
                  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x268))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798),0);
                  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798);
                  plVar3 = *(longlong **)(lVar2 + 0x4f0);
                  (**(code **)(*plVar3 + 0x18))(plVar3,&local_6c0,0);
                  FUN_0064de00(lVar2,local_6c0);
                }
              }
              else if (uVar6 == 0x45) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798),2);
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6d0,2);
                FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x798),local_6d0);
              }
              else if (uVar6 == 0x49) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x798),3);
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x798) + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6d8,3);
                FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x798),local_6d8);
              }
              sVar1 = *(short *)(*param_1 + 0x1fa8);
              if (sVar1 == 0x46) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778),1);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x778);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6f0,1);
                FUN_0064de00(lVar2,local_6f0);
                iVar8 = *(int *)(*param_1 + 0x1fa0) / 4;
                iVar4 = 0;
                if (-1 < iVar8 + -1) {
                  do {
                    iVar7 = 0;
                    do {
                      uVar9 = FUN_0040e370(local_690);
                      *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar4 * 4 + iVar7) * 8) = uVar9;
                      FUN_0040e480(local_690);
                      FUN_00409900();
                      iVar7 = iVar7 + 1;
                    } while (iVar7 != 4);
                    iVar4 = iVar4 + 1;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
                iVar4 = *(int *)(*param_1 + 0x1fa0);
                iVar8 = iVar4 % 4;
                if ((iVar8 != 0) && (iVar7 = 0, -1 < iVar8 + -1)) {
                  do {
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)((iVar4 / 4 + -1) * 4 + iVar7) * 8)
                         = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    iVar7 = iVar7 + 1;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
              else if (sVar1 == 0x41) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778),0);
                lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x778);
                plVar3 = *(longlong **)(lVar2 + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_6f8,0);
                FUN_0064de00(lVar2,local_6f8);
                iVar8 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
                iVar4 = 0;
                if (-1 < iVar8 + -1) {
                  do {
                    iVar7 = iVar4 * 3;
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar7 * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar7 + 1) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar7 + 2) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)iVar7 * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)(iVar7 + 1) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)(iVar7 + 2) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    iVar4 = iVar4 + 1;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
              else if (sVar1 == 0x49) {
                (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778) + 0x268))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x778),2);
                plVar3 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001890 + 0x778) + 0x4f0);
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_700,2);
                FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x778),local_700);
                iVar8 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
                iVar4 = 0;
                if (-1 < iVar8 + -1) {
                  do {
                    iVar7 = iVar4 * 3;
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar7 * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar7 + 1) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar7 + 2) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)iVar7 * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)(iVar7 + 1) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    uVar9 = FUN_0040e370(local_690);
                    *(undefined8 *)(*param_1 + 0xff8 + (longlong)(iVar7 + 2) * 8) = uVar9;
                    FUN_0040e480(local_690);
                    FUN_00409900();
                    iVar4 = iVar4 + 1;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
              FUN_01229220(*(undefined8 *)PTR_DAT_02001890);
              FUN_0040d150(local_690);
              FUN_00409900();
              local_704 = 0;
            }
            else {
              local_704 = 4;
            }
          }
          else {
            local_704 = 4;
          }
        }
        else {
          local_704 = 4;
        }
      }
      else {
        local_704 = 4;
      }
    }
    else {
      local_704 = 4;
    }
  }
  FUN_00414560(&local_700,0xd);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_res10,2);
  return local_704;
}

