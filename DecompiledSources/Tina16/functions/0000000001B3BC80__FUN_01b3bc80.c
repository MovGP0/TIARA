/* Ghidra address: 01b3bc80 */
/* Ghidra symbol: FUN_01b3bc80 */


void FUN_01b3bc80(undefined8 param_1,longlong *param_2,undefined8 param_3,ushort param_4,
                 longlong param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  *(undefined4 *)(param_5 + 0x34) = 3;
  FUN_00419260(param_6,&DAT_004066f0,1,3);
  if (param_4 == 9) {
    uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (uVar1 < 0xbe) {
      lVar3 = FUN_01cfde70(param_2,2,1,&local_9,&local_a,&local_b);
      if (-1 < *(short *)(lVar3 + 0x1f)) {
        *(undefined4 *)(param_5 + 0x34) = 4;
        FUN_00419260(param_6,&DAT_004066f0,1,4);
        uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],3);
        *(undefined4 *)(*param_6 + 0xc) = uVar2;
      }
    }
    else {
      *(undefined4 *)(param_5 + 0x34) = 4;
      FUN_00419260(param_6,&DAT_004066f0,1,4);
      uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],3);
      *(undefined4 *)(*param_6 + 0xc) = uVar2;
    }
  }
  FUN_01b3b450(local_20,param_7);
  FUN_00414ad0(param_5,local_20[0]);
  FUN_00414ad0(param_5 + 8,param_8);
  *(uint *)(param_5 + 0x38) = (uint)param_4;
  FUN_01b388b0(param_5 + 8);
  FUN_01d04330(param_2,&local_28);
  FUN_00414ad0(param_5 + 0x18,local_28);
  uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_6 = uVar2;
  uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
  *(undefined4 *)(*param_6 + 4) = uVar2;
  uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],2);
  *(undefined4 *)(*param_6 + 8) = uVar2;
  FUN_00414560(&local_28,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_7,2);
  return;
}

