/* Ghidra address: 01ca0100 */
/* Ghidra symbol: FUN_01ca0100 */


void FUN_01ca0100(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 local_res10 [3];
  wchar_t *pwVar11;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined1 local_2d8 [24];
  undefined8 local_2c0;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_2d8,&DAT_00432b90);
  lVar4 = FUN_00410e60(&DAT_01ca0018,1);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar4 + 0x10;
  }
  FUN_0041b840(&local_2e8,lVar8);
  uVar5 = FUN_01ca5f70(&PTR_FUN_01c9f0e8,1,0);
  FUN_00441920(&local_2f0,local_res10[0]);
  FUN_004414c0(&local_48,local_2f0,0);
  FUN_00441640(&local_50,local_res10[0]);
  pwVar11 = L".TSC";
  FUN_00416cd0(&local_2f8,4,local_50,local_48,L" - autosave*",L".TSC");
  iVar2 = FUN_00441230(local_2f8,0x20,local_2d8);
  while (iVar2 == 0) {
    FUN_00416cd0(local_40,3,local_50,&LAB_01ca0500,local_2c0,pwVar11);
    uVar3 = FUN_00440970(local_40[0]);
    uVar10 = FUN_00442290(uVar3);
    FUN_01ca6560(uVar5,uVar10,local_40[0]);
    iVar2 = FUN_00441290(local_2d8);
  }
  FUN_004412c0(local_2d8);
  uVar10 = FUN_01ca6b60(uVar5);
  FUN_01ca6f30(uVar10,&local_58);
  lVar8 = 0;
  if (local_58 != 0) {
    lVar8 = *(longlong *)(local_58 + -8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 + 0x18;
  }
  FUN_01ca75c0(&LAB_01c9fd20,&local_300,lVar4);
  FUN_01ca74e0(local_58,lVar8 + -1,local_300);
  iVar2 = 1;
  FUN_004194b0(&local_2e0,local_58,&DAT_01c9ddd8);
  uVar9 = 0;
  while( true ) {
    uVar7 = 0;
    if (local_2e0 != 0) {
      uVar7 = *(ulonglong *)(local_2e0 + -8);
    }
    if (uVar7 <= uVar9) break;
    uVar10 = *(undefined8 *)(local_2e0 + uVar9 * 8);
    if (*(int *)PTR_DAT_02003b90 <= iVar2) {
      uVar6 = FUN_00414480(local_40);
      cVar1 = FUN_01ca6870(uVar5,uVar10,uVar6);
      if (cVar1 != '\0') {
        uVar10 = FUN_00416740(local_40[0]);
        thunk_FUN_0418581b(uVar10);
      }
    }
    iVar2 = iVar2 + 1;
    uVar9 = uVar9 + 1;
  }
  FUN_00419430(&local_2e0,&DAT_01c9ddd8);
  FUN_00410f20(uVar5);
  FUN_0041b800(&local_300);
  FUN_00414560(&local_2f8,2);
  FUN_0041b800(&local_2e8);
  FUN_00419430(&local_2e0,&DAT_01c9ddd8);
  FUN_00417740(local_2d8,&DAT_00432b90);
  FUN_00419430(&local_58,&DAT_01c9ddd8);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_res10);
  return;
}

