/* Ghidra address: 0154d7d0 */
/* Ghidra symbol: FUN_0154d7d0 */


void FUN_0154d7d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_4c = -1;
  bVar2 = false;
  lVar1 = *(longlong *)(param_1 + 0x748);
  do {
    local_4c = local_4c + 1;
    if (local_4c < *(int *)(lVar1 + 0x10)) {
      uVar6 = FUN_00b94e60(lVar1,local_4c);
      cVar3 = FUN_0198a580(uVar6);
      if (cVar3 == '\x04') {
        plVar7 = (longlong *)FUN_00b94e60(lVar1,local_4c);
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
        uVar6 = FUN_00b94e60(lVar1,local_4c);
        cVar3 = FUN_0154d040(param_1,uVar6);
        if (cVar3 != '\0') {
          plVar7 = (longlong *)FUN_00b94e60(lVar1,local_4c);
          uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
          plVar8 = (longlong *)FUN_00b94e60(lVar1,local_4c);
          sVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (sVar4 == 0x3ec) {
LAB_0154d8f4:
            uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,1);
          }
          else {
            plVar8 = (longlong *)FUN_00b94e60(lVar1,local_4c);
            sVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (sVar4 == 0x3fe) goto LAB_0154d8f4;
            plVar8 = (longlong *)FUN_00b94e60(lVar1,local_4c);
            sVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (sVar4 == 0x91) goto LAB_0154d8f4;
          }
          uVar6 = FUN_00b94e60(lVar1,local_4c);
          FUN_0155fcf0(param_1,&local_38,uVar6,param_1 + 0x960,uVar5,
                       *(undefined1 *)(param_1 + 0x94b));
          lVar9 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),uVar5);
          if (lVar9 == 0) {
            lVar9 = FUN_015710a0(&DAT_0156d6c8,1,uVar5,*(undefined1 *)(param_1 + 0x94e));
            FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),lVar9);
            FUN_01571520(lVar9,local_38);
            *(undefined4 *)(lVar9 + 0x5c) = 1;
          }
          else if (*(int *)(lVar9 + 0x5c) == 3) {
            FUN_01571520(lVar9,local_38);
          }
          FUN_015714d0(lVar9,1);
          lVar10 = FUN_00b94e60(lVar1,local_4c);
          *(undefined4 *)(lVar9 + 0x68) = *(undefined4 *)(lVar10 + 0x10);
          lVar10 = FUN_00b94e60(lVar1,local_4c);
          *(undefined4 *)(lVar9 + 0x6c) = *(undefined4 *)(lVar10 + 0xc);
        }
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_00414560(&local_40,3);
      return;
    }
  } while( true );
}

