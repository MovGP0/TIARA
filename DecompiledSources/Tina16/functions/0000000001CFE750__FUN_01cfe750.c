/* Ghidra address: 01cfe750 */
/* Ghidra symbol: FUN_01cfe750 */


void FUN_01cfe750(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_4c;
  undefined1 local_3a;
  char local_39;
  undefined1 local_38 [15];
  undefined1 local_29;
  
  FUN_01d03160(param_1);
  local_4c = 1;
  for (iVar6 = (uint)*(ushort *)(param_1 + 0xf2) + (uint)*(ushort *)(param_1 + 0xf4); iVar6 != 0;
      iVar6 = iVar6 + -1) {
    lVar4 = *(longlong *)(param_1 + 0x168) + (longlong)local_4c * 99;
    FUN_01cffd90(param_1,*(undefined8 *)(lVar4 + 0x5b));
    plVar1 = *(longlong **)(lVar4 + 0x5b);
    uVar2 = FUN_01d38290(plVar1,1);
    *PTR_DAT_02002ce0 = uVar2;
    FUN_01d03160(plVar1);
    uVar3 = FUN_01cfd2d0();
    uVar3 = uVar3 & 0xff;
    iVar5 = 0;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        local_39 = (**(code **)(*plVar1 + 0x2d0))(plVar1,iVar5,local_38);
        if (local_39 == '\t') {
          lVar4 = FUN_01cfde70(plVar1,iVar5 + 1,0,&local_39,&local_3a,&local_29);
          *(undefined2 *)(lVar4 + 0x1f) = 0xffff;
        }
        iVar5 = iVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    local_4c = local_4c + 1;
  }
  return;
}

