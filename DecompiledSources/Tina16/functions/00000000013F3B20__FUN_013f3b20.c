/* Ghidra address: 013f3b20 */
/* Ghidra symbol: FUN_013f3b20 */


void FUN_013f3b20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int local_74;
  int local_5c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x718) + 0x4a8) == 1) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_74 = 0;
    do {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,local_40,local_74 + 0x24a);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_40[0]);
      local_74 = local_74 + 1;
    } while (local_74 != 2);
    local_30 = *(undefined8 *)(**(longlong **)(param_1 + 0x790) + 0x10);
    lVar5 = FUN_00409570((ulonglong)*(byte *)(**(longlong **)(param_1 + 0x790) + 0x19) << 3);
    uVar4 = *(undefined8 *)(param_1 + 0x728);
    lVar2 = **(longlong **)(param_1 + 0x790);
    FUN_008483e0(uVar4,*(byte *)(lVar2 + 0x19) + 2);
    uVar8 = (uint)*(byte *)(lVar2 + 0x19);
    local_74 = 0;
    if (-1 < (int)(uVar8 - 1)) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x18))
                  (*(longlong **)(param_1 + 0x7a8),&local_48,local_74);
        FUN_0084e3e0(uVar4,local_74 + 2,0,local_48);
        local_74 = local_74 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar8 = (uint)*(byte *)(lVar2 + 0x18);
    local_5c = 0;
    if (-1 < (int)(uVar8 - 1)) {
      do {
        uVar9 = (uint)*(byte *)(lVar2 + 0x19);
        local_74 = 0;
        if (-1 < (int)(uVar9 - 1)) {
          do {
            lVar7 = (longlong)local_74;
            cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + lVar7);
            if (cVar1 == '\x01') {
              uVar4 = FUN_00b08760(&PTR_FUN_0142e950,1,local_30,local_5c);
              *(undefined8 *)(lVar5 + lVar7 * 8) = uVar4;
              FUN_00b909d0(&local_30,4);
            }
            else if (cVar1 == '\x02') {
              uVar4 = FUN_00b08760(&PTR_FUN_0142e6a0,1,local_30,local_5c);
              *(undefined8 *)(lVar5 + lVar7 * 8) = uVar4;
              FUN_00b909d0(&local_30,1);
            }
            else if (cVar1 == '\x03') {
              puVar6 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,local_30,local_5c);
              (**(code **)*puVar6)(puVar6,plVar3);
              *(undefined8 **)(lVar5 + lVar7 * 8) = puVar6;
              FUN_00b909d0(&local_30,1);
            }
            local_74 = local_74 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        FUN_00b0af30(*(undefined8 *)(param_1 + 0x728),2,local_5c,*(undefined1 *)(lVar2 + 0x19),lVar5
                    );
        local_5c = local_5c + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    FUN_00410f20(plVar3);
    FUN_004095f0(lVar5,(ulonglong)*(byte *)(**(longlong **)(param_1 + 0x790) + 0x19) << 3);
  }
  FUN_00414560(&local_48,2);
  return;
}

