/* Ghidra address: 017745a0 */
/* Ghidra symbol: FUN_017745a0 */


void FUN_017745a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  char local_51;
  undefined8 *local_50;
  undefined8 local_48;
  int local_3c;
  int local_38 [2];
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28 [2];
  longlong *local_20;
  
  local_70 = auStack_98;
  local_78 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = *(undefined8 **)(param_1 + 0xf8);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = 4;
  lVar1 = (**(code **)*local_50)(local_50);
  if (0 < lVar1) {
    FUN_004b6dc0(local_50,0);
    FUN_004b84c0(local_50,local_2c,4);
    FUN_004b84c0(local_50,&local_30,4);
    FUN_004b84c0(local_50,local_28,4);
    local_3c = FUN_004b6da0(local_50);
  }
  local_51 = local_30 == 4;
  FUN_01773f60(param_1,0x4000);
  local_48 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  if (local_51 == '\0') {
    local_30 = 3;
    FUN_004b89e0(local_48,PTR_DAT_02005848,4);
    FUN_004b89e0(local_48,&local_30,4);
    local_28[0] = 3;
    FUN_004b89e0(local_48,local_28,4);
    FUN_004b6dc0(local_50,(longlong)local_3c);
    iVar2 = 2;
    do {
      FUN_004b84c0(local_50,local_38,4);
      FUN_004b89e0(local_48,local_38,4);
      FUN_004b8ba0(local_48,local_50,(longlong)local_38[0]);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00441920(&local_78,local_res10[0]);
    (**(code **)(*local_20 + 0x78))(local_20,local_78);
    FUN_01773e60(local_48,local_res10[0]);
    FUN_01b23250(local_48,local_20);
  }
  else {
    FUN_01774410(param_1,local_48,local_res10[0]);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0xf8) = local_48;
  FUN_004b6dc0(local_48,0);
  FUN_00410f20(local_20);
  FUN_00414480(&local_78);
  FUN_00414480(&local_60);
  FUN_00414480(local_res10);
  return;
}

