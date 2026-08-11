/* Ghidra address: 0172c5d0 */
/* Ghidra symbol: FUN_0172c5d0 */


void FUN_0172c5d0(longlong param_1,byte param_2,undefined8 *param_3,undefined2 param_4,
                 ushort *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60 [2];
  undefined1 local_4d [26];
  undefined1 local_33 [17];
  ushort local_22;
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_60[0] = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + 1);
  *param_5 = 0;
  uVar3 = (uint)param_2;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_33,0x1b);
      *param_5 = *param_5 + local_22;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_33,0x1b);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x14) + (uint)*param_5 * 0x1a + 2);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_4d,0x1a);
  FUN_004169a0(local_60,local_4d);
  iVar1 = FUN_004170c0(&DAT_0172c90c,local_60[0],1);
  if (iVar1 < 1) {
    FUN_004169a0(param_3,local_4d);
  }
  else {
    FUN_00414ff0(local_78,&DAT_0172c910);
    FUN_00415110(local_78,local_4d,0x15);
    FUN_00414ff0(local_90,local_78);
    FUN_00415110(local_90,&DAT_0172c910,0x16);
    FUN_004169a0(param_3,local_90);
  }
  iVar1 = local_22 - 1;
  if (0 < iVar1) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_4d,0x1a);
      FUN_004169a0(&local_98,local_4d);
      iVar2 = FUN_004170c0(&DAT_0172c90c,local_98,1);
      if (iVar2 < 1) {
        FUN_00416780(&local_b0,param_4);
        FUN_004169a0(&local_b8,local_4d);
        FUN_00416cd0(param_3,3,*param_3,local_b0,local_b8);
      }
      else {
        FUN_00416780(&local_a0,param_4);
        FUN_004169a0(&local_a8,local_4d);
        FUN_00416cd0(param_3,5,*param_3,local_a0,&LAB_0172c920,local_a8,&LAB_0172c920);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_b8,5);
  FUN_00414480(local_60);
  return;
}

