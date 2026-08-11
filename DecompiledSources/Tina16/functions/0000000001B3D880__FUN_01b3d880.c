/* Ghidra address: 01b3d880 */
/* Ghidra symbol: FUN_01b3d880 */


void FUN_01b3d880(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  char local_19;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_01b3b450(local_30,param_6);
  FUN_00414ad0(param_4,local_30[0]);
  FUN_01d03640(param_2,&local_38,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00414ad0(param_4 + 8,local_38);
  FUN_01d04330(param_2,&local_40);
  FUN_00414ad0(param_4 + 0x18,local_40);
  *(undefined4 *)(param_4 + 0x38) = 0xd;
  if (param_7 == 1) {
    *(undefined4 *)(param_4 + 0x34) = 1;
    FUN_00419260(param_5,&DAT_004066f0,1,1);
    uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
    *(undefined4 *)*param_5 = uVar1;
    FUN_01b388b0(param_4 + 8);
  }
  else {
    *(int *)(param_4 + 0x34) = param_7 + 2;
    FUN_00419260(param_5,&DAT_004066f0,1,(longlong)(param_7 + 2));
    iVar4 = 0;
    iVar5 = param_7;
    if (-1 < param_7 + -1) {
      do {
        iVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar4);
        *(int *)(*param_5 + (longlong)iVar4 * 4) = iVar2;
        if (iVar2 == -1) {
          *(undefined4 *)(*param_5 + (longlong)iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    param_7 = param_7 + 2;
    uVar1 = FUN_01cfd2d0(param_2);
    FUN_01cfde70(param_2,uVar1,0,&local_19,&local_1a,&local_1b);
    bVar6 = local_19 == '\x0e';
    iVar5 = FUN_01cfd2d0(param_2);
    lVar3 = FUN_01cfde70(param_2,(iVar5 - (uint)bVar6) + -1,0,&local_19,&local_1a,&local_1b);
    if (local_19 == '\t') {
      if (*(short *)(lVar3 + 0x1f) < 0) {
        *(undefined4 *)(*param_5 + (longlong)(param_7 + -1) * 4) = 0;
      }
      else {
        *(int *)(*param_5 + (longlong)(param_7 + -1) * 4) = (int)*(short *)(lVar3 + 0x1f);
      }
    }
    iVar5 = FUN_01cfd2d0(param_2);
    lVar3 = FUN_01cfde70(param_2,iVar5 - (uint)bVar6,0,&local_19,&local_1a,&local_1b);
    if (local_19 == '\t') {
      if (*(short *)(lVar3 + 0x1f) < 0) {
        iVar5 = FUN_019954d0(param_1);
        *(int *)(*param_5 + (longlong)(param_7 + -2) * 4) = iVar5 + 1;
      }
      else {
        *(int *)(*param_5 + (longlong)(param_7 + -2) * 4) = (int)*(short *)(lVar3 + 0x1f);
      }
    }
    FUN_01b388b0(param_4 + 8);
  }
  FUN_00414560(&local_40,3);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_6);
  return;
}

