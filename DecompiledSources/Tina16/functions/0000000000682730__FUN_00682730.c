/* Ghidra address: 00682730 */
/* Ghidra symbol: FUN_00682730 */


void FUN_00682730(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0043f0c0(local_20,param_2,1);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  iVar1 = FUN_0064dc90(*(undefined8 *)(param_1 + 0x38));
  if (iVar2 == iVar1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x38),local_30);
    iVar2 = FUN_00416db0(local_20[0],local_30[0]);
    if (iVar2 == 0) goto code_r0x00682814;
  }
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar4 = FUN_00470120(uVar3,0xc,0,local_20[0]);
  if (lVar4 == 0) {
    FUN_0041ddd0(&local_38,PTR_PTR_02004730);
    uVar3 = FUN_0044d490(&PTR_FUN_00472870,1,local_38);
    FUN_004134c0(uVar3);
  }
  FUN_0064fca0(*(undefined8 *)(param_1 + 0x38),0xb012,0,0);
code_r0x00682814:
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

