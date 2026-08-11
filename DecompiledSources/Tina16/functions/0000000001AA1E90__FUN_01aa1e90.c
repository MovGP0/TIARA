/* Ghidra address: 01aa1e90 */
/* Ghidra symbol: FUN_01aa1e90 */


void FUN_01aa1e90(longlong param_1,undefined8 param_2,char param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 local_108 [28];
  int local_ec;
  int local_e8;
  undefined1 local_e4 [129];
  short local_63;
  short local_61;
  
  bVar2 = FUN_01d01970(param_1);
  if (((param_4 & bVar2) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
    if (*(char *)(lVar5 + 0xb3) != '\0') {
      plVar6 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(plVar6,6);
      FUN_01aa1ce0(*(undefined8 *)(param_1 + 0x180),plVar6);
      (**(code **)(*plVar6 + 0x80))(plVar6,1);
      plVar7 = (longlong *)FUN_00609e10(plVar6);
      uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,0,0);
      FUN_0060be30(plVar6,uVar3);
      if (param_3 != '\0') {
        FUN_01a9ee60(param_2,plVar6,3,0x3c);
      }
      plVar6 = (longlong *)FUN_01a9eff0(param_2,plVar6,*(undefined1 *)(param_1 + 0xd1));
      FUN_01cfac60(param_1,local_e4);
      iVar9 = *(int *)(param_1 + 0xc);
      iVar10 = *(int *)(param_1 + 0x10);
      if (*(char *)(param_1 + 0xd3) == '\0') {
        iVar11 = 1;
      }
      else {
        iVar11 = -1;
      }
      cVar1 = *(char *)(param_1 + 0xd1);
      iVar4 = (int)local_63;
      iVar8 = (int)local_61;
      if (cVar1 == '\0') {
        iVar9 = iVar9 + iVar11 * iVar4;
        iVar10 = iVar10 + iVar8;
      }
      else if (cVar1 == '\x01') {
        iVar9 = iVar9 + iVar8;
        iVar10 = iVar10 - iVar11 * iVar4;
      }
      else if (cVar1 == '\x02') {
        iVar9 = iVar9 - iVar11 * iVar4;
        iVar10 = iVar10 - iVar8;
      }
      else if (cVar1 == '\x03') {
        iVar9 = iVar9 - iVar8;
        iVar10 = iVar10 + iVar11 * iVar4;
      }
      piVar12 = &local_ec;
      FUN_01a98380(param_2,iVar9,iVar10,&local_e8,piVar12);
      uVar3 = (undefined4)((ulonglong)piVar12 >> 0x20);
      iVar9 = (**(code **)(*plVar6 + 0x60))(plVar6);
      iVar10 = (**(code **)(*plVar6 + 0x48))(plVar6,(longlong)iVar9 % 2 & 0xffffffff);
      plVar7 = (longlong *)FUN_01a97e00(param_2,(longlong)iVar10 % 2 & 0xffffffff);
      FUN_00498350(local_108,local_e8 - iVar9 / 2,local_ec - iVar10 / 2,local_e8 + iVar9 / 2,
                   CONCAT44(uVar3,local_ec + iVar10 / 2));
      (**(code **)(*plVar7 + 0x110))(plVar7,local_108,plVar6);
      FUN_01a97ea0(param_2,plVar7);
      FUN_00410f20(plVar6);
    }
  }
  return;
}

