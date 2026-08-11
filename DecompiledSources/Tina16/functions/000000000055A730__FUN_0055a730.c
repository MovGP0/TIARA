/* Ghidra address: 0055a730 */
/* Ghidra symbol: FUN_0055a730 */


void FUN_0055a730(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_44;
  longlong *local_40;
  longlong local_38 [3];
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_38[0] = 0;
  local_50 = 0;
  local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
  puVar1 = auStack_a8;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  uVar3 = FUN_004121f0(local_68);
  FUN_00411f00(uVar3,0xffffffff);
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x58) == 0) {
    FUN_0055a650(param_1,local_38);
    local_44 = 0;
    local_20 = 0;
    local_20 = FUN_005635a0(&PTR_FUN_00540d20,1,0);
    uVar3 = FUN_00561540(&PTR_FUN_0053ec48,1,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50) = uVar3;
    iVar4 = **(int **)(*(longlong *)(param_1 + 0x30) + 0x48);
    local_54 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_40 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48) + 8) +
                    (longlong)local_54 * 8);
        if (local_40 != (longlong *)0x0) {
          if (local_40 == (longlong *)0x1) {
            local_44 = local_44 + 1;
          }
          else if (*local_40 != 0) {
            local_60 = FUN_00587ef0(*local_40);
            FUN_00587e00(&local_60,&local_78);
            local_88 = local_78;
            FUN_00416cd0(&local_50,3,*(undefined8 *)(local_38[0] + (longlong)local_44 * 8),
                         &LAB_0055aa84);
            cVar2 = FUN_00563f80(local_20,local_50);
            if (cVar2 == '\0') {
              FUN_00563b90(local_20,local_50,*local_40);
            }
            cVar2 = FUN_00561fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50),*local_40);
            if (cVar2 == '\0') {
              FUN_00561b30(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50),*local_40,local_50)
              ;
            }
          }
        }
        local_54 = local_54 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x58) = local_20;
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30));
  }
  else {
    FUN_0055aa10(0,local_70);
  }
  FUN_00414480(&local_78);
  FUN_00414480(&local_50);
  FUN_00419430(local_38,&DAT_004210c0);
  return;
}

