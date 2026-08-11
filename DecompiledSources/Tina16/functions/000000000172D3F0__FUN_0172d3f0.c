/* Ghidra address: 0172d3f0 */
/* Ghidra symbol: FUN_0172d3f0 */


void FUN_0172d3f0(longlong param_1,byte param_2,byte param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  byte local_145;
  undefined1 local_144 [256];
  undefined1 local_44 [23];
  int local_2d;
  undefined1 local_29 [9];
  
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + (uint)param_2 * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_44,0x1b);
  if (local_2d != 0) {
    FUN_0172a910(*(undefined8 *)(param_1 + 8),local_2d);
    FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_145,1);
    uVar5 = (uint)local_145;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_29,1);
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_144,0x15);
        lVar1 = *(longlong *)(param_1 + 8);
        FUN_004169a0(&local_158,local_144);
        FUN_0172ba20(lVar1,&local_150,local_158,*(undefined8 *)(lVar1 + 0x20),0);
        FUN_00416910(local_144,local_150,0xff);
        FUN_004169a0(&local_160,local_144);
        (**(code **)(*param_4 + 0x78))(param_4,local_160);
        uVar2 = *(undefined8 *)(param_1 + 8);
        iVar3 = FUN_0172a950(uVar2);
        uVar4 = FUN_0172c2e0(local_29[0]);
        FUN_0172a910(uVar2,iVar3 + (uint)param_3 * (uVar4 & 0xff));
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  FUN_00414560(&local_160,3);
  return;
}

