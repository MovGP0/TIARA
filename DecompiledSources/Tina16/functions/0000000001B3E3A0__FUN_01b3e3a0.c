/* Ghidra address: 01b3e3a0 */
/* Ghidra symbol: FUN_01b3e3a0 */


void FUN_01b3e3a0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (uVar1 < 0x57d) {
    FUN_00414ad0(param_4 + 8,&DAT_01b3e5ac);
  }
  else {
    uVar3 = FUN_01cfd6a0(param_2);
    FUN_004169a0(param_4 + 8,uVar3);
  }
  *(int *)(param_4 + 0x34) = param_8;
  FUN_00419260(param_5,&DAT_004066f0,1,(longlong)param_8);
  iVar4 = 0;
  iVar5 = param_8;
  if (-1 < param_8 + -1) {
    do {
      uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar4);
      *(undefined4 *)(*param_5 + (longlong)iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00416cd0(param_4 + 8,5,L"Insert here ",param_7,&DAT_01b3e5e8,param_6,L" converter.");
  FUN_01d04330(param_2,&local_20);
  FUN_00414ad0(param_4 + 0x18,local_20);
  *(undefined4 *)(param_4 + 0x38) = 0xd;
  FUN_00414480(&local_20);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_6,2);
  return;
}

