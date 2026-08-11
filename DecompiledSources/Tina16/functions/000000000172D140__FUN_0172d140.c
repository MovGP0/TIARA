/* Ghidra address: 0172d140 */
/* Ghidra symbol: FUN_0172d140 */


void FUN_0172d140(longlong param_1,byte param_2,byte param_3,longlong *param_4,longlong *param_5,
                 undefined8 *param_6,byte *param_7,short *param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_144 [256];
  undefined1 local_44 [23];
  int local_2d;
  char local_29;
  
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + (uint)param_2 * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_44,0x1b);
  if (local_2d != 0) {
    FUN_0172a910(*(undefined8 *)(param_1 + 8),local_2d);
    FUN_0172a920(*(undefined8 *)(param_1 + 8),param_7,1);
    lVar3 = FUN_00409570(*param_7);
    *param_5 = lVar3;
    *param_8 = 0;
    uVar6 = (uint)*param_7;
    iVar5 = 0;
    if (-1 < (int)(uVar6 - 1)) {
      do {
        FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_29,1);
        *(char *)(*param_5 + (longlong)iVar5) = local_29;
        if (local_29 == '\x01') {
          *param_8 = *param_8 + (ushort)param_3 * 4;
        }
        else if (local_29 == '\x02') {
          *param_8 = *param_8 + (ushort)param_3;
        }
        else if (local_29 == '\x03') {
          *param_8 = *param_8 + (ushort)param_3;
        }
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_144,0x15);
        lVar3 = *(longlong *)(param_1 + 8);
        FUN_004169a0(&local_158,local_144);
        FUN_0172ba20(lVar3,&local_150,local_158,*(undefined8 *)(lVar3 + 0x20),0);
        FUN_00416910(local_144,local_150,0xff);
        FUN_004169a0(&local_160,local_144);
        (**(code **)(*param_4 + 0x78))(param_4,local_160);
        uVar4 = *(undefined8 *)(param_1 + 8);
        iVar1 = FUN_0172a950(uVar4);
        uVar2 = FUN_0172c2e0(local_29);
        FUN_0172a910(uVar4,iVar1 + (uint)param_3 * (uVar2 & 0xff));
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar4 = FUN_00409570(*param_8);
    *param_6 = uVar4;
  }
  FUN_00414560(&local_160,3);
  return;
}

