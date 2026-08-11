/* Ghidra address: 01ae6250 */
/* Ghidra symbol: FUN_01ae6250 */


void FUN_01ae6250(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01ad0970(param_1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&DAT_01cdd500);
      FUN_01ce6ab0(uVar2,param_2,local_res18[0]);
      FUN_01add6f0(param_1,local_res18[0]);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01acfc60(param_1);
  FUN_01ada270(param_1,0,local_res18[0]);
  FUN_01aceb90(param_1,1);
  FUN_00414480(local_res18);
  return;
}

