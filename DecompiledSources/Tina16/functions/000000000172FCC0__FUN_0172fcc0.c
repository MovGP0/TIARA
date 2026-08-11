/* Ghidra address: 0172fcc0 */
/* Ghidra symbol: FUN_0172fcc0 */


void FUN_0172fcc0(longlong param_1,longlong param_2,undefined2 *param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined1 local_46 [26];
  ushort local_2c;
  byte local_29;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_50 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (*(byte *)(param_2 + 0x33) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x33) & 0x1f)
            & 0x90U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    FUN_0172a910(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x34));
    FUN_0172a920(*(undefined8 *)(param_1 + 0x38),&local_29,1);
    iVar5 = FUN_0172a950(*(undefined8 *)(param_1 + 0x38));
    FUN_0172a910(*(undefined8 *)(param_1 + 0x38),iVar5 + (uint)local_29 * 0x1b);
    FUN_0172a920(*(undefined8 *)(param_1 + 0x38),&local_2c,2);
    bVar1 = false;
    bVar8 = true;
    uVar7 = (uint)local_2c;
    bVar2 = false;
    if (-1 < (int)(uVar7 - 1)) {
      do {
        bVar1 = bVar2;
        FUN_0172a920(*(undefined8 *)(param_1 + 0x38),local_46,0x1a);
        cVar3 = '\0';
        if (*(int *)((longlong)param_3 + 0xa7) < 1) {
          cVar4 = FUN_01d3d620(*param_3);
          if (cVar4 == '\0') {
            cVar4 = FUN_01d42330(*param_3);
            if (cVar4 == '\0') {
              cVar4 = FUN_01d421b0(*param_3);
              if ((((cVar4 != '\0') || (cVar4 = FUN_01d42220(*param_3), cVar4 != '\0')) ||
                  (cVar4 = FUN_01d422d0(*param_3), cVar4 != '\0')) ||
                 (cVar4 = FUN_01d42370(*param_3), cVar4 != '\0')) {
                cVar3 = FUN_01d421b0(*param_3);
                if (cVar3 == '\0') {
                  cVar3 = FUN_01d42220(*param_3);
                  if (cVar3 == '\0') {
                    cVar3 = FUN_01d422d0(*param_3);
                    if (cVar3 == '\0') {
                      uVar6 = 5;
                    }
                    else {
                      uVar6 = 2;
                    }
                  }
                  else {
                    uVar6 = 1;
                  }
                }
                else {
                  uVar6 = 3;
                }
                FUN_004169a0(&local_70,local_46);
                cVar3 = FUN_00ed0220(uVar6,local_70,L"TINA");
              }
            }
            else {
              FUN_004169a0(&local_68,local_46);
              cVar3 = FUN_00ec43f0(local_68,L"TINA");
            }
          }
          else {
            FUN_00415260(local_46,0x14,1,2);
            FUN_004169a0(local_60,local_46);
            cVar3 = FUN_00ec43f0(local_60[0],L"TINA");
          }
        }
        else {
          FUN_0172fbc0(param_1,&local_50,local_res20);
          cVar3 = FUN_00ec43f0(local_50,L"TINA");
        }
        if (cVar3 == '\0') {
          if (bVar8) {
            FUN_0172fbc0(param_1,&local_78,local_res20);
            uVar6 = FUN_0040f200(*(undefined8 *)(param_1 + 0x70),local_78);
            FUN_0040f590(uVar6);
            FUN_00409900();
            FUN_0040f590(*(undefined8 *)(param_1 + 0x70));
            FUN_00409900();
            bVar8 = false;
            bVar1 = true;
          }
          uVar6 = FUN_0040ef50(*(undefined8 *)(param_1 + 0x70),local_46);
          FUN_0040f590(uVar6);
          FUN_00409900();
        }
        uVar7 = uVar7 - 1;
        bVar2 = bVar1;
      } while (uVar7 != 0);
    }
    if (bVar1) {
      FUN_0040f590(*(undefined8 *)(param_1 + 0x70));
      FUN_00409900();
      FUN_0040f590(*(undefined8 *)(param_1 + 0x70));
      FUN_00409900();
    }
  }
  FUN_00414560(&local_78,4);
  FUN_00414480(&local_50);
  FUN_00414480(&local_res20);
  return;
}

