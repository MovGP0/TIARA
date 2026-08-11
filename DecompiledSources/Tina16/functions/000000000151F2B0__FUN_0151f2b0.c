/* Ghidra address: 0151f2b0 */
/* Ghidra symbol: FUN_0151f2b0 */


void FUN_0151f2b0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_98;
  local_28 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x176] + 0x4f0));
  if ((iVar3 == 0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                        (*(longlong **)(param_1[0xfb] + 0x4f0)), iVar3 == 0)) {
    FUN_0082a6c0(param_1[0xf7],0);
    FUN_0082a6c0(param_1[0xf8],1);
    FUN_016fea90(0x106,0x1582);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x7ed) != '\0') {
    return;
  }
  cVar2 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_010e2d90(param_1);
  if (cVar2 == '\0') {
    uVar5 = FUN_0065b870(param_1);
    FUN_00f83670(uVar5,param_2);
    return;
  }
  if (PTR_DAT_02004010[0x7c6] != '\0') {
    cVar2 = FUN_004113d0(param_1[0x1d9],&PTR_FUN_01515cb0);
    if (cVar2 != '\0') {
      cVar2 = FUN_010dba30(*(undefined1 *)((longlong)param_1 + 0x7f9),6,&local_28);
      if (cVar2 != '\0') {
        bVar1 = *(byte *)((longlong)param_1 + 0x7f9);
        iVar3 = (int)param_1[0xfd];
        if (*(longlong *)(param_1[0x118] + 0x148 + (ulonglong)bVar1 * 0x20 + (longlong)iVar3 * 8) ==
            0) {
          local_78 = CONCAT31(local_78._1_3_,bVar1);
          local_70 = 6;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_30 = FUN_010e1810(&PTR_FUN_0150a9d8,
                                  CONCAT71((int7)(int3)((uint)iVar3 >> 8),1) & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_02004030,iVar3);
          *(longlong *)
           (param_1[0x118] + 0x148 + (ulonglong)*(byte *)((longlong)param_1 + 0x7f9) * 0x20 +
           (longlong)(int)param_1[0xfd] * 8) = local_30;
          iVar3 = FUN_007fd7d0(param_1);
          FUN_00806af0(local_30,iVar3 + -0x50);
          iVar3 = FUN_007fd800(param_1);
          FUN_00806b40(local_30,iVar3 + 0x32);
          FUN_008059a0(local_30);
          (**(code **)(*param_1 + 600))(param_1);
        }
        else {
          local_30 = FUN_004113f0(*(undefined8 *)
                                   (param_1[0x118] + 0x148 + (ulonglong)bVar1 * 0x20 +
                                   (longlong)iVar3 * 8),&PTR_FUN_0150a9d8);
        }
        if (*(char *)(local_30 + 0x7ed) == '\0') {
          iVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x90))((longlong *)param_1[0x1d9]);
          if (iVar3 == 0) {
            uVar5 = FUN_0065b870(local_30);
            local_78 = 1;
            FUN_00f832e0(uVar5,0x538,0,0);
            uVar5 = FUN_0065b870(param_1);
            FUN_00f83670(uVar5,param_2);
            return;
          }
          uVar5 = FUN_0065b870(local_30);
          local_78 = 1000;
          FUN_00f832e0(uVar5,0x538,0,0);
        }
      }
    }
  }
  FUN_010e4580(param_1,4);
  FUN_010e4520(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
  FUN_0151eb90(param_1);
  FUN_0151f130(param_1,1);
  local_1c = (**(code **)(*(longlong *)param_1[0x1d9] + 0x170))
                       ((longlong *)param_1[0x1d9],param_1 + 0x110);
  if (param_1[0x110] == 0) {
    FUN_0151de90(param_1);
  }
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,1);
  uVar4 = FUN_00e163f0(local_1c,(int)param_1[0x10f]);
  *(undefined4 *)(param_1 + 0x10f) = uVar4;
  if (local_1c == 1) {
    FUN_010e4210(param_1,2,1);
  }
  else if (local_1c == 2) {
    FUN_010e4210(param_1,4,1);
  }
  else if (local_1c == 3) {
    FUN_010e4210(param_1,3,1);
  }
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  FUN_0082a6c0(param_1[0xf7],0);
  FUN_0082a6c0(param_1[0xf8],1);
  FUN_010e4520(param_1,2);
  return;
}

