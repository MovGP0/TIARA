/* Ghidra address: 00d7e8f0 */
/* Ghidra symbol: FUN_00d7e8f0 */


void FUN_00d7e8f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 local_30 [2];
  undefined4 local_1c;
  
  local_30[0] = 0;
  local_1c = 0x17;
  (**(code **)(*param_2 + 0x20))(param_2,&local_1c,4);
  iVar1 = 0;
  ppuVar2 = &PTR_u_clActiveBorder_01ecf210;
  do {
    FUN_00d574e0(param_2,*ppuVar2);
    FUN_00d574e0(param_2,&LAB_00d7e9b4);
    FUN_005fbf40(local_30,*(undefined4 *)(param_1 + 8 + (longlong)iVar1 * 4));
    FUN_00d574e0(param_2,local_30[0]);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 2;
  } while (iVar1 != 0x17);
  FUN_00414480(local_30);
  return;
}

