/* Ghidra address: 00800030 */
/* Ghidra symbol: FUN_00800030 */


void FUN_00800030(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 != 0) {
    iVar2 = FUN_00808090();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_00808070(DAT_02012670,iVar7);
        if ((*(longlong *)(lVar3 + 0x500) == param_2) &&
           (lVar3 = FUN_00808070(DAT_02012670,iVar7), lVar3 != param_1)) {
          FUN_0041ddd0(&local_20,PTR_PTR_020023f0);
          local_30 = *(undefined8 *)(param_2 + 0x10);
          local_28 = 0x11;
          uVar4 = FUN_0044d530(&PTR_FUN_00472870,1,local_20,&local_30,0);
          FUN_004134c0(uVar4);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_007e6950(*(longlong *)(param_1 + 0x500),0);
  }
  if (((*(ushort *)(param_1 + 0x34) & 8) != 0) ||
     ((local_38 = param_2, param_2 != 0 && ((*(ushort *)(param_2 + 0x34) & 8) != 0)))) {
    local_38 = 0;
  }
  *(longlong *)(param_1 + 0x500) = local_38;
  if ((local_38 == 0) ||
     ((FUN_004d26c0(local_38,param_1), (*(ushort *)(param_1 + 0x34) & 0x10) == 0 &&
      (*(char *)(param_1 + 0x4d1) == '\x03')))) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_039aab05(uVar4,0);
    }
  }
  else if (((*(char *)(*(longlong *)(param_1 + 0x500) + 0xd0) == '\0') &&
           (*(char *)(param_1 + 0x4d6) != '\x01')) || ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar4 = FUN_0065b870(param_1);
      lVar3 = thunk_FUN_041ed8e5(uVar4);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x90))
                        (*(longlong **)(param_1 + 0x500));
      if ((lVar3 != lVar5) &&
         (((cVar1 = FUN_00781870(), cVar1 == '\0' || (*PTR_DAT_02001378 == '\x01')) ||
          ((*(byte *)(param_1 + 0x2c8) & 4) == 0)))) {
        uVar4 = FUN_0065b870(param_1);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x90))
                          (*(longlong **)(param_1 + 0x500));
        thunk_FUN_039aab05(uVar4,uVar6);
      }
      uVar4 = FUN_0065b870(param_1);
      FUN_007e6950(local_38,uVar4);
    }
  }
  else if ((*(char *)(param_1 + 0x4d6) != '\x01') && (cVar1 = FUN_0065be20(param_1), cVar1 != '\0'))
  {
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_039aab05(uVar4,0);
  }
  if (*(char *)(param_1 + 0x4d5) != '\0') {
    FUN_008027e0(param_1,1);
  }
  FUN_007fff00(param_1);
  if (((*(longlong *)(param_1 + 0x510) != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_041cc6e2(uVar4,0,0,0,0,0,0x37);
    FUN_0064fca0(param_1,0x85,0,0);
    FUN_0064fca0(param_1,0xf,0,0);
  }
  FUN_00414480(&local_20);
  return;
}

