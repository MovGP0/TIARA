/* Ghidra address: 00c09e00 */
/* Ghidra symbol: FUN_00c09e00 */


void FUN_00c09e00(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 != *(uint *)((longlong)param_1 + 0x63a)) {
    uVar1 = *(uint *)((longlong)param_1 + 0x63a);
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x40000) == 0) {
      FUN_00bfb1b0(param_1,*(undefined4 *)((longlong)param_1 + 0x50c));
    }
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x20000) == 0) {
      FUN_00bfcc50(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
    }
    uVar3 = FUN_00c09df0(param_1);
    *(uint *)((longlong)param_1 + 0x63a) = param_2;
    local_40 = FUN_00bfaa10(param_1);
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_40);
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x40000) != 0) {
      local_30 = FUN_00bf2b30(param_1);
      local_38 = FUN_00bf2b90(param_1);
      FUN_00bfa470(param_1,&local_30);
      FUN_00bfa6c0(param_1,&local_38);
    }
    if ((((uVar1 & 0x20) != 0) != ((param_2 & 0x20) != 0)) &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      cVar2 = FUN_0065be20(param_1);
      if (cVar2 != '\0') {
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_03ea7391(uVar5,-(uint)((*(uint *)((longlong)param_1 + 0x63a) & 0x20) != 0));
      }
    }
    bVar6 = (param_2 & 0x100000) != 0;
    if (bVar6 != (bool)(char)param_1[0xfc]) {
      *(bool *)(param_1 + 0xfc) = bVar6;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    if ((uVar3 & 0x60408) != (param_2 & 0x60408)) {
      FUN_00bfd160(param_1);
    }
  }
  return;
}

