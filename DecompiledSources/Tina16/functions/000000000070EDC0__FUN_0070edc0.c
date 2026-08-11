/* Ghidra address: 0070edc0 */
/* Ghidra symbol: FUN_0070edc0 */


void FUN_0070edc0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 uVar7;
  int local_2a4;
  undefined8 local_2a0 [2];
  undefined1 local_28e [510];
  undefined4 local_90 [2];
  undefined1 *local_88;
  undefined4 local_78;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  int local_30;
  
  local_2a0[0] = 0;
  iVar6 = 0;
  uVar5 = FUN_00786090(param_1);
  iVar2 = thunk_FUN_041b2403(uVar5,0x1200,0,0);
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
  local_2a4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar5,0x1207,(longlong)local_2a4,local_38);
      FUN_0040d200(local_90,0x48,0);
      local_90[0] = 2;
      local_88 = local_28e;
      local_78 = 0xff;
      uVar5 = FUN_00786090(param_1);
      iVar3 = thunk_FUN_041b2403(uVar5,0x120b,(longlong)local_2a4,local_90);
      if (iVar3 != 0) {
        FUN_004167d0(local_2a0,local_88);
        in_stack_fffffffffffffd28 = local_2a0[0];
        (**(code **)(*param_1 + 0x88))
                  (param_1,param_2,local_38,local_2a4,local_2a0[0],(int)param_1[8] == local_2a4,
                   *(int *)((longlong)param_1 + 0x44) == local_2a4,0);
      }
      uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
      if (iVar6 < local_30) {
        iVar6 = local_30;
      }
      local_2a4 = local_2a4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar5 = FUN_00786090(param_1);
  thunk_FUN_03e49910(uVar5,local_48);
  iVar2 = FUN_004230a0(local_48);
  uVar4 = FUN_004230c0(local_48);
  FUN_004238d0(local_38,iVar6,0,iVar2 + 2,CONCAT44(uVar7,uVar4));
  cVar1 = FUN_00423b30(local_38);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x88))(param_1,param_2,local_38,0xffffffff,0,0,0,1);
  }
  FUN_00414480(local_2a0);
  return;
}

