/* Ghidra address: 0139c610 */
/* Ghidra symbol: FUN_0139c610 */


void FUN_0139c610(undefined2 param_1,undefined2 param_2,uint param_3,undefined2 param_4,
                 ushort param_5,longlong param_6,undefined8 param_7,undefined2 *param_8,int param_9,
                 int param_10,undefined8 param_11)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool local_44;
  char local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  lVar5 = (longlong)(int)((param_3 & 0xffff) - 1);
  local_44 = 3 < *(ushort *)(param_6 + lVar5 * 2);
  if (local_44) {
    psVar1 = (short *)(param_6 + lVar5 * 2);
    *psVar1 = *psVar1 + -4;
  }
  sVar2 = *(short *)(param_6 + lVar5 * 2);
  if (sVar2 == 0) {
    local_42 = 0;
  }
  else if (sVar2 == 1) {
    local_42 = 3;
  }
  else if (sVar2 == 2) {
    local_42 = 2;
  }
  else if (sVar2 == 3) {
    local_42 = 1;
  }
  else {
    local_42 = *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x27b0);
    local_44 = false;
  }
  iVar4 = FUN_0139b230(param_2,&local_42,&local_44,&local_43,&local_34,&local_38,&local_41);
  if (0 < iVar4) {
    FUN_00414480(*(longlong *)PTR_DAT_02004e40 + 0x27b8);
    plVar6 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,iVar4);
    *(undefined1 *)((longlong)plVar6 + 0xd1) = local_42;
    *(bool *)((longlong)plVar6 + 0xd3) = local_44;
    FUN_00414ad0(plVar6 + 0x13,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27b8));
    uVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    if (local_43 != '\0') {
      FUN_017bf150(plVar6,uVar7,local_34,local_38);
      FUN_017bf210(plVar6,uVar7,local_41);
    }
    FUN_01d38290(plVar6,1);
    FUN_01397a10(plVar6,uVar7,param_2,param_3,param_4,param_6,param_7);
    *(undefined2 *)((longlong)plVar6 + 0x24) = param_1;
    *(undefined1 *)((longlong)plVar6 + 0x3d3) = 0;
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar6);
    *(short *)PTR_DAT_02005818 = *(short *)PTR_DAT_02005818 + 1;
    local_2c = param_9;
    local_30 = param_10;
    FUN_01b1cd00(&local_2c,&local_30);
    uVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar6 + 0xe8))(plVar6,uVar7,local_2c,local_30);
    cVar3 = FUN_0139d910(param_1,param_11,&local_3c,&local_40,0);
    if ((cVar3 != '\0') && ((local_3c != 0 || (local_40 != 0)))) {
      local_2c = local_2c + local_3c;
      local_30 = local_30 + local_40;
      uVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*plVar6 + 0xe8))(plVar6,uVar7,local_2c,local_30);
    }
    if ((cVar3 != '\0') && (plVar6 != (longlong *)0x0)) {
      *(undefined1 *)((longlong)plVar6 + 0x3d3) = 1;
      iVar4 = 0;
      do {
        if (iVar4 < (int)(uint)param_5) {
          *(undefined2 *)((longlong)plVar6 + (longlong)iVar4 * 2 + 0x26) = *param_8;
        }
        else {
          *(undefined2 *)((longlong)plVar6 + (longlong)iVar4 * 2 + 0x26) = 0xffff;
        }
        iVar4 = iVar4 + 1;
        param_8 = param_8 + 1;
      } while (iVar4 != 0x15);
    }
    uVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar6 + 0xa0))(plVar6,uVar7);
  }
  FUN_00801e40(*(undefined8 *)PTR_DAT_02004e40,
               *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  return;
}

