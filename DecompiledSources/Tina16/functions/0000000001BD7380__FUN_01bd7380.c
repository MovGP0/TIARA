/* Ghidra address: 01bd7380 */
/* Ghidra symbol: FUN_01bd7380 */


void FUN_01bd7380(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_38;
  undefined1 local_30 [16];
  longlong local_20;
  
  cVar2 = FUN_01c02d10(param_1);
  if ((cVar2 == '\0') && ((int)param_1[0xae] < 1)) {
    if (param_1[0xb2] == 0) {
      local_48 = 0;
      FUN_004238d0(local_30,0,0,0);
    }
    else {
      FUN_0064d000(param_1[0xb2],local_30);
    }
    local_20 = FUN_01c01230(param_1);
    if (local_20 != 0) {
      cVar2 = FUN_01bd7160(auStack_68,*(undefined8 *)(local_20 + 0x80));
      if (cVar2 == '\0') {
        if ((param_1[0xb0] != 0) && (iVar3 = FUN_00611650(param_1[0xb0]), 0 < iVar3)) {
          uVar7 = (**(code **)(*(longlong *)param_1[0xb0] + 0x10))((longlong *)param_1[0xb0]);
          cVar2 = FUN_01bd7160(auStack_68,uVar7);
          if (cVar2 == '\0') {
            if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
              lVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x10))((longlong *)param_1[0xb0]);
              *(uint *)(lVar6 + 0xa0) = *(uint *)(lVar6 + 0xa0) | 0x400;
            }
            lVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x10))((longlong *)param_1[0xb0]);
            if (*(char *)(*(longlong *)(lVar6 + 800) + 0x58) != '\0') {
              uVar7 = (**(code **)(*(longlong *)param_1[0xb0] + 8))((longlong *)param_1[0xb0]);
              FUN_0064dbe0(uVar7,1);
            }
            if ((param_1[0xb0] != 0) && (iVar3 = FUN_00611650(param_1[0xb0]), iVar3 == 0)) {
              local_38 = param_1 + 0xb0;
              lVar6 = *local_38;
              *local_38 = 0;
              FUN_00410f20(lVar6);
            }
          }
        }
      }
      else {
        lVar5 = FUN_01bfaa70(param_1[0x93]);
        lVar6 = local_20;
        if (*(char *)(lVar5 + 0x4a) != '\0') {
          lVar6 = FUN_01c01050(param_1,1);
        }
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0x58) != '\0')) &&
           (lVar5 = FUN_01c01290(param_1), local_20 != lVar5)) {
          if (param_1[0xb0] == 0) {
            lVar5 = FUN_00611660(&PTR_FUN_01bd6720,1);
            param_1[0xb0] = lVar5;
            (**(code **)(*param_1 + 0x3c0))(param_1);
          }
          if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
            *(uint *)(*(longlong *)(lVar6 + 0x80) + 0xa0) =
                 *(uint *)(*(longlong *)(lVar6 + 0x80) + 0xa0) | 0x400;
          }
          FUN_00611620(param_1[0xb0],*(undefined8 *)(lVar6 + 0x80));
          FUN_0064dbe0(*(undefined8 *)(lVar6 + 0x80),0);
        }
      }
    }
    plVar1 = (longlong *)param_1[0xb2];
    if (plVar1 != (longlong *)0x0) {
      if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
         ((lVar6 = FUN_01bd7140(param_1), 0 < (int)lVar6 ||
          (lVar6 = param_1[0x94], *(longlong *)(lVar6 + 0x120) != 0)))) {
        uVar4 = (undefined4)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*plVar1 + 0x128))(plVar1,uVar4);
    }
  }
  return;
}

