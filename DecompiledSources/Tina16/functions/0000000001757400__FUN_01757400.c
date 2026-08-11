/* Ghidra address: 01757400 */
/* Ghidra symbol: FUN_01757400 */


void FUN_01757400(longlong *param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_80 = 0;
  if (param_1[0xb] != 0) {
    FUN_00410f20(param_1[0xb]);
  }
  param_1[0xb] = 0;
  lVar1 = param_1[6];
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xe00) != 0)) {
    uVar6 = FUN_01cc6f70(&PTR_FUN_01cba688,1,*(undefined8 *)(lVar1 + 0xe00));
    (**(code **)(*(longlong *)param_1[5] + 0x288))((longlong *)param_1[5],&local_80);
    uVar9 = 0;
    FUN_00f19c70(uVar6,*(undefined8 *)(param_1[6] + 0xe00),5,3,CONCAT44(uVar4,5),0,
                 0x4024000000000000,3,5,0xc024000000000000,0x4024000000000000,local_80,param_1 + 0xb
                );
    *(undefined1 *)(param_1[0xb] + 0x68) = 1;
    (**(code **)(*param_1 + 8))(param_1,&local_78,param_2,param_3,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    FUN_01d048c0(param_1[5],local_78,local_74,&local_3c,&local_40,uVar6,1);
    uVar9 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    FUN_01d048c0(param_1[5],local_70,local_6c,&local_44,&local_48,uVar9,1);
    FUN_01a98380(param_2,local_3c,local_40,&local_38,&local_34);
    FUN_01a98380(param_2,local_44,local_48,&local_30,local_2c);
    local_34 = local_34 + 1;
    local_2c[0] = local_2c[0] + -1;
    local_30 = local_30 + -2;
    local_38 = local_38 + 2;
    (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_38);
    iVar3 = FUN_00b905f0(local_30 - local_38,local_2c[0] - local_34);
    uVar4 = FUN_0040c770((double)iVar3 * 0.05);
    uVar4 = FUN_00b905f0(0xe,uVar4);
    uVar4 = FUN_00b905e0(8,uVar4);
    lVar1 = param_1[0xb];
    *(undefined4 *)(lVar1 + 0x90) = uVar4;
    *(undefined1 *)(lVar1 + 0xb0) = 1;
    uVar6 = FUN_01a97e00(param_2);
    (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar6,0);
    FUN_01a97ea0(param_2,uVar6);
    (**(code **)(*param_1 + 8))(param_1,&local_58,param_2,param_3,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    FUN_01d048c0(param_1[5],local_58,local_54,&local_5c,&local_60,uVar6,1);
    puVar8 = &local_68;
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    FUN_01d048c0(param_1[5],local_50,local_4c,&local_64,puVar8,uVar6,1);
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar4 = (undefined4)((ulonglong)puVar8 >> 0x20);
    if (param_4 != '\0') {
      cVar2 = FUN_01d07320(param_1[5]);
      if (-1 < cVar2) {
        plVar7 = (longlong *)FUN_00609e10(DAT_0210ffb0);
        uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,0,0);
        (**(code **)(*param_2 + 0x60))
                  (param_2,local_5c,local_60,local_64,CONCAT44(uVar4,local_68),
                   CONCAT44(uVar10,uVar5));
        goto LAB_0175783c;
      }
    }
    uVar5 = (**(code **)(*param_2 + 0xd0))(param_2,0);
    (**(code **)(*param_2 + 0x60))
              (param_2,local_5c,local_60,local_64,CONCAT44(uVar4,local_68),CONCAT44(uVar10,uVar5));
  }
LAB_0175783c:
  FUN_00414480(&local_80);
  return;
}

