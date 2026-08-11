/* Ghidra address: 01b3c960 */
/* Ghidra symbol: FUN_01b3c960 */


void FUN_01b3c960(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_01b3b450(local_20,param_6);
  FUN_00414ad0(param_4,local_20[0]);
  *(int *)(param_4 + 0x34) = param_8;
  FUN_00414ad0(param_4 + 8,param_7);
  *(undefined4 *)(param_4 + 0x38) = 0xd;
  FUN_01b388b0(param_4 + 8);
  FUN_01d04330(param_2,&local_28);
  FUN_00414ad0(param_4 + 0x18,local_28);
  if (param_8 == 5) {
    *(undefined4 *)(param_4 + 0x34) = 8;
    FUN_00419260(param_5,&DAT_004066f0,1,8);
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
    *(undefined4 *)*param_5 = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
    *(undefined4 *)(*param_5 + 4) = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],2);
    *(undefined4 *)(*param_5 + 8) = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],3);
    *(undefined4 *)(*param_5 + 0xc) = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],4);
    *(undefined4 *)(*param_5 + 0x10) = uVar1;
    lVar2 = FUN_01cfde70(param_2,2,1,&local_9,&local_a,&local_b);
    if (*(short *)(lVar2 + 0x1f) < 0) {
      *(undefined4 *)(*param_5 + 0x14) = 0xffffffff;
    }
    else {
      *(int *)(*param_5 + 0x14) = (int)*(short *)(lVar2 + 0x1f);
    }
    lVar2 = FUN_01cfde70(param_2,3,1,&local_9,&local_a,&local_b);
    if (*(short *)(lVar2 + 0x1f) < 0) {
      *(undefined4 *)(*param_5 + 0x18) = 0xffffffff;
    }
    else {
      *(int *)(*param_5 + 0x18) = (int)*(short *)(lVar2 + 0x1f);
    }
    *(undefined4 *)(*param_5 + 0x1c) = 0xffffffff;
  }
  if (param_8 == 3) {
    FUN_00419260(param_5,&DAT_004066f0,1,(longlong)*(int *)(param_4 + 0x34));
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
    *(undefined4 *)*param_5 = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
    *(undefined4 *)(*param_5 + 4) = uVar1;
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],2);
    *(undefined4 *)(*param_5 + 8) = uVar1;
  }
  FUN_00414560(&local_28,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_6,2);
  return;
}

