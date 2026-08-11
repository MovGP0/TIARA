/* Ghidra address: 00c72e60 */
/* Ghidra symbol: FUN_00c72e60 */


void FUN_00c72e60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 char param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined7 uVar10;
  char cVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 local_44;
  int local_3c;
  int local_38;
  undefined1 local_34 [12];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
      if (iVar2 != 0) {
        uVar3 = FUN_00c72470(param_1,param_4);
        plVar5 = (longlong *)FUN_00781840();
        cVar1 = (**(code **)(*plVar5 + 0x98))(plVar5);
        cVar11 = (char)param_4;
        if (cVar1 == '\0') {
          if ((param_5 == '\0') && (cVar11 != '\x03')) {
            uVar6 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            uVar7 = FUN_005ffa40(param_2);
            uVar4 = FUN_005fbf20(0xff00000f);
            thunk_FUN_0413e9f5(uVar6,uVar3,uVar7,*(undefined4 *)param_3,
                               CONCAT44(uVar9,*(undefined4 *)((longlong)param_3 + 4)),0,0,uVar4,
                               0x1fffffff,0);
          }
          else {
            uVar6 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
            uVar7 = FUN_005ffa40(param_2);
            thunk_FUN_0413e9f5(uVar6,uVar3,uVar7,*(undefined4 *)param_3,
                               CONCAT44(uVar9,*(undefined4 *)((longlong)param_3 + 4)),0,0,0x1fffffff
                               ,0x1fffffff,1);
          }
        }
        else {
          local_44 = *param_3;
          iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
          local_3c = (int)local_44 + iVar2 / (int)(uint)*(byte *)(param_1 + 0x2c);
          local_38 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                               (*(longlong **)(param_1 + 8),
                                (longlong)iVar2 % (longlong)(int)(uint)*(byte *)(param_1 + 0x2c) &
                                0xffffffff);
          local_38 = local_44._4_4_ + local_38;
          uVar10 = (undefined7)((ulonglong)param_3 >> 8);
          if (cVar11 == '\x01') {
            uVar9 = (undefined4)CONCAT71(uVar10,5);
          }
          else if ((byte)(cVar11 - 2U) < 2) {
            uVar9 = (undefined4)CONCAT71(uVar10,4);
          }
          else {
            uVar9 = (undefined4)CONCAT71(uVar10,2);
          }
          plVar5 = (longlong *)FUN_00781840();
          (**(code **)(*plVar5 + 200))(plVar5,local_34,uVar9);
          uVar6 = FUN_00781840();
          uVar7 = FUN_005ffa40(param_2);
          uVar8 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x10));
          FUN_00778e10(uVar6,uVar7,local_34,&local_44,uVar8,uVar3);
        }
      }
    }
  }
  return;
}

