/* Ghidra address: 00c0f4d0 */
/* Ghidra symbol: FUN_00c0f4d0 */


undefined8 FUN_00c0f4d0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar5 = (ulonglong)param_2;
  plVar1 = (longlong *)param_1[0xa7];
  uVar4 = (ushort)param_2;
  if (plVar1 == (longlong *)0x0) {
    cVar3 = 0x20 < uVar4;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 400))(plVar1,uVar5);
  }
  lVar2 = param_1[0xa7];
  if (lVar2 == 0) {
    if (cVar3 == '\0') {
      local_68 = param_1[0x113];
      lStack_60 = param_1[0x114];
      lStack_58 = param_1[0x115];
      lStack_50 = param_1[0x116];
      if (uVar4 < 0x100) {
        bVar6 = (*(byte *)((longlong)&local_68 + ((longlong)(uVar5 & 0xffff) >> 3)) >> (uVar5 & 7) &
                1) != 0;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = true;
    }
  }
  else if (cVar3 == '\0') {
    local_48 = *(undefined8 *)(lVar2 + 0xad);
    uStack_40 = *(undefined8 *)(lVar2 + 0xb5);
    uStack_38 = *(undefined8 *)(lVar2 + 0xbd);
    uStack_30 = *(undefined8 *)(lVar2 + 0xc5);
    if (uVar4 < 0x100) {
      bVar6 = (*(byte *)((longlong)&local_48 + ((longlong)(uVar5 & 0xffff) >> 3)) >> (uVar5 & 7) & 1
              ) != 0;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = true;
  }
  if ((bVar6) && (cVar3 = (**(code **)(*param_1 + 0x370))(param_1,uVar5), cVar3 == '\0')) {
    return 1;
  }
  return 0;
}

