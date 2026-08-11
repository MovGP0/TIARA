/* Ghidra address: 00d7e570 */
/* Ghidra symbol: FUN_00d7e570 */


void FUN_00d7e570(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 local_30 [2];
  undefined1 local_19;
  
  local_30[0] = 0;
  local_19 = 0x1f;
  (**(code **)(*param_2 + 0x20))(param_2,&local_19,1);
  bVar1 = 0;
  ppuVar2 = &PTR_u_Border_01ecf3a8;
  do {
    FUN_00d574e0(param_2,*ppuVar2);
    FUN_00d574e0(param_2,&LAB_00d7e634);
    FUN_005fbf40(local_30,*(undefined4 *)(param_1 + 8 + (ulonglong)bVar1 * 4));
    FUN_00d574e0(param_2,local_30[0]);
    bVar1 = bVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
  } while (bVar1 != 0x20);
  FUN_00414480(local_30);
  return;
}

