/* Ghidra address: 010d6cf0 */
/* Ghidra symbol: FUN_010d6cf0 */


void FUN_010d6cf0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,double param_6,double param_7,double param_8,double param_9,
                 undefined1 *param_10)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  double local_d0;
  undefined1 local_a8;
  undefined1 auStack_a7 [7];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_a0 = 0;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  iVar3 = FUN_004230a0(&local_98);
  iVar4 = FUN_004230c0(&local_98);
  FUN_010c7a40(local_d8,param_4);
  _local_a8 = CONCAT71(SUB87((ulonglong)*(undefined8 *)(param_1 + 0x628) >> 8,0),1);
  _local_a8 = CONCAT44(2,_local_a8);
  FUN_010d6c80(local_d8,&local_a8,&local_a0);
  iVar5 = FUN_005fdfd0(param_2,&DAT_010d723c);
  FUN_00416ba0(&local_e0,L"Min: ",local_a0);
  (**(code **)(*param_2 + 0x120))(param_2,10,(iVar4 - iVar5) + -3,local_e0);
  local_d0 = param_7;
  FUN_010d6c80(local_d8,&local_a8,&local_a0);
  FUN_00416ba0(&local_e8,L"t_Max: ",local_a0);
  iVar5 = FUN_005fdff0(param_2,local_e8);
  iVar6 = FUN_005fdfd0(param_2,&DAT_010d723c);
  FUN_00416ba0(&local_f0,L"t_Max: ",local_a0);
  (**(code **)(*param_2 + 0x120))(param_2,(iVar3 - iVar5) + -6,(iVar4 - iVar6) + -3,local_f0);
  local_d0 = (double)param_5;
  FUN_010d6c80(local_d8,&local_a8,&local_a0);
  FUN_00416ba0(&local_f8,L"Max: ",local_a0);
  (**(code **)(*param_2 + 0x120))(param_2,10,3,local_f8);
  if (param_8 < 1e-30) {
    param_8 = 2.0;
  }
  dVar12 = (double)(iVar4 + -0x30) / (double)iVar4;
  param_9 = (6.0 / (double)iVar3) * param_9;
  dVar10 = param_6 + param_9;
  iVar5 = FUN_010d6c30(param_1,dVar10,param_9,param_4,param_8,dVar12,iVar4);
  dVar11 = (double)iVar5;
  cVar2 = FUN_017e28e0(param_1);
  if (cVar2 == '\0') {
    bVar1 = false;
    if ((14.0 <= dVar11) && (bVar1 = false, dVar11 <= (double)(iVar4 + -0x22))) {
      uVar7 = FUN_0040c770(dVar11);
      (**(code **)(*param_2 + 200))(param_2,6,uVar7);
      bVar1 = true;
    }
    iVar5 = *(int *)(param_1 + 0x648);
    do {
      do {
        dVar10 = dVar10 + (param_7 - param_6) / (double)iVar5;
        iVar6 = FUN_010d6c30(param_1,dVar10,param_9,param_4,param_8,dVar12,iVar4);
        dVar11 = (double)iVar6;
        cVar2 = FUN_017e28e0(param_1);
        if (cVar2 != '\0') {
          *param_10 = 1;
          goto LAB_010d7177;
        }
      } while (((dVar11 < 14.0) || ((double)(iVar4 + -0x22) < dVar11)) && (dVar10 <= param_7));
      dVar9 = (dVar10 - param_6) / ((param_7 - param_6) / (double)iVar3);
      if ((6.0 <= dVar9) && (dVar9 <= (double)(iVar3 + -6))) {
        if (bVar1) {
          uVar7 = FUN_0040c770();
          uVar8 = FUN_0040c770(dVar11);
          (**(code **)(*param_2 + 0xc0))(param_2,uVar7,uVar8);
        }
        else {
          uVar7 = FUN_0040c770();
          uVar8 = FUN_0040c770(dVar11);
          (**(code **)(*param_2 + 200))(param_2,uVar7,uVar8);
          bVar1 = true;
        }
      }
    } while (dVar10 <= param_7);
  }
  else {
    *param_10 = 1;
  }
LAB_010d7177:
  FUN_00414560(&local_f8,4);
  FUN_00414480(&local_a0);
  return;
}

