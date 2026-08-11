/* Ghidra address: 00694d40 */
/* Ghidra symbol: FUN_00694d40 */


void FUN_00694d40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_148 [4];
  int local_144;
  int local_138;
  int iStack_134;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  *(undefined1 *)(param_1 + 0x4f) = 0;
  local_138 = (int)*(short *)(param_2 + 0x10);
  iStack_134 = (int)*(short *)(param_2 + 0x12);
  iVar5 = local_138;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) + 0xb1) == '\x01') {
    iVar5 = -local_138;
  }
  local_20 = CONCAT44(iStack_134,iVar5);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x40) = local_20;
  FUN_00693a30(*(undefined8 *)(param_1 + 0x70),local_40);
  cVar2 = FUN_00423210(local_40,&local_20);
  if (cVar2 == '\0') {
    if (((*(char *)(*(longlong *)(param_1 + 0x70) + 0x60) != '\x1a') ||
        (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) != '\x02')) ||
       (*(char *)(*(longlong *)(param_1 + 0x70) + 0x62) != '\x06')) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 6;
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
    }
  }
  else {
    cVar2 = FUN_006927d0(*(undefined8 *)(param_1 + 0x70));
    if (cVar2 == '\x01') {
      thunk_FUN_0416f4fc(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68));
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x40) = local_20;
    FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_50);
    cVar2 = FUN_00423210(local_50,&local_20);
    if (cVar2 == '\0') {
      FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_80);
      cVar2 = FUN_00423210(local_80,&local_20);
      if (cVar2 == '\0') {
        FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_b0);
        cVar2 = FUN_00423210(local_b0,&local_20);
        if (cVar2 == '\0') {
          FUN_00693e90(*(undefined8 *)(param_1 + 0x70),local_c0);
          cVar2 = FUN_00423210(local_c0,&local_20);
          if (cVar2 == '\0') {
            FUN_00693ef0(*(undefined8 *)(param_1 + 0x70),local_100);
            cVar2 = FUN_00423210(local_100,&local_20);
            if (cVar2 != '\0') {
              iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x1a1
                                         ,0,0);
              if (iVar5 < 1) {
                iVar6 = 0;
              }
              else {
                FUN_00693830(*(undefined8 *)(param_1 + 0x70),local_110);
                iVar6 = FUN_004230c0(local_110);
                iVar6 = iVar6 / iVar5;
              }
              iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e
                                         ,0,0);
              thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
              thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,
                                 (longlong)(iVar5 + iVar6 + -1),0);
              thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
              FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_120);
              uVar3 = FUN_004230a0(local_120);
              FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_130);
              uVar4 = FUN_004230c0(local_130);
              FUN_004238d0(local_30,0,0,uVar3,uVar4);
              thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_30,0,5)
              ;
              FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
              FUN_00692650(*(undefined8 *)(param_1 + 0x70),4);
            }
          }
          else {
            iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x1a1,0
                                       ,0);
            if (iVar5 < 1) {
              iVar6 = 0;
            }
            else {
              FUN_00693830(*(undefined8 *)(param_1 + 0x70),local_d0);
              iVar6 = FUN_004230c0(local_d0);
              iVar6 = iVar6 / iVar5;
            }
            iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0
                                       ,0);
            iVar5 = (iVar5 - iVar6) + 1;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
            thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,
                               (longlong)iVar5,0);
            thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
            FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_e0);
            uVar3 = FUN_004230a0(local_e0);
            FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_f0);
            uVar4 = FUN_004230c0(local_f0);
            FUN_004238d0(local_30,0,0,uVar3,uVar4);
            thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_30,0,5);
            FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
            FUN_00692650(*(undefined8 *)(param_1 + 0x70),3);
          }
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1c;
          FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_148);
          *(int *)(*(longlong *)(param_1 + 0x70) + 0x50) =
               *(int *)(*(longlong *)(param_1 + 0x70) + 0x44) - local_144;
          FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        }
      }
      else {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8c) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 4;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
        lVar7 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
        thunk_FUN_041b2403(uVar1,0x197,lVar7 + -1,0);
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
        FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_90);
        uVar3 = FUN_004230a0(local_90);
        FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_a0);
        uVar4 = FUN_004230c0(local_a0);
        FUN_004238d0(local_30,0,0,uVar3,uVar4);
        thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_30,0,5);
        FUN_00692650(*(undefined8 *)(param_1 + 0x70),1);
      }
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8d) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 8;
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
      lVar7 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
      thunk_FUN_041b2403(uVar1,0x197,lVar7 + 1,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_60);
      uVar3 = FUN_004230a0(local_60);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_70);
      uVar4 = FUN_004230c0(local_70);
      FUN_004238d0(local_30,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_30,0,5);
      FUN_00692650(*(undefined8 *)(param_1 + 0x70),2);
    }
    *(undefined1 *)(param_1 + 0x4f) = 1;
  }
  uVar3 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0,0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x54) = uVar3;
  return;
}

