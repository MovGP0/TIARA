/* Ghidra address: 0176a8d0 */
/* Ghidra symbol: FUN_0176a8d0 */


undefined1 FUN_0176a8d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_4c [6];
  
  puVar4 = local_4c;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)param_2;
  FUN_004179d0(local_4c,&DAT_01d2e6d8);
  iVar2 = FUN_00416db0(local_4c[0],L"Schematics Macro");
  if (iVar2 == 0) {
    iVar2 = FUN_00416db0(local_4c[1],L"V1.00");
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0176a929;
    }
  }
  uVar1 = 0;
LAB_0176a929:
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  return uVar1;
}

