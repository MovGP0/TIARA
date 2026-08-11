/* Ghidra address: 01c47fb0 */
/* Ghidra symbol: FUN_01c47fb0 */


void FUN_01c47fb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar1 = FUN_0198a580(plVar3);
      if ((cVar1 == '\x04') && (iVar2 = FUN_01cfd2d0(plVar3), 0 < iVar2)) {
        uVar4 = FUN_01cfd030(plVar3,0);
        if ((byte)uVar4 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x48U)
                  != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          (**(code **)(*plVar3 + 0x288))(plVar3,local_30);
          (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(local_30);
  return;
}

