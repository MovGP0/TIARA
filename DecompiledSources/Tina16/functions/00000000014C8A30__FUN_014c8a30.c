/* Ghidra address: 014c8a30 */
/* Ghidra symbol: FUN_014c8a30 */


undefined1 FUN_014c8a30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_45d;
  int local_45c;
  undefined8 local_448;
  undefined1 local_43a [1026];
  undefined8 local_38;
  int local_2c;
  
  local_38 = 0;
  local_448 = 0;
  local_45d = 0;
  iVar8 = *(int *)(param_1 + 0x2e8);
  local_45c = 1;
  if (0 < iVar8) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2d0) + -8 + (longlong)local_45c * 8);
      lVar2 = *(longlong *)(lVar1 + 0x60);
      FUN_016eeca0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 3,(double)*(byte *)(lVar2 + 0xe),
                   0);
      if (*(char *)(lVar2 + 0xe) != '\0') {
        if (*(char *)(lVar2 + 0x310) == '\x01') {
          if (*(int *)(lVar2 + 8) < 0) {
            lVar1 = *(longlong *)(lVar1 + 0x128);
            FUN_00414b50(&local_38,*(undefined8 *)(lVar1 + 0x580));
            FUN_00414b50(&local_448,*(undefined8 *)(lVar1 + 0x590));
            uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            uVar6 = FUN_014cdd30(*(undefined8 *)(param_1 + 0xe8));
            uVar6 = FUN_00442620(uVar6,local_38);
            FUN_00442620(local_43a,local_448);
            uVar5 = FUN_015f8c10(uVar5,uVar6);
            *(undefined8 *)(lVar2 + 0x318) = uVar5;
          }
          else {
            uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            uVar5 = FUN_015f8c90(uVar5,*(undefined4 *)(lVar2 + 8));
            *(undefined8 *)(lVar2 + 0x318) = uVar5;
          }
        }
        else {
          if (*(int *)(lVar2 + 8) < 0) {
            lVar3 = *(longlong *)(lVar1 + 0x128);
            FUN_00414b50(&local_38,*(undefined8 *)(lVar3 + 0x580));
            FUN_00414b50(&local_448,*(undefined8 *)(lVar3 + 0x590));
            uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            uVar6 = FUN_014cdd30(*(undefined8 *)(param_1 + 0xe8));
            uVar6 = FUN_00442620(uVar6,local_38);
            uVar7 = FUN_00442620(local_43a,local_448);
            cVar4 = FUN_015f8be0(uVar5,uVar6,uVar7,&local_2c);
          }
          else {
            uVar5 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            cVar4 = FUN_015f8bb0(uVar5,*(undefined4 *)(lVar2 + 8));
          }
          FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 1,0);
          FUN_0040c770();
          if (local_2c == 0) {
            local_45d = 1;
            FUN_016eeca0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 1,(double)(int)cVar4,0);
          }
        }
      }
      local_45c = local_45c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414480(&local_448);
  FUN_00414480(&local_38);
  return local_45d;
}

