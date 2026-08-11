/* Ghidra address: 00bf4160 */
/* Ghidra symbol: FUN_00bf4160 */


void FUN_00bf4160(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 local_20;
  
  if ((*(ushort *)(param_1 + 199) & 4) != 0) {
    cVar4 = FUN_00be1b80(param_1[0x95],param_1[0x9d]);
    if (cVar4 != '\0') {
      plVar2 = (longlong *)param_1[0xa7];
      if (plVar2 != (longlong *)0x0) {
        cVar4 = FUN_004113d0(plVar2,&PTR_FUN_00bdbcc0);
        if (cVar4 != '\0') {
          (**(code **)(*plVar2 + 0x1b8))(plVar2,param_1[0x95],param_1[0x9d]);
        }
      }
      FUN_00bf3760(param_1);
      *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 2;
    }
  }
  *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfffb;
  cVar4 = FUN_0065be20(param_1);
  if (cVar4 != '\0') {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x5f5);
    local_20 = FUN_00bfaa10(param_1);
    FUN_00bfa470(param_1,&local_20);
    *(undefined1 *)((longlong)param_1 + 0x5f5) = uVar1;
    (**(code **)(*param_1 + 0x268))(param_1,param_1 + 0xc5,0);
    FUN_0040d200(param_1 + 0xc5,0x10,0);
    lVar3 = param_1[0xc2];
    if ((*(char *)(lVar3 + 0x1c) != '\0') && (*(char *)(lVar3 + 0x4c) != '\0')) {
      uVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
      FUN_00bbaa40(lVar3,uVar5);
    }
    uVar6 = FUN_00c09df0(param_1);
    if ((uVar6 & 0x20000) == 0) {
      FUN_00bfcc50(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
    }
  }
  return;
}

