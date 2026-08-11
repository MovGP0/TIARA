/* Ghidra address: 01cc90a0 */
/* Ghidra symbol: FUN_01cc90a0 */


double FUN_01cc90a0(longlong *param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  double local_40 [5];
  
  dVar3 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
  dVar4 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  dVar3 = (double)FUN_0040c850(dVar3 - dVar4);
  uVar2 = FUN_004b6da0(param_1[3]);
  (**(code **)(*param_1 + 0x30))(param_1,local_40,&local_48,0);
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_50,&local_58,0);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],uVar2,0);
      return 0.0;
    }
    cVar1 = FUN_01cc9010(auStack_88);
    if ((cVar1 != '\0') && (dVar4 = (double)FUN_01cc8f20(auStack_88), dVar4 <= dVar3 * 0.05)) break;
    local_40[0] = local_50;
    local_48 = local_58;
  }
  (**(code **)(*(longlong *)param_1[3] + 0x48))
            ((longlong *)param_1[3],*(int *)((longlong)param_1 + 0x2c) * -2,1);
  uVar2 = FUN_004b6da0(param_1[3]);
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],&local_60,8);
  (**(code **)(*(longlong *)param_1[3] + 0x48))
            ((longlong *)param_1[3],*(int *)((longlong)param_1 + 0x2c) + -8,1);
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],&local_68,8);
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],uVar2,0);
  if (local_50 - local_40[0] == 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (param_2 - local_40[0]) / (local_50 - local_40[0]);
  }
  param_1[7] = (longlong)local_60;
  param_1[8] = (longlong)local_68;
  *(int *)(param_1 + 4) = *(int *)((longlong)param_1 + 0x24) + -2;
  dVar4 = (double)FUN_00c42800(local_68 / local_60);
  dVar3 = (double)FUN_00c42750(dVar4 * dVar3);
  return local_60 * dVar3;
}

