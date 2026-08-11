/* Ghidra address: 0195da60 */
/* Ghidra symbol: FUN_0195da60 */


void FUN_0195da60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  
  if (*(char *)(param_1[0x38] + 0x3c) == '\x05') {
    FUN_01958e60(param_1[0x38],0);
    lVar1 = param_1[0x13];
    lVar2 = param_1[0x14];
    lVar3 = param_1[0x15];
    lVar4 = param_1[0x16];
    local_98 = param_5;
    local_90 = param_6;
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4);
    FUN_0195d850(auStack_b8);
    bVar5 = *(byte *)((longlong)param_1 + 0x2ac);
    if (bVar5 < 3) {
      (**(code **)(*param_1 + 200))
                (param_1,(double)param_1[0x13] + *(double *)(param_1[0x38] + 0x40) * 2.0);
      (**(code **)(*param_1 + 0xd0))
                (param_1,(double)param_1[0x14] + *(double *)(param_1[0x38] + 0x40) * 2.0);
      (**(code **)(*param_1 + 0xd8))
                (param_1,(double)param_1[0x15] - *(double *)(param_1[0x38] + 0x40) * 4.0);
      (**(code **)(*param_1 + 0xe0))
                (param_1,(double)param_1[0x16] - *(double *)(param_1[0x38] + 0x40) * 4.0);
    }
    else if (bVar5 == 3) {
      (**(code **)(*param_1 + 200))
                (param_1,(double)param_1[0x13] + *(double *)(param_1[0x38] + 0x40) * 4.0);
      (**(code **)(*param_1 + 0xd0))
                (param_1,(double)param_1[0x14] + *(double *)(param_1[0x38] + 0x40) * 4.0);
      (**(code **)(*param_1 + 0xd8))
                (param_1,(double)param_1[0x15] - *(double *)(param_1[0x38] + 0x40) * 8.0);
      (**(code **)(*param_1 + 0xe0))
                (param_1,(double)param_1[0x16] - *(double *)(param_1[0x38] + 0x40) * 6.0);
    }
    else if (bVar5 == 4) {
      (**(code **)(*param_1 + 200))
                (param_1,(double)param_1[0x13] + *(double *)(param_1[0x38] + 0x40) * 3.0);
      (**(code **)(*param_1 + 0xd0))
                (param_1,(double)param_1[0x14] + *(double *)(param_1[0x38] + 0x40) * 3.0);
      (**(code **)(*param_1 + 0xd8))
                (param_1,(double)param_1[0x15] - *(double *)(param_1[0x38] + 0x40) * 6.0);
      (**(code **)(*param_1 + 0xe0))
                (param_1,(double)param_1[0x16] - *(double *)(param_1[0x38] + 0x40) * 6.0);
    }
    else if ((byte)(bVar5 - 5) < 2) {
      (**(code **)(*param_1 + 200))
                (param_1,(double)param_1[0x13] + *(double *)(param_1[0x38] + 0x40) * 2.0);
    }
    local_98 = param_5;
    local_90 = param_6;
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4);
    FUN_0195d850(auStack_b8);
    FUN_01958e60(param_1[0x38],5);
    (**(code **)(*param_1 + 200))(param_1,lVar1);
    (**(code **)(*param_1 + 0xd0))(param_1,lVar2);
    (**(code **)(*param_1 + 0xd8))(param_1,lVar3);
    (**(code **)(*param_1 + 0xe0))(param_1,lVar4);
  }
  else {
    local_98 = param_5;
    local_90 = param_6;
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4);
    FUN_0195d850(auStack_b8);
  }
  return;
}

