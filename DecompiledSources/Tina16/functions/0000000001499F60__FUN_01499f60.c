/* Ghidra address: 01499f60 */
/* Ghidra symbol: FUN_01499f60 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_01499f60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 local_131;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [7];
  double local_78;
  double local_70 [9];
  
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0[0] = 0;
  local_70[6] = 0.0;
  local_70[5] = 0.0;
  local_70[4] = 0.0;
  local_70[3] = 0.0;
  local_70[2] = 0.0;
  local_70[1] = 0.0;
  local_131 = 1;
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar4 = 0;
  if (-1 < *(int *)(lVar1 + 0x4e0) + -2) {
    iVar6 = *(int *)(lVar1 + 0x4e0) + -1;
    do {
      iVar5 = iVar4 + 1;
      FUN_0084e320(lVar1,local_b0,0,iVar5);
      FUN_0043ea00(local_70 + 6,local_b0[0]);
      cVar2 = FUN_014937c0(param_1,iVar5);
      if (cVar2 == '\0') {
        FUN_0084e320(lVar1,local_70 + 5,1,iVar5);
        FUN_0084e320(lVar1,local_70 + 4,2,iVar5);
        FUN_0084e320(lVar1,local_70 + 3,3,iVar5);
        dVar7 = (double)FUN_014956b0(param_1,local_70[6]);
        iVar5 = FUN_00416db0(local_70[4],L"<none>");
        if (iVar5 != 0) {
          cVar2 = FUN_01496430(param_1,local_70[4],local_70,0);
          if (cVar2 == '\0') {
            uVar3 = FUN_00b89270();
            FUN_0041ddd0(&local_c8,PTR_PTR_02002d80);
            FUN_00b8e650(uVar3,&local_c0,L"d.DesignToolObject_Msg_InvalidExpression",local_c8);
            FUN_00416cd0(&local_b8,3,local_70[6],&DAT_0149a4bc,local_c0);
            FUN_01493aa0(param_1,local_b8);
            *(undefined1 *)(param_1 + 0xba1) = 0;
            local_131 = 0;
            break;
          }
          if (1e-16 < local_70[0] - dVar7) {
            uVar3 = FUN_00b89270();
            FUN_0041ddd0(&local_e0,PTR_PTR_020038d8);
            FUN_00b8e650(uVar3,&local_d8,L"d.DesignToolObject_Msg_LessThanMin",local_e0);
            local_100 = local_70[6];
            local_f8 = 0x11;
            local_f0 = local_70[4];
            local_e8 = 0x11;
            FUN_00442f70(&local_d0,local_d8,&local_100,1);
            FUN_01493aa0(param_1,local_d0);
            *(undefined1 *)(param_1 + 0xba1) = 0;
            local_131 = 0;
            break;
          }
        }
        iVar5 = FUN_00416db0(local_70[3],L"<none>");
        if (iVar5 != 0) {
          cVar2 = FUN_01496430(param_1,local_70[3],&local_78,0);
          if (cVar2 == '\0') {
            uVar3 = FUN_00b89270();
            FUN_0041ddd0(&local_118,PTR_PTR_02002d80);
            FUN_00b8e650(uVar3,&local_110,L"d.DesignToolObject_Msg_InvalidExpression",local_118);
            FUN_00416cd0(&local_108,3,local_70[6],&DAT_0149a4bc,local_110);
            FUN_01493aa0(param_1,local_108);
            *(undefined1 *)(param_1 + 0xba1) = 0;
            local_131 = 0;
            break;
          }
          if (1e-16 < dVar7 - local_78) {
            uVar3 = FUN_00b89270();
            FUN_0041ddd0(&local_130,PTR_PTR_020024b0);
            FUN_00b8e650(uVar3,&local_128,L"d.DesignToolObject_Msg_ExceedsMax",local_130);
            local_100 = local_70[6];
            local_f8 = 0x11;
            local_f0 = local_70[3];
            local_e8 = 0x11;
            FUN_00442f70(&local_120,local_128,&local_100,1);
            FUN_01493aa0(param_1,local_120);
            *(undefined1 *)(param_1 + 0xba1) = 0;
            local_131 = 0;
            break;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_130,6);
  FUN_00414560(&local_e0,7);
  FUN_00414560(local_70 + 1,6);
  return local_131;
}

