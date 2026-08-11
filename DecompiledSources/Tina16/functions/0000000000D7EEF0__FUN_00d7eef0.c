/* Ghidra address: 00d7eef0 */
/* Ghidra symbol: FUN_00d7eef0 */


void FUN_00d7eef0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 local_30 [2];
  undefined1 local_19;
  
  local_30[0] = 0;
  local_19 = 0x5c;
  (**(code **)(*param_2 + 0x20))(param_2,&local_19,1);
  bVar1 = 0;
  ppuVar2 = &PTR_u_CaptionTextNormal_01ecf4a8;
  do {
    FUN_00d574e0(param_2,*ppuVar2);
    FUN_00d574e0(param_2,&LAB_00d7efb4);
    FUN_00d7da90(local_30,*(undefined8 *)(param_1 + 8 + (ulonglong)bVar1 * 8));
    FUN_00d574e0(param_2,local_30[0]);
    bVar1 = bVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
  } while (bVar1 != 0x5d);
  FUN_00414480(local_30);
  return;
}

