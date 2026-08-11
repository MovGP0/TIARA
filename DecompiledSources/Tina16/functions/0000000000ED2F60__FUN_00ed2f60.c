/* Ghidra address: 00ed2f60 */
/* Ghidra symbol: FUN_00ed2f60 */


void FUN_00ed2f60(longlong param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_0043e130(&local_30,local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x10))
            (*(longlong **)(param_1 + 0x888),&local_28,*(undefined8 *)(param_1 + 0x8d0),local_30,0);
  FUN_0043ea00(&local_20,local_28);
  FUN_00414ad0(param_1 + 0x8b0,local_20);
  iVar3 = FUN_004170c0(local_res18,*(undefined8 *)(param_1 + 0x8b0),1);
  iVar4 = FUN_004170c0(&DAT_00ed32e0,*(undefined8 *)(param_1 + 0x8b0),1);
  iVar5 = iVar3;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) break;
  } while (*(short *)(*(longlong *)(param_1 + 0x8b0) + -2 + (longlong)iVar5 * 2) == 0x20);
  if (((iVar5 < 1) ||
      (*(short *)(*(longlong *)(param_1 + 0x8b0) + -2 + (longlong)iVar5 * 2) != 0x3b)) &&
     (iVar4 + -1 <= iVar5)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  if (0 < iVar3) {
    iVar5 = 0;
    if (local_res18 != 0) {
      iVar5 = *(int *)(local_res18 + -4);
    }
    FUN_00416e20(param_1 + 0x8b0,iVar3,iVar5 + 1);
  }
  while( true ) {
    iVar5 = 0;
    if (*(longlong *)(param_1 + 0x8b0) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x8b0) + -4);
    }
    if ((iVar5 <= iVar3) ||
       (*(short *)(*(longlong *)(param_1 + 0x8b0) + -2 + (longlong)iVar3 * 2) != 0x20)) break;
    iVar3 = iVar3 + 1;
  }
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x8b0) + -4);
  }
  if ((iVar3 < iVar5) &&
     (*(short *)(*(longlong *)(param_1 + 0x8b0) + -2 + (longlong)iVar3 * 2) == 0x28)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if ((bool)(bVar2 & bVar1)) {
    while (*(short *)(*(longlong *)(param_1 + 0x8b0) + -2 + (longlong)iVar3 * 2) != 0x3b) {
      FUN_00416e20(param_1 + 0x8b0,iVar3,1);
    }
    FUN_00416e20(param_1 + 0x8b0,iVar3,1);
  }
  iVar5 = FUN_004170c0(&LAB_00ed32f0,*(undefined8 *)(param_1 + 0x8b0),1);
  if (0 < iVar5) {
    uVar6 = FUN_004170c0(&LAB_00ed32f0,*(undefined8 *)(param_1 + 0x8b0),1);
    FUN_00416e20(param_1 + 0x8b0,uVar6,1);
  }
  iVar5 = FUN_00416db0(local_res18,*(undefined8 *)(param_1 + 0x8a8));
  if ((param_4 & iVar5 == 0) != 0) {
    FUN_00414480(param_1 + 0x8a8);
  }
  FUN_0043e130(&local_38,local_res10);
  FUN_0043ea00(&local_40,*(undefined8 *)(param_1 + 0x8b0));
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x18))
            (*(longlong **)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),local_38,local_40);
  FUN_00414560(&local_40,5);
  FUN_00414560(&local_res10,2);
  return;
}

