/* Ghidra address: 00dec760 */
/* Ghidra symbol: FUN_00dec760 */


void FUN_00dec760(longlong param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char local_81;
  longlong local_80 [12];
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar3 = CONCAT11(uVar4,4);
    cVar1 = FUN_016eacf0(param_1,10,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
  }
  uVar3 = CONCAT11(uVar4,2);
  cVar2 = FUN_016eacf0(param_1,4,uVar3);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (cVar2 == '\0') {
    dVar5 = (double)FUN_016eb0a0(param_1,5);
    dVar6 = (double)FUN_016ed770(param_2);
    dVar5 = dVar5 + dVar6;
  }
  else {
    dVar5 = (double)FUN_016eb0a0(param_1,5);
  }
  if (cVar1 == '\0') {
    uVar4 = 0;
    FUN_016ee260(param_1,local_80,0x50,0);
    dVar6 = (double)FUN_016eb0a0(param_1,1);
    uVar7 = FUN_016eb0a0(param_1,2);
    uVar3 = CONCAT11(uVar4,2);
    uVar8 = FUN_016ea920(param_1,3,uVar3,&local_81);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
    if (local_81 == '\x01') {
      *(undefined1 *)(local_80[0] + 0x40) = 0;
    }
    else {
      *(undefined1 *)(local_80[0] + 0x40) = 1;
    }
    dVar5 = dVar5 - 27.0;
    dVar9 = (double)FUN_016eb0a0(param_1,6);
    dVar10 = (double)FUN_016eb0a0(param_1,7);
    dVar6 = dVar6 * (dVar9 * dVar5 + dVar10 * dVar5 * dVar5 + 1.0);
    uVar11 = FUN_016eb0a0(param_1,8);
    *(undefined8 *)(local_80[0] + 0x38) = uVar11;
    uVar11 = FUN_016eb0a0(param_1,9);
    *(undefined8 *)(local_80[0] + 0x30) = uVar11;
    if (*(char *)(param_2 + 0xed6) == '\0') {
      FUN_00dec4a0(param_1,1,CONCAT11(uVar4,2),dVar6,uVar8,uVar7,*(undefined1 *)(param_1 + 0x121),
                   local_80[0]);
      if (*(char *)(param_1 + 0x121) == '\0') {
        FUN_016e9f40(param_1,FUN_00dec410);
      }
      FUN_016e9fa0(param_1,FUN_00debe60);
    }
    else {
      FUN_00debeb0(param_1,dVar6,uVar8,uVar7,1,local_80[0]);
    }
    FUN_016e9fb0(param_1,FUN_00debdf0);
    FUN_016e9ff0(param_1,FUN_00deb9c0);
    FUN_016ea040(param_1,FUN_00debd30);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,CONCAT11(uVar4,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  else if (cVar1 == '\x02') {
    FUN_016e9e20(param_1,1);
    FUN_016ebdd0(param_1,1,CONCAT11(uVar4,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

