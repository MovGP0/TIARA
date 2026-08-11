/* Ghidra address: 01b587d0 */
/* Ghidra symbol: FUN_01b587d0 */


void FUN_01b587d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  int *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  longlong *local_80;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  double local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [14];
  undefined1 local_22 [18];
  
  local_90 = auStack_d8;
  if (*(char *)((longlong)param_1 + 0x7ed) == '\0') {
    cVar1 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
    if (cVar1 != '\0') {
      cVar1 = FUN_010e2d90(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_0065b870(param_1);
        FUN_00f83670(uVar3,param_2);
      }
      else {
        if (PTR_DAT_02004010[0x7c6] != '\0') {
          cVar1 = FUN_010e1a60(param_1);
          if (cVar1 != '\0') {
            uVar3 = FUN_010e1b10(param_1);
            local_80 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01133e90);
            if (*(char *)((longlong)local_80 + 0xa9) == '\0') {
              FUN_008059a0(local_80);
              iVar2 = FUN_007fd7d0(param_1);
              FUN_00806af0(local_80,iVar2 + -0x50);
              (**(code **)(*local_80 + 600))(local_80);
            }
            if (*(char *)((longlong)local_80 + 0xa09) == '\0') {
              local_b8 = (int *)local_40;
              local_b0 = local_48;
              FUN_01138af0(local_80,local_22,local_30,local_38);
              local_b8 = (int *)local_40;
              local_b0 = local_48;
              FUN_01138b30(local_80,0,local_30,local_38);
              local_b8 = &local_74;
              local_b0 = &local_75;
              local_a8 = &local_76;
              local_a0 = &local_77;
              FUN_01138d40(local_80,local_60,local_68,&local_70);
              if (*(longlong *)(local_80[0x118] + 0x408) != 0) {
                FUN_0153b6c0(local_60,local_68,&local_74);
              }
              local_77 = 1;
              local_76 = 1;
              local_70 = (double)param_1[0x1a4] * (double)local_74;
              local_b8 = &local_74;
              local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,local_75);
              local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
              local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
              FUN_01138e40(local_80,local_60,local_68,&local_70);
              (**(code **)(*local_80 + 0x488))(local_80);
            }
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
        param_1[0x1a8] = 0;
        param_1[0x1a9] = 0;
        FUN_00b90440(param_1[0x198],param_1[0x1a9]);
        FUN_01b581d0(param_1,1);
        *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
        param_1[0x133] = 0;
        (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],0);
        (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],0);
        FUN_010e8e30(param_1[0x136],0);
        *PTR_DAT_02001100 = *(undefined1 *)((longlong)param_1 + 0xd6a);
        *PTR_DAT_02002c68 = *(undefined1 *)((longlong)param_1 + 0xd6b);
        cVar1 = (**(code **)(*(longlong *)param_1[0x1ab] + 0xc0))((longlong *)param_1[0x1ab]);
        if (cVar1 == '\0') {
          FUN_0082a6c0(param_1[0xf8],1);
          (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
        }
      }
    }
  }
  return;
}

