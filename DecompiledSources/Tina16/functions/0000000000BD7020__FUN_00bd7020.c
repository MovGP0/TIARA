/* Ghidra address: 00bd7020 */
/* Ghidra symbol: FUN_00bd7020 */


void FUN_00bd7020(longlong param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  short local_1c;
  short local_1a [5];
  
  local_30[0] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00bd6e90(param_1);
    iVar2 = FUN_00bd7690(*(undefined8 *)(param_1 + 8),uVar1,param_2);
    if (iVar2 != -1) {
      iVar3 = FUN_004b1870(param_1);
      if (iVar2 != iVar3) {
        FUN_0041ddd0(local_30,PTR_PTR_02004fc0);
        uVar4 = FUN_0044d490(&PTR_FUN_00bd4f68,1,local_30[0]);
        FUN_004134c0(uVar4);
      }
    }
  }
  FUN_007dc640(param_2,local_1a,&local_1c);
  if ((local_1a[0] != *(short *)(param_1 + 0x1c)) || (local_1c != *(short *)(param_1 + 0x1e))) {
    FUN_00bd6ff0(param_1,local_1a[0]);
    FUN_00bd7000(param_1,local_1c);
  }
  FUN_00414480(local_30);
  return;
}

