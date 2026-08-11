/* Ghidra address: 008b8c70 */
/* Ghidra symbol: FUN_008b8c70 */


void FUN_008b8c70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  
  pcVar2 = (code *)FUN_00411550(param_3,0xffffffff);
  uVar3 = (*pcVar2)(param_3);
  uVar3 = FUN_004113f0(uVar3,&PTR_FUN_008b43d0);
  FUN_008b83d0(uVar3,param_3);
  FUN_008b8360(param_2,param_3);
  iVar1 = (**(code **)(*param_3 + 0x70))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_008b8a80(param_3,iVar4);
      FUN_008b8c70(param_1,param_2,uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

