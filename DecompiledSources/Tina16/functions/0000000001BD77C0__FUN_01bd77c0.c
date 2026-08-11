/* Ghidra address: 01bd77c0 */
/* Ghidra symbol: FUN_01bd77c0 */


void FUN_01bd77c0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  cVar2 = FUN_01c02d10(param_1);
  if (cVar2 != '\0') {
    return;
  }
  if (param_1[0xb2] == 0) {
    if (param_1[0x93] != 0) {
      lVar4 = (**(code **)(*param_1 + 0x3a8))(param_1);
      lVar4 = (**(code **)(lVar4 + 0x78))(lVar4,1,param_1);
      param_1[0xb2] = lVar4;
      plVar1 = (longlong *)param_1[0xb2];
      FUN_0041ddd0(plVar1 + 0x1e,PTR_PTR_020027a8);
      FUN_01bd4200(plVar1,(&DAT_01fe09a4)[*(byte *)((longlong)param_1 + 0x4c3)]);
      FUN_0064c650(plVar1,(&DAT_01fe09a0)[*(byte *)((longlong)param_1 + 0x4c3)]);
      if (((*(ushort *)((longlong)plVar1 + 0x34) & 0x10) == 0) &&
         ((lVar4 = FUN_01bd7140(param_1), 0 < (int)lVar4 ||
          (lVar4 = param_1[0x94], *(longlong *)(lVar4 + 0x120) != 0)))) {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      else {
        uVar3 = 0;
      }
      (**(code **)(*plVar1 + 0x128))(plVar1,uVar3);
      (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
      FUN_0064e0c0(plVar1,1);
      uVar3 = FUN_01bfab60(param_1[0x93]);
      FUN_01c060c0(plVar1,uVar3);
      (**(code **)(*(longlong *)param_1[0xb2] + 0x260))((longlong *)param_1[0xb2]);
      plVar1[0x70] = (longlong)param_1;
      plVar1[0x6f] = (longlong)FUN_01bd7660;
      return;
    }
    return;
  }
  return;
}

