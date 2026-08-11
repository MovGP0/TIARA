/* Ghidra address: 01c33fa0 */
/* Ghidra symbol: FUN_01c33fa0 */


double FUN_01c33fa0(undefined8 param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                   undefined1 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  int local_84;
  double local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined1 local_56 [46];
  
  local_70[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_80 = 0.0;
  local_90 = param_1;
  if ((param_2 != 0) || (param_4 != (longlong *)0x0)) {
    local_84 = FUN_01c337e0(param_1);
    if (param_4 == (longlong *)0x0) {
      iVar2 = FUN_01c28540(param_2,param_3);
    }
    else {
      iVar2 = (**(code **)(*param_4 + 0x28))(param_4);
    }
    lVar3 = 0;
    if (DAT_03566790 != 0) {
      lVar3 = *(longlong *)(DAT_03566790 + -8);
    }
    if (lVar3 < iVar2) {
      FUN_004194b0(&local_60,DAT_03566790,&DAT_01c32ed8);
      FUN_00419260(&DAT_03566790,&DAT_01c32ed8,1,(longlong)iVar2);
      FUN_00419430(&local_60,&DAT_01c32ed8);
    }
    iVar6 = 0;
    iVar4 = iVar2;
    if (iVar2 - 1U < 0x80000000) {
      do {
        *(undefined1 *)(DAT_03566790 + iVar6) = 0;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar6 = 0;
    iVar4 = local_84;
    if (-1 < local_84 + -1) {
      do {
        FUN_00c411c0(local_90,local_56,iVar6);
        for (iVar7 = 0; iVar7 < iVar2; iVar7 = iVar7 + 1) {
          if (*(char *)(DAT_03566790 + iVar7) == '\0') {
            FUN_01c33f20(auStack_b8,local_70,iVar7);
            FUN_004169a0(&local_78,local_56);
            cVar1 = FUN_01c33800(local_70[0],local_78,param_5);
            if (cVar1 != '\0') break;
          }
        }
        if (iVar7 < iVar2) {
          *(undefined1 *)(DAT_03566790 + iVar7) = 1;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    local_80 = 0.0;
    if (0 < iVar2) {
      do {
        if (*(char *)(DAT_03566790 + iVar4) == '\0') {
          local_80 = local_80 + -0.5;
        }
        else {
          local_80 = local_80 + 1.0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    uVar5 = local_84 - iVar2 >> 0x1f;
    local_80 = local_80 + (double)(int)((local_84 - iVar2 ^ uVar5) - uVar5) * -1.5;
  }
  FUN_00414560(&local_78,2);
  FUN_00419430(&local_60,&DAT_01c32ed8);
  return local_80;
}

