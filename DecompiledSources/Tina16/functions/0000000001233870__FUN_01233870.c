/* Ghidra address: 01233870 */
/* Ghidra symbol: FUN_01233870 */


void FUN_01233870(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    uVar2 = *(undefined8 *)(param_1 + 0x898);
    uVar1 = FUN_00b90090(uVar2);
    FUN_00b90440(uVar2,uVar1);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x898));
    FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x718),uVar2);
    FUN_0122db90(param_1,0);
    if (*(int *)PTR_DAT_02001520 == 0) {
      FUN_01175da0(*(undefined8 *)PTR_DAT_020044a8,0);
    }
    if (*(int *)PTR_DAT_02001520 == 0) {
      FUN_012281f0(param_1);
    }
  }
  return;
}

