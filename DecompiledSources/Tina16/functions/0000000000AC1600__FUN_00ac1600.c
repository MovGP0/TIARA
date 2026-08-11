/* Ghidra address: 00ac1600 */
/* Ghidra symbol: FUN_00ac1600 */


undefined8
FUN_00ac1600(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,int param_9,longlong param_10,
            undefined4 *param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  int local_4c;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  
  if ((char)param_1[8] == '\x11') {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    *param_11 = 0;
    uVar4 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    puVar6 = local_3c;
    plVar8 = param_1 + 0x8a;
    FUN_00a57400(param_1 + 0x16,param_7,param_8,*(undefined4 *)((longlong)param_1 + 0x44),
                 (int)param_1[9],uVar1,puVar6,plVar8);
    uVar10 = (undefined4)((ulonglong)plVar8 >> 0x20);
    uVar1 = (undefined4)((ulonglong)puVar6 >> 0x20);
    FUN_00a55e40(param_1 + 0x8a,*(undefined1 *)(param_1[3] + 0x60));
    local_38 = *(int *)((longlong)param_1 + 0x484) + *(int *)((longlong)param_1 + 0x4a4) +
               *(int *)((longlong)param_1 + 0x494);
    local_30 = *(int *)((longlong)param_1 + 0x47c) + *(int *)((longlong)param_1 + 0x49c) +
               *(int *)((longlong)param_1 + 0x48c);
    local_34 = (int)param_1[0x8f] + (int)param_1[0x93] + (int)param_1[0x91];
    local_4c = *(int *)((longlong)param_1 + 0x4cc);
    if (local_4c < 1) {
      if (param_8 < 1) {
        local_4c = param_9;
      }
      else {
        local_4c = param_8;
      }
    }
    iVar5 = param_3 + local_38;
    *(int *)((longlong)param_1 + 0x514) = (param_7 - local_38) - local_30;
    uVar4 = *(undefined8 *)(param_10 + 0x28);
    *(longlong **)(param_10 + 0x28) = param_1;
    *(longlong *)(param_1[0xac] + 0x38) = param_10;
    uVar2 = FUN_00a74830(param_10,iVar5,param_4);
    uVar3 = FUN_00a74880(param_10,iVar5 + *(int *)((longlong)param_1 + 0x514),param_4);
    uVar7 = CONCAT44(uVar1,*(undefined4 *)((longlong)param_1 + 0x514));
    uVar9 = CONCAT44(uVar10,*(undefined4 *)((longlong)param_1 + 0x4cc));
    FUN_00abf530(param_1[0xac],param_2,iVar5,param_4,param_5,param_6,uVar7,uVar9,local_4c,local_40,
                 param_12);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_00a748d0(param_10,uVar2);
    FUN_00a748f0(param_10,uVar3);
    *(undefined8 *)(param_10 + 0x28) = uVar4;
    uVar4 = FUN_00a9fd90(param_1,param_2,param_3,param_4,param_5,param_6,CONCAT44(uVar1,param_7),
                         CONCAT44(uVar10,param_8),param_9,param_10,param_11,param_12);
  }
  return uVar4;
}

