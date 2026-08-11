/* Ghidra address: 00b2e900 */
/* Ghidra symbol: FUN_00b2e900 */


void FUN_00b2e900(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  param_2[0x1a] = 0;
  local_78 = param_1;
  local_70 = param_2;
  FUN_004153d0(&local_30,*PTR_DAT_020012a0,0);
  iVar3 = FUN_00415a60(*(undefined8 *)(local_70 + 5),local_30);
  if (iVar3 == 0) {
    *local_70 = 3;
  }
  else {
    FUN_0061d840(&local_38,*(undefined8 *)(local_70 + 5));
    iVar3 = FUN_00b19450(*(undefined8 *)(local_78 + 0x20),local_38);
    if (iVar3 < 0) {
      puVar4 = (undefined8 *)FUN_004095c0(8);
      cVar2 = FUN_00b2e8d0(auStack_98,*(undefined8 *)(local_70 + 5),local_20);
      if (cVar2 == '\0') {
        FUN_004095f0();
        if (**(char **)(local_70 + 5) == '\"') {
          iVar3 = 0;
          if (*(longlong *)(local_70 + 5) != 0) {
            iVar3 = *(int *)(*(longlong *)(local_70 + 5) + -4);
          }
          if (*(char *)(*(longlong *)(local_70 + 5) + -1 + (longlong)iVar3) == '\"') {
            *local_70 = 2;
            *(undefined4 *)(local_70 + 1) = 4;
            goto LAB_00b2ecec;
          }
        }
        puVar5 = (undefined1 *)FUN_004095c0(1);
        FUN_0061d8e0(&local_48,*(undefined8 *)(local_70 + 5));
        FUN_0061d840(&local_40,local_48);
        iVar3 = FUN_00415a60(local_40,"FALSE");
        if (iVar3 != 0) {
          FUN_0061d8e0(&local_58,*(undefined8 *)(local_70 + 5));
          FUN_0061d840(&local_50,local_58);
          iVar3 = FUN_00415a60(local_50,&DAT_00b2ed4c);
          if (iVar3 != 0) {
            FUN_004095f0(puVar5);
            iVar3 = FUN_00415a60(*(undefined8 *)(local_70 + 5),"<MISARG>");
            if (iVar3 == 0) {
              *local_70 = 2;
              *(undefined4 *)(local_70 + 1) = 0xc;
            }
            else {
              FUN_0061d840(&local_28,*(undefined8 *)(local_70 + 5));
              iVar3 = FUN_00b1b100(*(undefined8 *)(local_78 + 0x30),&local_28);
              if (iVar3 < 0) {
                lVar6 = FUN_00418560(0x17,&DAT_00b25e50);
                FUN_00415f40(lVar6,*(undefined8 *)(local_70 + 5));
                cVar2 = FUN_00b2c5d0(*(undefined8 *)(local_78 + 0x38),lVar6);
                if (cVar2 == '\0') {
                  FUN_00418590(lVar6,&DAT_00b25e50);
                  uVar7 = FUN_00b146c0(&PTR_FUN_00b141e0,1,8);
                  FUN_004134c0(uVar7);
                }
                else {
                  *local_70 = 2;
                  *(longlong *)(local_70 + 0x1f) = lVar6;
                  bVar1 = *(byte *)(lVar6 + 8);
                  if (bVar1 < 6) {
                    if (bVar1 == 5) {
                      *(undefined4 *)(local_70 + 1) = 6;
                    }
                    else if (bVar1 == 1) {
                      *(undefined4 *)(local_70 + 1) = 2;
                    }
                    else if (bVar1 == 2) {
                      *(undefined4 *)(local_70 + 1) = 3;
                    }
                    else if (bVar1 == 3) {
                      *(undefined4 *)(local_70 + 1) = 5;
                    }
                    else if (bVar1 == 4) {
                      *(undefined4 *)(local_70 + 1) = 0xd;
                    }
                  }
                  else if (bVar1 == 7) {
                    *(undefined4 *)(local_70 + 1) = 8;
                  }
                  else if (bVar1 == 8) {
                    *(undefined4 *)(local_70 + 1) = 9;
                  }
                  else if (bVar1 == 9) {
                    *(undefined4 *)(local_70 + 1) = 10;
                  }
                  else if (bVar1 == 10) {
                    *(undefined4 *)(local_70 + 1) = 0xb;
                  }
                }
              }
              else {
                *local_70 = 1;
              }
            }
            goto LAB_00b2ecec;
          }
        }
        *local_70 = 2;
        *(undefined4 *)(local_70 + 1) = 7;
        FUN_0061d8e0(&local_68,*(undefined8 *)(local_70 + 5));
        FUN_0061d840(&local_60,local_68);
        iVar3 = FUN_00415a60(local_60,&DAT_00b2ed4c);
        if (iVar3 == 0) {
          *puVar5 = 1;
        }
        else {
          *puVar5 = 0;
        }
        *(undefined1 **)(local_70 + 0x1f) = puVar5;
      }
      else {
        *puVar4 = local_20[0];
        *local_70 = 2;
        *(undefined4 *)(local_70 + 1) = 1;
        *(undefined8 **)(local_70 + 0x1f) = puVar4;
      }
    }
    else {
      *local_70 = 0;
      FUN_00b2e820(local_78,local_70);
    }
  }
LAB_00b2ecec:
  FUN_00414590(&local_68,9);
  return;
}

