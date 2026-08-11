/* Ghidra address: 018cacc0 */
/* Ghidra symbol: FUN_018cacc0 */


void FUN_018cacc0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_2c [3];
  
  FUN_018c58c0(param_1[0x18]);
  if (*(char *)(param_1[0x25] + 0x1d8) == '\0') {
    uVar3 = FUN_018cb270(param_1,&PTR_FUN_01930480);
    FUN_018c5930(param_1[0x18],uVar3,0,0);
    uVar3 = FUN_018cb270(param_1,&PTR_FUN_01932898);
    FUN_018c5930(param_1[0x18],uVar3,0,0);
  }
  else {
    uVar3 = FUN_018cb270(param_1,&PTR_FUN_01932898);
    FUN_018c5930(param_1[0x18],uVar3,0,0);
    uVar3 = FUN_018cb270(param_1,&PTR_FUN_01930480);
    FUN_018c5930(param_1[0x18],uVar3,0,0);
  }
  lVar4 = param_1[0x25];
  param_1[5] = (longlong)
               ((*(double *)(lVar4 + 0x228) * *(double *)PTR_DAT_02002c30 -
                *(double *)(lVar4 + 0x1e0) * *(double *)PTR_DAT_02002c30) -
               *(double *)(lVar4 + 0x178) * *(double *)PTR_DAT_02002c30);
  lVar4 = param_1[0x25];
  param_1[6] = (longlong)
               ((*(double *)(lVar4 + 0x238) * *(double *)PTR_DAT_02002c30 -
                *(double *)(lVar4 + 0x1a8) * *(double *)PTR_DAT_02002c30) -
               *(double *)(lVar4 + 0x1c8) * *(double *)PTR_DAT_02002c30);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  *(undefined1 *)((longlong)param_1 + 0xda) = 0;
  FUN_018cf610(param_1);
  if (*(char *)(param_1[0x25] + 0x1c2) != '\0') {
    (**(code **)(*(longlong *)param_1[7] + 0x98))((longlong *)param_1[7]);
  }
  iVar2 = (*(code *)**(undefined8 **)param_1[7])((undefined8 *)param_1[7]);
  if ((iVar2 == 0) || (*(char *)(param_1[0x25] + 0x1c1) == '\0')) {
    FUN_018cc280(param_1);
    param_1[0x1a] = param_1[0x12];
    goto LAB_018cafe2;
  }
  iVar2 = (*(code *)**(undefined8 **)param_1[7])((undefined8 *)param_1[7]);
  *(int *)(param_1[7] + 0xc) = iVar2 + -1;
  local_2c[0] = 0;
  FUN_018ba6c0(param_1[7],local_2c,param_1 + 0x11);
  if (*(int *)(param_1[0x25] + 0x180) < 2) {
LAB_018caf38:
    bVar1 = true;
  }
  else {
    lVar4 = FUN_018cb270(param_1,&PTR_FUN_01932898);
    if ((lVar4 != 0) && (*(char *)(param_1[0x25] + 0x210) != '\0')) goto LAB_018caf38;
    bVar1 = false;
  }
  if (bVar1) {
    param_1[0x11] = 0;
    local_2c[0] = 0;
  }
  lVar4 = (**(code **)(*(longlong *)param_1[7] + 0xe0))((longlong *)param_1[7],param_1[0x11]);
  param_1[0x12] = lVar4;
  if (local_2c[0] == 0) {
    param_1[0x1a] = param_1[0x12];
  }
  else {
    *(int *)(param_1 + 1) = local_2c[0];
  }
  uVar3 = FUN_018cb270(param_1,&PTR_FUN_01932898);
  FUN_018cb4f0(param_1,uVar3);
  if (bVar1) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1[0x25] + 0x180);
    (**(code **)(*param_1 + 0x60))(param_1,&PTR_FUN_01932898);
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[0x1a] = param_1[0x12];
  }
LAB_018cafe2:
  if ((char)param_1[0x19] != '\0') {
    *(undefined4 *)(param_1[7] + 0x14) = *(undefined4 *)(param_1[7] + 0xc);
  }
  (**(code **)(*param_1 + 0x60))(param_1,&PTR_FUN_01930f88);
  uVar3 = FUN_018cb270(param_1,&PTR_FUN_01930f88);
  FUN_018c5930(param_1[0x18],uVar3,0,0);
  uVar3 = FUN_018cb270(param_1,&PTR_FUN_01932898);
  FUN_018cb4f0(param_1,uVar3);
  FUN_018cf510(param_1);
  return;
}

