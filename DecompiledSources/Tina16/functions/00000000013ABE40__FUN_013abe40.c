/* Ghidra address: 013abe40 */
/* Ghidra symbol: FUN_013abe40 */


void FUN_013abe40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  lVar4 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550));
  if (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) == *(longlong *)(lVar4 + 0x18)) {
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550);
    uVar5 = FUN_006df4b0(uVar6);
    (**(code **)(*param_2 + 0x288))(param_2,&local_38);
    FUN_013ab210(local_30,local_38);
    uVar6 = FUN_006dee70(uVar6,uVar5,local_30[0],param_2);
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar2 == 0x39) {
      FUN_013ac4d0(param_1,uVar6);
    }
    FUN_006e1e60(*(undefined8 *)(param_1 + 0x6b8),FUN_013ab2f0,0,1);
  }
  else {
    iVar3 = FUN_006decb0();
    iVar7 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar7);
        plVar1 = *(longlong **)(lVar4 + 0x18);
        if (((((undefined **)*plVar1 != &PTR_FUN_01984d18) &&
             (sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0x39)) &&
            ((char)plVar1[0x34] == '\x01')) &&
           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) == *(longlong *)(plVar1[0x35] + 8)
           )) {
          uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550);
          uVar5 = FUN_006df500(uVar6,iVar7);
          (**(code **)(*param_2 + 0x288))(param_2,&local_48);
          FUN_013ab210(&local_40,local_48);
          uVar6 = FUN_006dee70(uVar6,uVar5,local_40,param_2);
          sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
          if (sVar2 == 0x39) {
            FUN_013ac4d0(param_1,uVar6);
          }
          FUN_006e1e60(*(undefined8 *)(param_1 + 0x6b8),FUN_013ab2f0,0,1);
          break;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

