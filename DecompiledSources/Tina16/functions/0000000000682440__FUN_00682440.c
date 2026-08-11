/* Ghidra address: 00682440 */
/* Ghidra symbol: FUN_00682440 */


void FUN_00682440(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 < 0) goto LAB_00682577;
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)param_2,0);
  if (iVar1 < 0) {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    iVar1 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)(param_2 + -1),0);
    if (iVar1 < 0) goto LAB_00682577;
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    iVar2 = thunk_FUN_041b2403(uVar3,0xc1,(longlong)iVar1,0);
    if (iVar2 == 0) goto LAB_00682577;
    iVar1 = iVar1 + iVar2;
    FUN_00416ba0(local_20,&LAB_006825b4,param_3);
    if (param_3 == 0) {
      FUN_00416ad0(local_20,&LAB_006825b4);
    }
  }
  else {
    FUN_00416ba0(local_20,param_3,&LAB_006825b4);
  }
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  thunk_FUN_041b2403(uVar3,0xb1,(longlong)iVar1,(longlong)iVar1);
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  FUN_00470120(uVar3,0xc2,0,local_20[0]);
LAB_00682577:
  FUN_00414480(local_20);
  return;
}

