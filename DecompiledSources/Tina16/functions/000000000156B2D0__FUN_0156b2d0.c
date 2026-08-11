/* Ghidra address: 0156b2d0 */
/* Ghidra symbol: FUN_0156b2d0 */


void FUN_0156b2d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  uint local_9c;
  int local_98;
  undefined4 local_94;
  longlong *local_90;
  char local_85;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = (undefined1 *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x408);
  iVar5 = *(int *)(lVar1 + 0x10);
  local_9c = 0;
  local_a8 = param_1;
  if (-1 < iVar5 + -1) {
    do {
      if (*(uint *)(lVar1 + 0x10) <= local_9c) {
        FUN_00594f90();
      }
      local_90 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_9c * 8);
      if (*(char *)((longlong)local_90 + 0x3dc) != '\0') {
        FUN_004169a0(&local_38,local_90 + 0x5b);
        (**(code **)(*local_90 + 0x210))(local_90,0);
        local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0xfffffffd);
        local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,*(undefined1 *)(local_a8 + 0x94b));
        FUN_0156b180(auStack_d8,local_70,local_90,local_30);
        FUN_00414b50(&local_50,local_70[0]);
        iVar4 = (**(code **)(**(longlong **)(local_a8 + 0x9a8) + 0xb0))
                          (*(longlong **)(local_a8 + 0x9a8),local_50);
        if (iVar4 != -1) {
          FUN_017ff4a0(local_90,&local_78);
          FUN_00416ad0(&local_50,local_78);
        }
        (**(code **)(**(longlong **)(local_a8 + 0x9a8) + 0x78))
                  (*(longlong **)(local_a8 + 0x9a8),local_50);
        local_94 = 1;
        local_85 = '\0';
        local_58 = 0;
        iVar4 = 1;
        local_98 = 0;
        do {
          local_84 = (**(code **)(*local_90 + 0x210))(local_90,local_98);
          local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_84);
          local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,*(undefined1 *)(local_a8 + 0x94b));
          FUN_0156b180(auStack_d8,&local_80,local_90,local_30);
          FUN_00414b50(&local_50,local_80);
          if (*(char *)(local_a8 + 0x958) == '\0') {
LAB_0156b54d:
            local_58 = 0;
            bVar3 = 0;
            if (local_84 == 0) {
              bVar3 = FUN_01566aa0(local_a8);
            }
            if ((bVar3 & local_84 == 0) == 0) {
              local_b8 = local_50;
              local_b0 = &local_58;
              FUN_0154d5a0(local_a8,local_84,local_98,local_94);
            }
          }
          else {
            if ((local_85 == '\0') &&
               (cVar2 = FUN_00e147f0(*(undefined8 *)(local_a8 + 0x9c8),local_84), cVar2 == '\0')) {
              if (local_84 != 0) {
                local_b8 = local_2c;
                local_b0 = (undefined8 *)0x0;
                cVar2 = FUN_00e14cc0(*(undefined8 *)(local_a8 + 0x9c8),local_84,1,local_60);
                if (cVar2 != '\0') goto LAB_0156b53f;
              }
              local_85 = '\0';
            }
            else {
LAB_0156b53f:
              local_85 = '\x01';
            }
            if (local_85 != '\0') goto LAB_0156b54d;
          }
          local_98 = local_98 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_9c = local_9c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_50,4);
  return;
}

