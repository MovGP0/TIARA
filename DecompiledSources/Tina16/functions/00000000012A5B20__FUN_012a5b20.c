/* Ghidra address: 012a5b20 */
/* Ghidra symbol: FUN_012a5b20 */


undefined1 FUN_012a5b20(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 local_51;
  undefined8 local_50;
  double local_48;
  undefined1 local_39 [41];
  
  local_50 = 0;
  local_51 = 0;
  if (((param_2 != 0) && (param_2 == param_1[0x2a])) && (param_1[0x27] != 0)) {
    iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1]);
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar1 + -1);
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
    *param_4 = lVar3;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    *(undefined8 *)(*param_4 + 0x58) = param_3;
    FUN_01cc0ae0(param_3,&local_50);
    FUN_00414ad0(*param_4 + 8,local_50);
    FUN_010c04f0(*param_4 + 8);
    uVar2 = (**(code **)(*(longlong *)param_1[0x27] + 0x68))((longlong *)param_1[0x27],param_3);
    (**(code **)(*(longlong *)param_1[0x27] + 0x70))((longlong *)param_1[0x27],param_3);
    uVar4 = FUN_0040c850();
    uVar5 = FUN_0040c850(uVar2);
    dVar6 = (double)FUN_00b90620(uVar4,uVar5);
    if (1e-12 < dVar6) {
      uVar4 = FUN_0040c850();
      uVar2 = FUN_0040c850(uVar2);
      local_48 = (double)FUN_00b90620(uVar4,uVar2);
      local_48 = local_48 / ((double)*(byte *)((longlong)param_1 + 0xa2) / 2.0);
      (**(code **)(*param_1 + 0x78))(param_1,local_39,&local_48,0);
      *(undefined1 *)(*param_4 + 0x2a) = local_39[0];
      *(undefined8 *)(*param_4 + 0x110) = 0;
      *(double *)(*param_4 + 0x118) = local_48;
    }
    *(undefined1 *)(*param_4 + 0x148) = 1;
    local_51 = 1;
  }
  FUN_00414480(&local_50);
  return local_51;
}

