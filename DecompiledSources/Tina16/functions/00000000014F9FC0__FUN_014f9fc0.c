/* Ghidra address: 014f9fc0 */
/* Ghidra symbol: FUN_014f9fc0 */


void FUN_014f9fc0(longlong param_1,byte param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong local_158;
  uint local_14c;
  int local_13c;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [27];
  
  local_108[0] = 0;
  local_110 = 0;
  local_118 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_108)
  ;
  local_13c = -1;
  bVar2 = false;
  lVar6 = FUN_019a4600();
  do {
    local_13c = local_13c + 1;
    if (local_13c < *(int *)(lVar6 + 0x10)) {
      FUN_00b94e60(lVar6,local_13c);
      uVar7 = FUN_00b94e60(lVar6,local_13c);
      cVar3 = FUN_0198a580(uVar7);
      if (cVar3 == '\x04') {
        uVar7 = FUN_00b94e60(lVar6,local_13c);
        sVar4 = FUN_01d03160(uVar7);
        plVar8 = (longlong *)FUN_00b94e60(lVar6,local_13c);
        (**(code **)(*plVar8 + 0x288))(plVar8,&local_118);
        uVar7 = FUN_00b94e60(lVar6,local_13c);
        cVar3 = FUN_014f9c20(uVar7);
        if (cVar3 != '\0') {
          uVar7 = FUN_00b94e60(lVar6,local_13c);
          FUN_01aa13f0(local_138,uVar7,1);
          FUN_004169a0(&local_110,local_138);
          iVar5 = FUN_00416db0(local_108[0],local_110);
          if (iVar5 == 0) {
            lVar1 = *(longlong *)PTR_DAT_020050e8;
            iVar5 = 1;
            for (uVar10 = (uint)*(ushort *)(lVar1 + 0x10); uVar10 != 0; uVar10 = uVar10 - 1) {
              local_158 = *(longlong *)(lVar1 + 0x10 + (longlong)iVar5 * 8);
              lVar9 = FUN_00b94e60(lVar6,local_13c);
              if (*(longlong *)(local_158 + 0x550) == lVar9) break;
              iVar5 = iVar5 + 1;
            }
            if (sVar4 == 0xf0) {
LAB_014fa15f:
              local_14c = (uint)param_2;
            }
            else if (sVar4 == 0xf1) {
              local_14c = FUN_014fadf0(param_2);
            }
            else if (sVar4 == 0xf2) goto LAB_014fa15f;
            uVar10 = FUN_014fade0(*(undefined8 *)(local_158 + 0x550));
            if (uVar10 != local_14c) {
              FUN_014fad70(*(undefined8 *)(local_158 + 0x550),local_14c);
            }
          }
        }
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_00414560(&local_118,3);
      return;
    }
  } while( true );
}

