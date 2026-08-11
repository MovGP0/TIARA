/* Ghidra address: 00e13db0 */
/* Ghidra symbol: FUN_00e13db0 */


longlong FUN_00e13db0(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined1 *local_30 [2];
  
  local_38 = 0;
  FUN_017ff4f0(param_1,&local_38);
  lVar6 = FUN_00e13bd0(&DAT_00e12838,1);
  FUN_00414ad0(lVar6 + 0x28,local_38);
  *(undefined4 *)(lVar6 + 0x24) = param_2;
  cVar2 = FUN_0198a580(param_1);
  if (cVar2 == '\x05') {
    *(undefined4 *)(lVar6 + 0x18) = 4;
    *(undefined1 *)(lVar6 + 8) = 0;
    uVar5 = FUN_00e13da0(*(byte *)((longlong)param_1 + 0x3f9) + 1,0);
    *(undefined4 *)(lVar6 + 0x1c) = uVar5;
  }
  else {
    uVar3 = FUN_01d03160(param_1);
    *(uint *)(lVar6 + 0x18) = (uint)uVar3;
    *(longlong **)(lVar6 + 0x10) = param_1;
    cVar2 = FUN_01d3f210(param_1);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar6 + 8) = 0;
      if (param_1[0xa5] != 0) {
        sVar4 = FUN_01d03160(param_1[0xa5]);
        if (sVar4 == 0x2900) {
          *(undefined4 *)(lVar6 + 0x20) = 1;
        }
      }
      if (*(int *)(lVar6 + 0x18) == 4) {
        (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
        uVar1 = *local_30[0];
        (**(code **)(*param_1 + 0x2d0))(param_1,1,local_30);
        uVar5 = FUN_00e13da0(uVar1,*local_30[0]);
        *(undefined4 *)(lVar6 + 0x1c) = uVar5;
      }
    }
    else {
      *(undefined1 *)(lVar6 + 8) = 1;
    }
  }
  FUN_00414480(&local_38);
  return lVar6;
}

