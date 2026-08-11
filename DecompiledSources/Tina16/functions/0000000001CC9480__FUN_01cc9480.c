/* Ghidra address: 01cc9480 */
/* Ghidra symbol: FUN_01cc9480 */


void FUN_01cc9480(longlong *param_1,double param_2,double *param_3,double *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40 [3];
  
  dVar3 = (double)FUN_01cc92d0(param_1,param_1[0xb]);
  if (param_2 < dVar3) {
    param_2 = (double)FUN_01cc92d0(param_1,param_1[0xb]);
  }
  if (*(double *)(param_1[0xb] + 0x22) <= param_2 && param_2 != *(double *)(param_1[0xb] + 0x22)) {
    param_2 = *(double *)(param_1[0xb] + 0x22);
  }
  if ((double)param_1[7] <= param_2) {
    if ((double)param_1[8] <= param_2 && param_2 != (double)param_1[8]) {
      uVar1 = FUN_01cc70b0(param_1,param_2,(int)param_1[4],(int)param_1[5] + -2,
                           *(undefined4 *)((longlong)param_1 + 0x2c));
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  else {
    uVar1 = FUN_01cc70b0(param_1,param_2,0,(int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x2c)
                        );
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  uVar2 = FUN_004b6da0(param_1[3]);
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],local_40,8);
  (**(code **)(*(longlong *)param_1[3] + 0x48))
            ((longlong *)param_1[3],*(int *)((longlong)param_1 + 0x2c) + -8,1);
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],&local_48,8);
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],uVar2,0);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  (**(code **)(*param_1 + 0x30))(param_1,&local_50,&local_60,0);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4] + 1;
  (**(code **)(*param_1 + 0x30))(param_1,&local_58,&local_68,0);
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],uVar2,0);
  param_1[7] = (longlong)local_40[0];
  param_1[8] = (longlong)local_48;
  *param_3 = ((param_2 - local_40[0]) / (local_48 - local_40[0])) * (local_58 - local_50) + local_50
  ;
  if (local_58 - local_50 == 0.0) {
    *param_4 = local_60;
  }
  else {
    *param_4 = ((*param_3 - local_50) * (local_68 - local_60)) / (local_58 - local_50) + local_60;
  }
  return;
}

