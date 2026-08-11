/* Ghidra address: 0155ad00 */
/* Ghidra symbol: FUN_0155ad00 */


void FUN_0155ad00(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  char cVar3;
  short sVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  undefined8 local_res18 [2];
  undefined4 local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined2 local_6a;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar3 = FUN_01d3d920(param_2,10,0,&local_6a);
  if ((cVar3 != '\0') &&
     (cVar3 = FUN_0154b530(local_d0,*(undefined1 *)(param_1 + 0x958)), cVar3 != '\0')) {
    (**(code **)(*param_2 + 0x2d0))(param_2,local_6a,&local_78);
    (**(code **)(*param_2 + 0x288))(param_2,&local_90);
    sVar4 = FUN_01d03160();
    if ((sVar4 == 0x45f) || (sVar4 == 0xe)) {
      FUN_015f1c60(&local_a8,1);
      FUN_00416cd0(local_a0,7,&DAT_0155b1ac,*(undefined8 *)(param_1 + 0x738),L" <= ",&DAT_0155b1d8,
                   local_a8,&DAT_0155b1d8,&DAT_0155b1e8);
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),local_a0[0]);
    }
    else {
      iVar6 = *(int *)(*(longlong *)(local_78 + 8) + 0x10);
      local_cc = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar1 = *(undefined8 *)(local_78 + 8);
          pdVar5 = (double *)FUN_01d3aab0(uVar1,local_cc);
          local_58 = *pdVar5;
          local_50 = pdVar5[1];
          if ((param_4 != 0) && (local_cc == 0)) {
            (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                      (*(longlong **)(param_1 + 0x8f8),L"  while true loop");
          }
          if (local_cc == 0) {
            dVar7 = 0.0;
          }
          else {
            dVar7 = local_58;
            if (1 < local_cc) {
              pdVar5 = (double *)
                       FUN_01d3aab0(uVar1,CONCAT22((short)((uint)local_cc >> 0x10),
                                                   (short)local_cc + -1));
              local_68 = *pdVar5;
              dStack_60 = pdVar5[1];
              dVar7 = local_58 - local_68;
            }
          }
          if (dVar7 < 0.0) {
            (**(code **)(*param_2 + 0x288))(param_2,&local_b8);
            FUN_00416ba0(&local_b0,L"Invalid entry in the PSG: ",local_b8);
            FUN_015fcf20(local_b0,0,0,0);
          }
          FUN_015f1c60(&local_80,(ulonglong)local_50 & 0xff);
          dVar2 = local_58;
          if (local_cc == 0) {
            dVar2 = 0.0;
          }
          FUN_015f0a10(&local_88,dVar7,1);
          if (dVar2 != 0.0) {
            FUN_00416cd0(&local_c0,3,L"   wait for ",local_88,&DAT_0155b1e8);
            (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                      (*(longlong **)(param_1 + 0x8f8),local_c0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
          FUN_00416cd0(&local_c8,7,&DAT_0155b1ac,*(undefined8 *)(param_1 + 0x738),L" <= ",
                       &DAT_0155b1d8,local_80,&DAT_0155b1d8,&DAT_0155b1e8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_c8);
          local_cc = local_cc + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_00414560(&local_c8,6);
  FUN_00414560(&local_90,3);
  FUN_00414480(local_res18);
  return;
}

