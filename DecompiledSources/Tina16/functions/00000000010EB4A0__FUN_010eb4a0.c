/* Ghidra address: 010eb4a0 */
/* Ghidra symbol: FUN_010eb4a0 */


void FUN_010eb4a0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                          (*(longlong **)(lVar1 + 0xd8),iVar5);
        uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x30))(*(longlong **)(lVar3 + 0x70),0);
        lVar3 = FUN_004113f0(uVar4,&DAT_01ccbf00);
        FUN_00414ad0(lVar3 + 0xd8,local_res10);
        FUN_00414ad0(lVar3 + 0xe0,local_res18);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_4 != '\0') {
      FUN_01acfa60(lVar1);
      FUN_01aceb90(lVar1,1);
    }
  }
  FUN_00414560(&local_res10,2);
  return;
}

