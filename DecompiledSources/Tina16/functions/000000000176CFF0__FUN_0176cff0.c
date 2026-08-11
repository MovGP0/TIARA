/* Ghidra address: 0176cff0 */
/* Ghidra symbol: FUN_0176cff0 */


void FUN_0176cff0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_188 [256];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  int local_48;
  undefined1 local_44 [4];
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_88 = 0;
  local_40[0] = 0;
  if ((*(char *)(param_1 + 0x110) == '\x01') &&
     (puVar3 = (undefined8 *)FUN_00ee5950(0,*(undefined8 *)(param_1 + 0xb0),&local_48,0,0,0),
     puVar3 != (undefined8 *)0x0)) {
    uVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),0);
    iVar1 = FUN_00c3d260(uVar4,local_44);
    iVar8 = *(int *)(puVar3 + 2);
    local_48 = 0;
    if (-1 < iVar8 + -1) {
      do {
        plVar5 = (longlong *)FUN_00b94e60(puVar3,(*(int *)(puVar3 + 2) - local_48) + -1);
        (**(code **)(*plVar5 + 0x288))(plVar5,local_40);
        iVar7 = 0;
        iVar9 = iVar1;
        if (-1 < iVar1 + -1) {
LAB_0176d105:
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                            (*(longlong **)(param_1 + 0xc0));
          if (iVar2 <= local_48) goto LAB_0176d25f;
          FUN_00c3d330(uVar4,local_78,iVar7);
          FUN_004169a0(&local_80,local_78);
          (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))
                    (*(longlong **)(param_1 + 0xc0),&local_88,local_48);
          iVar2 = FUN_00416db0(local_80,local_88);
          if (iVar2 != 0) goto LAB_0176d25f;
          iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x38) + 0x10);
          iVar2 = 0;
          if (-1 < iVar9 + -1) {
            do {
              uVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),iVar2);
              uVar6 = FUN_00c3d2f0(uVar6,iVar7);
              FUN_00416910(local_188,local_40[0],0xff);
              FUN_00415020(uVar6,local_188,0x10);
              iVar2 = iVar2 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))
                    (*(longlong **)(param_1 + 0xc0),local_48,local_40[0]);
          iVar9 = (**(code **)(**(longlong **)(param_1 + 200) + 0x28))
                            (*(longlong **)(param_1 + 200));
          if (local_48 < iVar9) {
            (**(code **)(**(longlong **)(param_1 + 200) + 0x40))
                      (*(longlong **)(param_1 + 200),local_48,local_40[0]);
          }
        }
code_r0x0176d26e:
        local_48 = local_48 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar4 = (**(code **)*puVar3)(puVar3);
    FUN_00418590(uVar4,&DAT_01984da0);
    *(undefined1 *)(param_1 + 0x110) = 0;
    FUN_00414480(param_1 + 0xf8);
  }
  FUN_00414560(&local_88,2);
  FUN_00414480(local_40);
  return;
LAB_0176d25f:
  iVar7 = iVar7 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) goto code_r0x0176d26e;
  goto LAB_0176d105;
}

