/* Ghidra address: 01d2b6e0 */
/* Ghidra symbol: FUN_01d2b6e0 */


void FUN_01d2b6e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [6];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar3 = *param_2;
  uVar1 = *param_3;
  local_30._0_4_ = (int)uVar3;
  dVar8 = (double)(int)local_30;
  local_30._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
  dVar9 = (double)local_30._4_4_;
  local_38._0_4_ = (int)uVar1;
  dVar10 = (double)(int)local_38;
  local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar7 = (double)local_38._4_4_;
  local_38 = uVar1;
  local_30 = uVar3;
  local_60 = FUN_01d2b340(param_1,dVar8,dVar9,dVar10,dVar7,(double)*(int *)(param_1 + 0x14));
  cVar2 = FUN_01a8e4c0(param_1 + 0x14,&local_60);
  if (cVar2 != '\0') {
    local_58 = FUN_01d2b340(param_1,(double)(int)local_30,(double)local_30._4_4_,
                            (double)(int)local_38,(double)local_38._4_4_,
                            (double)*(int *)(param_1 + 0x14));
  }
  uVar5 = (uint)(cVar2 != '\0');
  local_60 = FUN_01d2b500(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38
                          ,(double)local_38._4_4_,(double)*(int *)(param_1 + 0x18));
  cVar2 = FUN_01a8e4c0(param_1 + 0x14,&local_60);
  if (cVar2 != '\0') {
    uVar5 = uVar5 + 1;
    uVar3 = FUN_01d2b500(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38,
                         (double)local_38._4_4_,(double)*(int *)(param_1 + 0x18));
    (&local_60)[(int)uVar5] = uVar3;
  }
  local_60 = FUN_01d2b340(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38
                          ,(double)local_38._4_4_,(double)*(int *)(param_1 + 0x1c));
  cVar2 = FUN_01a8e4c0(param_1 + 0x14,&local_60);
  if (cVar2 != '\0') {
    uVar5 = uVar5 + 1;
    uVar3 = FUN_01d2b340(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38,
                         (double)local_38._4_4_,(double)*(int *)(param_1 + 0x1c));
    (&local_60)[(int)uVar5] = uVar3;
  }
  local_60 = FUN_01d2b500(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38
                          ,(double)local_38._4_4_,(double)*(int *)(param_1 + 0x20));
  cVar2 = FUN_01a8e4c0(param_1 + 0x14,&local_60);
  if (cVar2 != '\0') {
    uVar5 = uVar5 + 1;
    uVar3 = FUN_01d2b500(param_1,(double)(int)local_30,(double)local_30._4_4_,(double)(int)local_38,
                         (double)local_38._4_4_,(double)*(int *)(param_1 + 0x20));
    (&local_60)[(int)uVar5] = uVar3;
  }
  if (1 < uVar5) {
    (**(code **)(*param_4 + 200))(param_4,local_58 & 0xffffffff,local_58._4_4_);
    if (((uVar5 == 3) && ((int)local_58 == local_50[2])) && (local_58._4_4_ == local_50[3])) {
      uVar5 = 2;
    }
    if (1 < uVar5) {
      iVar6 = uVar5 - 1;
      piVar4 = local_50;
      do {
        (**(code **)(*param_4 + 0xc0))(param_4,*piVar4,piVar4[1]);
        piVar4 = piVar4 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

