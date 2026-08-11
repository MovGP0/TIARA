/* Ghidra address: 0172ca20 */
/* Ghidra symbol: FUN_0172ca20 */


void FUN_0172ca20(longlong param_1,byte param_2,ushort param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5d;
  undefined1 local_5c [41];
  undefined1 local_33 [19];
  int local_20;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*param_4 + 0x90))(param_4);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + (uint)param_2 * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_33,0x1b);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),local_20 + 2);
  uVar1 = (uint)param_3;
  if (-1 < (int)(uVar1 - 1)) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_5d,0x2a);
      FUN_004169a0(&local_68,local_5c);
      FUN_00450070(&local_70,local_68,&DAT_0172cc08,&DAT_0172cc1c,1);
      FUN_00414b50(&local_68,local_70);
      FUN_00450070(&local_78,local_68,&DAT_0172cc30,&DAT_0172cc1c,1);
      FUN_00414b50(&local_68,local_78);
      FUN_0172ba20(*(longlong *)(param_1 + 8),&local_80,local_68,
                   *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),0);
      FUN_00414b50(&local_68,local_80);
      (**(code **)(*param_4 + 0x78))(param_4,local_68);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_00414560(&local_80,4);
  return;
}

