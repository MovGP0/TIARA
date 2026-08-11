/* Ghidra address: 01cc8120 */
/* Ghidra symbol: FUN_01cc8120 */


void FUN_01cc8120(longlong *param_1,double param_2,longlong *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 in_RDX;
  
  if ((double)param_1[7] <= param_2) {
    if ((double)param_1[8] <= param_2 && param_2 != (double)param_1[8]) {
      uVar1 = FUN_01cc70b0(param_1,in_RDX,(int)param_1[4],(int)param_1[5] + -2,
                           *(undefined4 *)((longlong)param_1 + 0x2c));
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  else {
    uVar1 = FUN_01cc70b0(param_1,in_RDX,0,(int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x2c))
    ;
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  uVar2 = FUN_004b6da0(param_1[3]);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  (**(code **)(*param_1 + 0x30))(param_1,param_3,param_5,0);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4] + 1;
  (**(code **)(*param_1 + 0x30))(param_1,param_4,param_6,0);
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],uVar2,0);
  param_1[7] = *param_3;
  param_1[8] = *param_4;
  return;
}

