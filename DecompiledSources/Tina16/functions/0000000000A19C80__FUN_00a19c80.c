/* Ghidra address: 00a19c80 */
/* Ghidra symbol: FUN_00a19c80 */


undefined8 FUN_00a19c80(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)param_1[5];
  pbVar6 = (byte *)*plVar2;
  lVar7 = plVar2[1];
  do {
    if (lVar7 == 0) {
      iVar5 = (*(code *)plVar2[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar6 = (byte *)*plVar2;
      lVar7 = plVar2[1];
    }
    lVar7 = lVar7 + -1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 == 0xff) {
      do {
        if (lVar7 == 0) {
          iVar5 = (*(code *)plVar2[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar6 = (byte *)*plVar2;
          lVar7 = plVar2[1];
        }
        lVar7 = lVar7 + -1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 == 0xff);
      lVar3 = param_1[0x49];
      if (bVar1 != 0) {
        if (*(int *)(lVar3 + 0x24) != 0) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x74;
          *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar3 + 0x24);
          *(uint *)(lVar4 + 0x30) = (uint)bVar1;
          (**(code **)(lVar4 + 8))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x49] + 0x24) = 0;
        }
        *(uint *)((longlong)param_1 + 0x21c) = (uint)bVar1;
        *plVar2 = (longlong)pbVar6;
        plVar2[1] = lVar7;
        return 1;
      }
      *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 2;
    }
    else {
      *(int *)(param_1[0x49] + 0x24) = *(int *)(param_1[0x49] + 0x24) + 1;
    }
    *plVar2 = (longlong)pbVar6;
    plVar2[1] = lVar7;
  } while( true );
}

