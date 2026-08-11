/* Ghidra address: 01c01390 */
/* Ghidra symbol: FUN_01c01390 */


undefined8 FUN_01c01390(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int *local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  local_68 = 0;
  local_58 = param_2;
  uVar6 = FUN_00656230(param_1,param_2,1,0);
  cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01bf4f40);
  local_50 = uVar6;
  if (cVar2 == '\0') {
    local_50 = 0;
    local_44 = 0x7fffffff;
    iVar3 = FUN_01c012e0(auStack_88,local_58);
    iVar4 = (**(code **)(*param_1 + 0x2e8))();
    local_48 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar6 = FUN_01c019a0(param_1);
        lVar7 = FUN_01bfb960(uVar6,local_48);
        if (*(longlong *)(lVar7 + 0x80) != 0) {
          uVar6 = FUN_01c019a0(param_1);
          lVar7 = FUN_01bfb960(uVar6,local_48);
          if (*(char *)(*(longlong *)(lVar7 + 0x80) + 0xa9) != '\0') {
            uVar6 = FUN_01c019a0(param_1);
            lVar7 = FUN_01bfb960(uVar6,local_48);
            FUN_0064d000(*(undefined8 *)(lVar7 + 0x80),local_38);
            iVar5 = FUN_01c012e0(auStack_88,local_38);
            if (iVar5 == iVar3) {
              iVar5 = *local_58;
              iVar1 = local_58[1];
              local_40 = iVar5;
              local_3c = iVar1;
              uVar6 = FUN_01c019a0(param_1);
              lVar7 = FUN_01bfb960(uVar6,local_48);
              if (iVar5 < *(int *)(*(longlong *)(lVar7 + 0x80) + 0x90)) {
                uVar6 = FUN_01c019a0(param_1);
                lVar7 = FUN_01bfb960(uVar6,local_48);
                local_40 = *(int *)(*(longlong *)(lVar7 + 0x80) + 0x90);
              }
              uVar6 = FUN_01c019a0(param_1);
              lVar7 = FUN_01bfb960(uVar6,local_48);
              if (iVar1 < *(int *)(*(longlong *)(lVar7 + 0x80) + 0x94)) {
                uVar6 = FUN_01c019a0(param_1);
                lVar7 = FUN_01bfb960(uVar6,local_48);
                local_3c = *(int *)(*(longlong *)(lVar7 + 0x80) + 0x94);
              }
              uVar6 = FUN_01c019a0(param_1);
              lVar7 = FUN_01bfb960(uVar6,local_48);
              FUN_0064d000(*(undefined8 *)(lVar7 + 0x80),local_38);
              if (local_30 < iVar5) {
                uVar6 = FUN_01c019a0(param_1);
                lVar7 = FUN_01bfb960(uVar6,local_48);
                FUN_0064d000(*(undefined8 *)(lVar7 + 0x80),local_38);
                local_40 = local_30;
              }
              uVar6 = FUN_01c019a0(param_1);
              lVar7 = FUN_01bfb960(uVar6,local_48);
              FUN_0064d000(*(undefined8 *)(lVar7 + 0x80),local_38);
              if (local_2c < iVar1) {
                uVar6 = FUN_01c019a0(param_1);
                lVar7 = FUN_01bfb960(uVar6,local_48);
                FUN_0064d000(*(undefined8 *)(lVar7 + 0x80),local_38);
                local_3c = local_2c;
              }
              iVar5 = (iVar5 - local_40) * (iVar5 - local_40) +
                      (iVar1 - local_3c) * (iVar1 - local_3c);
              if (iVar5 < local_44) {
                local_44 = iVar5;
                uVar6 = FUN_01c019a0(param_1);
                lVar7 = FUN_01bfb960(uVar6,local_48);
                local_50 = *(undefined8 *)(lVar7 + 0x80);
              }
            }
          }
        }
        local_48 = local_48 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return local_50;
}

