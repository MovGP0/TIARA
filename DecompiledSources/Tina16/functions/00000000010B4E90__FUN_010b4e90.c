/* Ghidra address: 010b4e90 */
/* Ghidra symbol: FUN_010b4e90 */


void FUN_010b4e90(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_458 [32];
  longlong *local_438;
  int local_42c;
  undefined1 local_428 [1024];
  
  local_438 = param_1;
  lVar3 = FUN_00a39e90(param_1);
  if (*(byte *)(lVar3 + 0x491) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar3 >> 8),1) << (*(byte *)(lVar3 + 0x491) & 0x1f) &
            0x11U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    lVar3 = FUN_00a39e90(local_438);
    if (*(char *)(lVar3 + 0x491) == '\x03') {
      uVar4 = (**(code **)(*local_438 + 0x50))(local_438);
      iVar1 = thunk_FUN_041a3f2d(uVar4,0,0x100,local_428);
      if (-1 < iVar1 + -1) {
        puVar6 = local_428;
        iVar7 = iVar1;
        do {
          FUN_010b4cd0(auStack_458,puVar6,puVar6 + 1,puVar6 + 2);
          puVar6 = puVar6 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      thunk_FUN_041d43a8(uVar4,0,iVar1,local_428);
      (**(code **)(*local_438 + 0x78))(local_438,uVar4);
    }
    else {
      iVar1 = (**(code **)(*local_438 + 0x48))();
      iVar7 = 0;
      if (-1 < iVar1 + -1) {
        do {
          lVar3 = FUN_00a3c240(local_438,iVar7);
          iVar2 = (**(code **)(*local_438 + 0x60))();
          local_42c = 0;
          if (-1 < iVar2 + -1) {
            do {
              lVar5 = (longlong)local_42c;
              FUN_010b4cd0(auStack_458,lVar3 + 2 + lVar5 * 3,lVar3 + 1 + lVar5 * 3,lVar3 + lVar5 * 3
                          );
              local_42c = local_42c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}

