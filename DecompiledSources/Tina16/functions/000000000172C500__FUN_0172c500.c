/* Ghidra address: 0172c500 */
/* Ghidra symbol: FUN_0172c500 */


void FUN_0172c500(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 local_40;
  undefined1 local_33 [35];
  
  local_40 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + 1);
  uVar1 = (uint)*(byte *)(param_1 + 0x18);
  if (-1 < (int)(uVar1 - 1)) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_33,0x1b);
      FUN_004169a0(&local_40,local_33);
      (**(code **)(*param_2 + 0x78))(param_2,local_40);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

