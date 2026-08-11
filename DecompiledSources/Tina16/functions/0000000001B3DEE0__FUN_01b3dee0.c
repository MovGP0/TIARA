/* Ghidra address: 01b3dee0 */
/* Ghidra symbol: FUN_01b3dee0 */


void FUN_01b3dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_01b3b450(&local_20,param_6);
  FUN_00414ad0(param_4,local_20);
  *(int *)(param_4 + 0x34) = param_7;
  FUN_01d03640(param_2,&local_28,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00414ad0(param_4 + 8,local_28);
  *(undefined4 *)(param_4 + 0x38) = 0xd;
  FUN_01b388b0(param_4 + 8);
  FUN_01d04330(param_2,&local_30);
  FUN_00414ad0(param_4 + 0x18,local_30);
  FUN_00419260(param_5,&DAT_004066f0,1,(longlong)*(int *)(param_4 + 0x34));
  iVar2 = 0;
  iVar3 = param_7;
  if (-1 < param_7 + -1) {
    do {
      uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar2);
      *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_30,3);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_6);
  return;
}

