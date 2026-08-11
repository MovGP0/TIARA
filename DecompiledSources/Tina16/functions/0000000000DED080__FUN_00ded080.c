/* Ghidra address: 00ded080 */
/* Ghidra symbol: FUN_00ded080 */


void FUN_00ded080(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char local_71;
  longlong local_70 [11];
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar2 = CONCAT11(uVar3,4);
    cVar1 = FUN_016eacf0(param_1,0xb,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
  }
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_016ee260(param_1,local_70,0x40,0);
    dVar4 = (double)FUN_016eb0a0(param_1,1);
    dVar5 = (double)FUN_016eb0a0(param_1,3);
    uVar6 = FUN_00b90650(0x3ff0000000000000,dVar5 / 100.0);
    dVar5 = (double)FUN_00b90620(0,uVar6);
    uVar2 = CONCAT11(uVar3,2);
    uVar6 = FUN_016ea920(param_1,2,uVar2,&local_71);
    if (local_71 == '\x01') {
      uVar6 = 0x46293e5939a08cea;
    }
    uVar2 = CONCAT11((char)((ushort)uVar2 >> 8),2);
    uVar7 = FUN_016ea920(param_1,4,uVar2,&local_71);
    if (local_71 == '\x01') {
      *(undefined1 *)(local_70[0] + 0x30) = 0;
    }
    else {
      *(undefined1 *)(local_70[0] + 0x30) = 1;
    }
    uVar2 = CONCAT11((char)((ushort)uVar2 >> 8),2);
    cVar1 = FUN_016eacf0(param_1,5,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
    if (cVar1 == '\0') {
      dVar8 = (double)FUN_016eb0a0(param_1,6);
      dVar9 = (double)FUN_016ed770(param_2);
      dVar8 = dVar8 + dVar9;
    }
    else {
      dVar8 = (double)FUN_016eb0a0(param_1,6);
    }
    dVar8 = dVar8 - 27.0;
    dVar9 = (double)FUN_016eb0a0(param_1,6);
    dVar10 = (double)FUN_016eb0a0(param_1,7);
    uVar11 = FUN_016eb0a0(param_1,9);
    *(undefined8 *)(local_70[0] + 0x28) = uVar11;
    uVar11 = FUN_016eb0a0(param_1,10);
    *(undefined8 *)(local_70[0] + 0x20) = uVar11;
    FUN_00deb390(param_1,1,CONCAT11(uVar3,2),
                 dVar5 * dVar4 * (dVar9 * dVar8 + dVar10 * dVar8 * dVar8 + 1.0),uVar7,uVar6,
                 local_70[0]);
    FUN_016e9f40(param_1,FUN_00deb300);
    FUN_016e9fb0(param_1,FUN_00deac50);
    FUN_016e9fa0(param_1,FUN_00deace0);
    FUN_016e9ff0(param_1,FUN_00dea800);
    FUN_016ea040(param_1,FUN_00deab80);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,CONCAT11(uVar3,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  else if (cVar1 == '\x02') {
    FUN_016e9e20(param_1,1);
    FUN_016ebdd0(param_1,1,CONCAT11(uVar3,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

