/* Ghidra address: 016b9b40 */
/* Ghidra symbol: FUN_016b9b40 */


void FUN_016b9b40(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9c8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa08));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa50));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x30))
                        (*(longlong **)(param_1 + 0xa58),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa60));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xdb8));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x50));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

