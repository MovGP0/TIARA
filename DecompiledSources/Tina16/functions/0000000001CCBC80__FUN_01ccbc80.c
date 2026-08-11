/* Ghidra address: 01ccbc80 */
/* Ghidra symbol: FUN_01ccbc80 */


undefined8 FUN_01ccbc80(longlong *param_1,double param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_40 [5];
  
  dVar4 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  if (dVar4 <= param_2) {
    dVar4 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
    if (param_2 <= dVar4) {
      dVar4 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
      dVar5 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
      lVar1 = param_1[5];
      dVar6 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
      FUN_0040af10((param_2 - dVar6) / ((dVar4 - dVar5) / (double)((int)lVar1 + -1)));
      uVar2 = FUN_0040c840();
      iVar3 = FUN_00b905f0((int)param_1[5],uVar2);
      (**(code **)(*(longlong *)param_1[3] + 0x48))
                ((longlong *)param_1[3],iVar3 * *(int *)((longlong)param_1 + 0x2c) + 8,0);
      (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],local_40,8);
    }
    else {
      local_40[0] = (**(code **)(*param_1 + 0x70))(param_1,param_1[0xb]);
    }
  }
  else {
    local_40[0] = (**(code **)(*param_1 + 0x68))(param_1,param_1[0xb]);
  }
  return local_40[0];
}

