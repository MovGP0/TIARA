/* Ghidra address: 00a10240 */
/* Ghidra symbol: FUN_00a10240 */


undefined8 FUN_00a10240(undefined8 *param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  
  pbVar7 = (byte *)*param_1;
  lVar8 = param_1[1];
  plVar2 = (longlong *)param_1[3];
  if (*(int *)((longlong)plVar2 + 0x21c) == 0) {
    iVar9 = param_3;
    if (param_3 < 0x19) {
      do {
        if (lVar8 == 0) {
          iVar5 = (**(code **)(plVar2[5] + 0x18))(plVar2);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar7 = *(byte **)plVar2[5];
          lVar8 = ((undefined8 *)plVar2[5])[1];
        }
        lVar8 = lVar8 + -1;
        bVar1 = *pbVar7;
        uVar6 = (uint)bVar1;
        pbVar7 = pbVar7 + 1;
        if (bVar1 == 0xff) {
          do {
            if (lVar8 == 0) {
              iVar5 = (**(code **)(plVar2[5] + 0x18))(plVar2);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar7 = *(byte **)plVar2[5];
              lVar8 = ((undefined8 *)plVar2[5])[1];
            }
            lVar8 = lVar8 + -1;
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar1 == 0xff);
          if (bVar1 != 0) {
            *(uint *)((longlong)plVar2 + 0x21c) = (uint)bVar1;
            param_3 = iVar9;
            goto joined_r0x00a10353;
          }
          uVar6 = 0xff;
        }
        param_2 = param_2 << 8 | uVar6;
        param_3 = iVar9 + 8;
        bVar4 = iVar9 < 0x11;
        iVar9 = param_3;
      } while (bVar4);
    }
  }
  else {
joined_r0x00a10353:
    if (param_3 < param_4) {
      if (*(int *)(plVar2[0x4a] + 0x10) == 0) {
        lVar3 = *plVar2;
        *(undefined4 *)(lVar3 + 0x28) = 0x75;
        (**(code **)(lVar3 + 8))(plVar2,0xffffffff);
        *(undefined4 *)(plVar2[0x4a] + 0x10) = 1;
      }
      param_2 = param_2 << (0x19U - (char)param_3 & 0x1f);
      param_3 = 0x19;
    }
  }
  *param_1 = pbVar7;
  param_1[1] = lVar8;
  *(uint *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  return 1;
}

