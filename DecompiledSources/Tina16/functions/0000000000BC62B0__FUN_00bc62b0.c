/* Ghidra address: 00bc62b0 */
/* Ghidra symbol: FUN_00bc62b0 */


longlong FUN_00bc62b0(undefined8 *param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint local_3c [3];
  
  *param_3 = 1;
  uVar5 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0xe < *(int *)(param_1 + 0x2b)) {
      (**(code **)*param_1)(param_1,0x66);
      return 0;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x2b);
    *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + 1;
    lVar2 = FUN_00bc5e20(param_1,CONCAT22((short)((uint)uVar5 >> 0x10),(short)uVar5 + 0x27));
  }
  lVar3 = FUN_00bc6510(param_1,local_3c);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    if (lVar2 != 0) {
      FUN_00bc5d80(param_1,lVar2,lVar3);
      lVar3 = lVar2;
    }
    if ((local_3c[0] & 1) == 0) {
      *param_3 = *param_3 & 0xfffffffe;
    }
    *param_3 = *param_3 | local_3c[0] & 4;
    while (*(short *)param_1[0x2a] == 0x7c) {
      param_1[0x2a] = param_1[0x2a] + 2;
      lVar2 = FUN_00bc6510(param_1,local_3c);
      if (lVar2 == 0) {
        return 0;
      }
      FUN_00bc5d80(param_1,lVar3,lVar2);
      if ((local_3c[0] & 1) == 0) {
        *param_3 = *param_3 & 0xfffffffe;
      }
      *param_3 = *param_3 | local_3c[0] & 4;
    }
    if (param_2 == 0) {
      uVar4 = FUN_00bc5e20(param_1,0);
    }
    else {
      uVar4 = FUN_00bc5e20(param_1,CONCAT22((short)((uint)uVar5 >> 0x10),(short)uVar5 + 0x36));
    }
    FUN_00bc5d80(param_1,lVar3,uVar4);
    for (lVar2 = lVar3; lVar2 != 0; lVar2 = FUN_00bc8990(param_1,lVar2)) {
      FUN_00bc5df0(param_1,lVar2,uVar4);
    }
    if (param_2 != 0) {
      if (*(short *)param_1[0x2a] != 0x29) {
        (**(code **)*param_1)(param_1,0x67);
        return 0;
      }
      param_1[0x2a] = param_1[0x2a] + 2;
    }
    if ((param_2 == 0) && (*(short *)param_1[0x2a] != 0)) {
      lVar3 = 0;
      if (*(short *)param_1[0x2a] == 0x29) {
        (**(code **)*param_1)(param_1,0x68);
      }
      else {
        (**(code **)*param_1)(param_1,0x69);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = uVar1;
    }
  }
  return lVar3;
}

