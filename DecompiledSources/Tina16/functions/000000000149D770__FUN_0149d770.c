/* Ghidra address: 0149d770 */
/* Ghidra symbol: FUN_0149d770 */


undefined1 FUN_0149d770(longlong param_1,undefined8 *param_2,short param_3,ushort param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ushort uVar8;
  undefined1 local_71;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined2 local_52;
  longlong local_50;
  longlong local_48;
  short local_3a;
  double local_38;
  undefined1 local_2c [12];
  
  local_70[0] = 0;
  local_48 = 0;
  local_60 = 0;
  local_71 = 0;
  iVar4 = FUN_01d31a40(*param_2);
  if (iVar4 == 0) {
    cVar3 = FUN_01cf0620(param_1,param_2,0,0,0xffffffff);
    if (cVar3 == '\0') {
      if (param_3 == 0x106) {
        if (param_4 < 0x101) {
          FUN_01d31c60(*param_2,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x80));
          FUN_01d32040(*param_2,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0xa0));
          FUN_01d312f0(*param_2,&local_48);
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x90,local_48);
          FUN_01d31720(*param_2,local_2c);
          *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x99) = local_2c[0];
          FUN_01d31720(*param_2,local_2c);
          *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xa0) = local_2c[0];
          FUN_01d31720(*param_2,local_2c);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x98) = local_2c[0];
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d12290(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d122b0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d122d0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d122f0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d12310(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_38,8);
          FUN_01d12330(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),local_38);
          FUN_01d30f00(*param_2,&local_3a,2);
          FUN_01d12350(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),(longlong)local_3a);
        }
        else if (0x100 < param_4) {
          FUN_01d30f00(*param_2,&local_52,2);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                    (*(longlong **)(param_1 + 0x28),*param_2,local_52);
          if (0x101 < param_4) {
            FUN_01d312f0(*param_2,&local_60);
            uVar6 = FUN_00414480(param_1 + 0x38);
            FUN_01b24160(local_70,local_60,uVar6);
            FUN_00414ad0(param_1 + 0x30,local_70[0]);
          }
        }
      }
      else {
        FUN_00ef40a0(param_2,&local_50);
        if (local_50 != 0) {
          if (*(byte *)(local_50 + 1) == 0) {
            local_38 = 0.5;
          }
          else {
            local_38 = (double)*(byte *)(local_50 + 1);
          }
          uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x80);
          iVar4 = FUN_005fce00(uVar6);
          uVar5 = FUN_0040c770(local_38 * (double)iVar4);
          FUN_005fce30(uVar6,uVar5);
          plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0xa0);
          (**(code **)(*plVar2 + 0x90))(plVar2);
          pbVar7 = (byte *)(local_50 + 0x1d);
          for (uVar8 = 0; uVar8 < *(ushort *)(local_50 + 10); uVar8 = uVar8 + bVar1 + 1) {
            FUN_004169a0(&local_48,pbVar7);
            iVar4 = 0;
            if (local_48 != 0) {
              iVar4 = *(int *)(local_48 + -4);
            }
            if (*(short *)(local_48 + -2 + (longlong)iVar4 * 2) == 0x11) {
              uVar5 = 0;
              if (local_48 != 0) {
                uVar5 = *(undefined4 *)(local_48 + -4);
              }
              FUN_00416e20(&local_48,uVar5,1);
            }
            (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + (bVar1 + 1);
          }
          FUN_00ef4210(&local_50);
        }
      }
    }
    else {
      local_71 = 1;
    }
  }
  else {
    local_71 = 1;
  }
  FUN_00414480(local_70);
  FUN_00414480(&local_60);
  FUN_00414480(&local_48);
  return local_71;
}

