/* Ghidra address: 01ab6720 */
/* Ghidra symbol: FUN_01ab6720 */


void FUN_01ab6720(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  double local_30;
  
  if (((param_1[0x19] != 0) && (param_1[0x1f] != 0)) && (param_1[0x20] != 0)) {
    uVar5 = *(undefined4 *)(param_1[0x1f] + 0xe8);
    uVar6 = *(undefined4 *)(param_1[0x20] + 0xec);
    uVar1 = *(undefined4 *)(param_1[0x1f] + 0xec);
    uVar2 = *(undefined4 *)(param_1[0x20] + 0xe8);
    FUN_00498350(&local_48,uVar5,uVar6,uVar1,uVar2);
    (**(code **)(*param_1 + 0xb0))(param_1,&local_48);
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))((longlong *)param_1[0x19],param_1[0x1c],0);
    *(undefined8 *)PTR_DAT_02005620 = 0;
    *(undefined8 *)PTR_DAT_020041f8 = 0;
    FUN_00498350(&local_48,uVar5,uVar6,uVar1,uVar2);
    param_1[0x27] = local_48;
    param_1[0x28] = lStack_40;
    FUN_01ab66e0(param_1);
    *(undefined4 *)(param_1 + 0x22) = 1;
    *(undefined4 *)((longlong)param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x23) = 0xffffd508;
    param_1[0x24] = -0x4010000000000000;
    lVar3 = param_1[0x1f];
    *(longlong *)(lVar3 + 0xb8) = param_1[0x29];
    *(double *)(lVar3 + 0xc0) = (double)param_1[0x29] + (double)param_1[0x2a];
    while( true ) {
      cVar4 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                        ((longlong *)param_1[0x19],&local_30,&local_38,0);
      if (cVar4 == '\0') break;
      param_1[0x24] = (longlong)local_30;
      lVar3 = param_1[0x1f];
      if (local_30 < *(double *)(lVar3 + 0xc0) || local_30 == *(double *)(lVar3 + 0xc0)) {
        uVar5 = FUN_01cd60f0(lVar3,local_30);
        uVar6 = FUN_01cd60f0(param_1[0x20],local_38);
        FUN_01d2c460(param_1,uVar5,uVar6);
      }
      else {
        uVar5 = FUN_01cd60f0(lVar3,local_30);
        uVar6 = FUN_01cd60f0(param_1[0x20],local_38);
        FUN_01d2c460(param_1,uVar5,uVar6);
        FUN_01d2c460(param_1,0xffffd8f0,0xffffd8f0);
        *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
        lVar3 = param_1[0x1f];
        *(double *)(lVar3 + 0xb8) = *(double *)(lVar3 + 0xb8) + (double)param_1[0x2a];
        *(double *)(lVar3 + 0xc0) = *(double *)(lVar3 + 0xc0) + (double)param_1[0x2a];
        *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
        uVar5 = FUN_01cd60f0(param_1[0x1f],param_1[0x25]);
        uVar6 = FUN_01cd60f0(param_1[0x20],param_1[0x26]);
        FUN_01d2c460(param_1,uVar5,uVar6);
        uVar5 = FUN_01cd60f0(param_1[0x1f],local_30);
        uVar6 = FUN_01cd60f0(param_1[0x20],local_38);
        FUN_01d2c460(param_1,uVar5,uVar6);
      }
      param_1[0x25] = (longlong)local_30;
      param_1[0x26] = local_38;
    }
    FUN_005fd6d0(param_1[0xc],1);
    param_1[0x29] = *(longlong *)(param_1[0x1f] + 0xb8);
  }
  return;
}

