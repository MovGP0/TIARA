/* Ghidra address: 01777c80 */
/* Ghidra symbol: FUN_01777c80 */


void FUN_01777c80(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))
            (*(longlong **)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0x8f8));
  FUN_015652a0(local_38,&local_50);
  FUN_00441640(&local_48,local_50);
  local_20 = (longlong *)FUN_01604950(local_48,L"*.tbl");
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_2c);
      (**(code **)(*local_28 + 0xd8))(local_28,local_40);
      FUN_00441920(&local_68,local_40);
      FUN_00414b50(&local_40,local_68);
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x78))(*(longlong **)(param_1 + 0xf8),local_40)
      ;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))(*(longlong **)(param_1 + 0xe8));
      FUN_0043f750(&local_70,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))(*(longlong **)(param_1 + 0xf0),local_70)
      ;
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x88))(*(longlong **)(param_1 + 0xe8),local_28)
      ;
      *(undefined1 *)(param_1 + 0x62) = 0;
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_50,3);
  return;
}

