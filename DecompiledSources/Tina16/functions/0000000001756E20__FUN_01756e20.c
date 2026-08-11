/* Ghidra address: 01756e20 */
/* Ghidra symbol: FUN_01756e20 */


void FUN_01756e20(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 *puVar13;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99 [17];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c [21];
  
  local_c0 = 0;
  if ((param_1[0xb] != 0) && (param_1[6] != 0)) {
    pdVar7 = (double *)FUN_01cfde70(param_1[5],1,0,local_99,&local_9a,&local_9b);
    dVar1 = *pdVar7;
    pdVar7 = (double *)FUN_01cfde70(param_1[5],3,0,local_99,&local_9a,&local_9b);
    dVar2 = *pdVar7;
    pdVar7 = (double *)FUN_01cfde70(param_1[5],4,0,local_99,&local_9a,&local_9b);
    dVar3 = *pdVar7;
    pdVar7 = (double *)FUN_01cfde70(param_1[5],5,0,local_99,&local_9a,&local_9b);
    dVar11 = *pdVar7;
    pdVar7 = (double *)FUN_01cfde70(param_1[5],6,0,local_99,&local_9a,&local_9b);
    dVar12 = *pdVar7;
    puVar13 = &local_9a;
    pcVar8 = (char *)FUN_01cfde70(param_1[5],8,0,local_99,puVar13,&local_9b);
    uVar6 = (undefined4)((ulonglong)puVar13 >> 0x20);
    cVar4 = *pcVar8;
    iVar5 = (**(code **)(**(longlong **)(param_1[0xb] + 0x80) + 0x28))
                      (*(longlong **)(param_1[0xb] + 0x80));
    if (iVar5 != 0) {
      lVar9 = (**(code **)(**(longlong **)(param_1[0xb] + 0x80) + 0x30))
                        (*(longlong **)(param_1[0xb] + 0x80),0);
      uVar10 = *(undefined8 *)(lVar9 + 0xd0);
      if (cVar4 == '\0') {
        local_c8 = FUN_01cc6f70(&PTR_FUN_01cb8cd8,1,uVar10);
        dVar11 = dVar11 * dVar1;
        dVar12 = dVar12 * dVar1;
        local_c9 = 0;
      }
      else if (cVar4 == '\x01') {
        local_c8 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,uVar10);
        local_c9 = 0;
      }
      else if (cVar4 == '\x02') {
        local_c8 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,uVar10);
        dVar11 = (double)FUN_00c44470(dVar11,0xc059000000000000);
        dVar12 = (double)FUN_00c44470(dVar12,0xc059000000000000);
        local_c9 = 1;
      }
      lVar9 = param_1[6];
      *(double *)(lVar9 + 0xdd0) = dVar3 - dVar2;
      *(double *)(lVar9 + 0xdd8) = dVar3 - dVar2;
      local_a8 = 0;
      (**(code **)(*(longlong *)param_1[5] + 0x288))((longlong *)param_1[5],&local_c0);
      FUN_00f19c70(local_c8,uVar10,0,2,CONCAT44(uVar6,2),dVar2,dVar3,local_c9,4,dVar11,dVar12,
                   local_c0,&local_a8);
      FUN_00410f20(param_1[0xb]);
      param_1[0xb] = local_a8;
      (**(code **)(*param_1 + 8))(param_1,&local_b8,param_2,param_3,param_4);
      FUN_01d048c0(param_1[5],local_b8,local_b4,&local_7c,&local_80,1,1);
      FUN_01d048c0(param_1[5],local_b0,local_ac,&local_84,&local_88,1,1);
      FUN_01a98380(param_2,local_7c,local_80,&local_78,&local_74);
      FUN_01a98380(param_2,local_84,local_88,&local_70,local_6c);
      local_74 = local_74 + 1;
      local_6c[0] = local_6c[0] + -1;
      local_70 = local_70 + -2;
      local_78 = local_78 + 2;
      (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_78);
      iVar5 = FUN_00b905f0(local_70 - local_78,local_6c[0] - local_74);
      uVar6 = FUN_0040c770((double)iVar5 * 0.05);
      uVar6 = FUN_00b905f0(0xe,uVar6);
      uVar6 = FUN_00b905e0(8,uVar6);
      lVar9 = param_1[0xb];
      *(undefined4 *)(lVar9 + 0x90) = uVar6;
      *(undefined1 *)(lVar9 + 0xb0) = 1;
      uVar10 = FUN_01a97e00(param_2);
      (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar10,0);
      FUN_01cea900(param_1[0xb],uVar10);
      FUN_01a97ea0(param_2,uVar10);
    }
  }
  FUN_00414480(&local_c0);
  return;
}

