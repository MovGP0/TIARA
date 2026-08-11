/* Ghidra address: 016cfcd0 */
/* Ghidra symbol: FUN_016cfcd0 */


void FUN_016cfcd0(longlong param_1,undefined1 param_2,longlong *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_19c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined4 local_13c;
  undefined1 local_138 [264];
  
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150[0] = 0;
  local_158 = 0;
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar10 = *(longlong *)(lVar6 + 0xe70);
  }
  else {
    lVar10 = 0;
  }
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x1a8) + 8);
    iVar4 = *(int *)(lVar10 + 0x10);
    if ((iVar4 == *(int *)(lVar6 + 0x10)) && (local_19c = 0, -1 < iVar4 + -1)) {
      do {
        plVar7 = (longlong *)FUN_00b94e60(lVar10,local_19c);
        plVar8 = (longlong *)FUN_00b94e60(lVar6,local_19c);
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_170);
        (**(code **)(*plVar8 + 0x288))(plVar8,&local_178);
        iVar5 = FUN_00416db0(local_170,local_178);
        if (iVar5 == 0) {
          sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (sVar2 == sVar3) {
            uVar9 = FUN_01cfd6a0(plVar7);
            FUN_01cfd660(plVar8,uVar9);
          }
        }
        local_19c = local_19c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = (**(code **)(*param_3 + 0x28))();
    local_19c = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_004b3cf0(param_3,&local_158,local_19c);
        FUN_0043e130(local_150,local_158);
        FUN_00416910(local_138,local_150[0],0xff);
        cVar1 = FUN_01d350f0(*(undefined8 *)(lVar10 + 0x9e0),local_138,&local_13c);
        if (cVar1 != '\0') {
          lVar6 = FUN_01d347d0(*(undefined8 *)(lVar10 + 0x9e0),local_13c);
          FUN_004b5390(param_3,&local_168,local_19c);
          FUN_0043e130(&local_160,local_168);
          FUN_00415dd0(lVar6 + 0x10,local_160,0);
          *(undefined8 *)(lVar6 + 0x28) = 0;
        }
        local_19c = local_19c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_016cfb60(*(undefined8 *)(param_1 + 8),lVar10,param_2);
  }
  FUN_00414560(&local_178,6);
  return;
}

