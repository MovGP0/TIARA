/* Ghidra address: 0179c590 */
/* Ghidra symbol: FUN_0179c590 */


void FUN_0179c590(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  plVar5 = (longlong *)FUN_007fc180(&PTR_FUN_0177e148,1,*(undefined8 *)PTR_DAT_02004030);
  lVar1 = *(longlong *)(param_1 + 0xca8);
  FUN_0064de00(plVar5[0xdb],*(undefined8 *)(lVar1 + 0x10));
  (**(code **)(*(longlong *)plVar5[0xdc] + 0x268))
            ((longlong *)plVar5[0xdc],*(undefined1 *)(lVar1 + 0xc));
  (**(code **)(*(longlong *)plVar5[0xe0] + 0x268))
            ((longlong *)plVar5[0xe0],
             CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),(*(uint *)(lVar1 + 8) & 1) != 0));
  (**(code **)(*(longlong *)plVar5[0xe1] + 0x268))
            ((longlong *)plVar5[0xe1],
             CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),(*(uint *)(lVar1 + 8) & 2) != 0));
  (**(code **)(*(longlong *)plVar5[0xe2] + 0x268))
            ((longlong *)plVar5[0xe2],*(undefined1 *)(lVar1 + 0xe));
  FUN_0064de00(plVar5[0xdd],*(undefined8 *)(lVar1 + 0x18));
  iVar4 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
  if (iVar4 == 1) {
    FUN_0064dd90(plVar5[0xdb],local_30);
    FUN_00414ad0(lVar1 + 0x10,local_30[0]);
    uVar2 = (**(code **)(*(longlong *)plVar5[0xdc] + 0x260))((longlong *)plVar5[0xdc]);
    *(undefined1 *)(lVar1 + 0xc) = uVar2;
    FUN_0064dd90(plVar5[0xdd],&local_38);
    FUN_00414ad0(lVar1 + 0x18,local_38);
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffffc;
    cVar3 = (**(code **)(*(longlong *)plVar5[0xe0] + 0x260))((longlong *)plVar5[0xe0]);
    if (cVar3 != '\0') {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 1;
    }
    cVar3 = (**(code **)(*(longlong *)plVar5[0xe1] + 0x260))((longlong *)plVar5[0xe1]);
    if (cVar3 != '\0') {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 2;
    }
    uVar2 = (**(code **)(*(longlong *)plVar5[0xe2] + 0x260))((longlong *)plVar5[0xe2]);
    *(undefined1 *)(lVar1 + 0xe) = uVar2;
    FUN_017989e0(param_1);
    FUN_01795670(param_1,1);
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_38,2);
  return;
}

