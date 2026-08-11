/* Ghidra address: 013c4720 */
/* Ghidra symbol: FUN_013c4720 */


void FUN_013c4720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_00414610(param_6);
  FUN_00414ad0(param_1 + 0x2f0,param_6);
  uVar2 = FUN_013b9a60(&DAT_013b8648,1,*(undefined8 *)(param_1 + 0x2e0),1,0);
  *(undefined8 *)(param_1 + 0x328) = uVar2;
  FUN_013bd120(uVar2,param_3);
  uVar1 = FUN_013c4680(param_1);
  *(undefined1 *)(param_1 + 0x2f8) = uVar1;
  FUN_013c5e90(param_2,param_4,*(undefined4 *)(param_1 + 0x2d8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x328) + 0xe8),param_5,0);
  FUN_00414480(&param_6);
  return;
}

