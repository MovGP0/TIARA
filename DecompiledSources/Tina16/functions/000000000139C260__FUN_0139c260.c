/* Ghidra address: 0139c260 */
/* Ghidra symbol: FUN_0139c260 */


void FUN_0139c260(undefined2 param_1,undefined2 param_2,uint param_3,undefined2 param_4,
                 longlong param_5,undefined8 param_6,uint param_7,undefined4 param_8)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  bool local_3c;
  char local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  lVar4 = (longlong)(int)((param_3 & 0xffff) - 1);
  local_3c = 3 < *(ushort *)(param_5 + lVar4 * 2);
  if (local_3c) {
    psVar1 = (short *)(param_5 + lVar4 * 2);
    *psVar1 = *psVar1 + -4;
  }
  sVar2 = *(short *)(param_5 + lVar4 * 2);
  if (sVar2 == 0) {
    local_3a = 0;
  }
  else if (sVar2 == 1) {
    local_3a = 3;
  }
  else if (sVar2 == 2) {
    local_3a = 2;
  }
  else if (sVar2 == 3) {
    local_3a = 1;
  }
  else {
    local_3a = *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x27b0);
    local_3c = false;
  }
  puVar7 = &local_34;
  iVar3 = FUN_0139b230(param_2,&local_3a,&local_3c,&local_3b,puVar7,&local_38,&local_39);
  if (0 < iVar3) {
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
    FUN_00414480(*(longlong *)PTR_DAT_02004e40 + 0x27b8);
    *(int *)(*(longlong *)PTR_DAT_02004e40 + 0x1920) = iVar3;
    FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xbc8));
    FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,iVar3);
    *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x27b0) = local_3a;
    *(undefined1 *)((longlong)plVar5 + 0xd1) = local_3a;
    *(bool *)(*(longlong *)PTR_DAT_02004e40 + 0x27b1) = local_3c;
    *(bool *)((longlong)plVar5 + 0xd3) = local_3c;
    FUN_00414ad0(plVar5 + 0x13,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27b8));
    uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    if (local_3b != '\0') {
      FUN_017bf150(plVar5,uVar6,local_34,local_38);
      FUN_017bf210(plVar5,uVar6,local_39);
    }
    FUN_01d38290(plVar5,1);
    uVar8 = CONCAT62((int6)((ulonglong)puVar7 >> 0x10),param_4);
    FUN_01397a10(plVar5,uVar6,param_2,param_3,uVar8,param_5,param_6);
    *(undefined2 *)((longlong)plVar5 + 0x24) = param_1;
    *(undefined1 *)((longlong)plVar5 + 0x3d3) = 0;
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar5);
    *(short *)PTR_DAT_02005818 = *(short *)PTR_DAT_02005818 + 1;
    local_2c = param_7;
    local_30 = param_8;
    FUN_01b1cd00(&local_2c,&local_30);
    uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar5 + 0xe8))(plVar5,uVar6,local_2c,local_30);
    FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar5,1,0);
    uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar5 + 200))(plVar5,uVar6,0xffffffff);
    uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_01d04aa0(plVar5,uVar6);
    uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar5 + 0xa0))(plVar5,uVar6);
    (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
              (*(longlong **)PTR_DAT_02004e40,local_2c,local_30,0,uVar8 & 0xffffffffffffff00,1);
    FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xbc8));
  }
  FUN_00801e40(*(undefined8 *)PTR_DAT_02004e40,
               *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  return;
}

