/* Ghidra address: 01b3e0a0 */
/* Ghidra symbol: FUN_01b3e0a0 */


void FUN_01b3e0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  if (param_7 != -1) {
    FUN_01b3b3b0(param_2,1,param_7);
  }
  FUN_01b3b450(&local_30,param_6);
  FUN_00414ad0(param_4,local_30);
  *(undefined4 *)(param_4 + 0x38) = 0xd;
  *(int *)(param_4 + 0x34) = param_8 + 2;
  FUN_00419260(param_5,&DAT_004066f0,1,(longlong)(param_8 + 2));
  iVar4 = 0;
  iVar5 = param_8;
  if (-1 < param_8 + -1) {
    do {
      uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar4);
      *(undefined4 *)(*param_5 + (longlong)iVar4 * 4) = uVar1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_8 = param_8 + 2;
  uVar2 = FUN_01cfd6a0(param_2);
  FUN_004169a0(&local_20,uVar2);
  FUN_00414ad0(param_4 + 8,local_20);
  FUN_01b388b0(param_4 + 8);
  FUN_01d04330(param_2,&local_38);
  FUN_00414ad0(param_4 + 0x18,local_38);
  iVar5 = FUN_01cfd2d0(param_2);
  lVar3 = FUN_01cfde70(param_2,iVar5 + -2,0,&local_21,&local_22,&local_23);
  if (*(short *)(lVar3 + 0x1f) < 0) {
    *(undefined4 *)(*param_5 + (longlong)(param_8 + -1) * 4) = 0;
  }
  else {
    *(int *)(*param_5 + (longlong)(param_8 + -1) * 4) = (int)*(short *)(lVar3 + 0x1f);
  }
  iVar5 = FUN_01cfd2d0(param_2);
  lVar3 = FUN_01cfde70(param_2,iVar5 + -1,0,&local_21,&local_22,&local_23);
  if (*(short *)(lVar3 + 0x1f) < 0) {
    iVar5 = FUN_019954d0(param_1);
    *(int *)(*param_5 + (longlong)(param_8 + -2) * 4) = iVar5 + 1;
  }
  else {
    *(int *)(*param_5 + (longlong)(param_8 + -2) * 4) = (int)*(short *)(lVar3 + 0x1f);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_6);
  return;
}

