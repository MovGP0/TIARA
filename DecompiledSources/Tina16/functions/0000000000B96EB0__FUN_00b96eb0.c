/* Ghidra address: 00b96eb0 */
/* Ghidra symbol: FUN_00b96eb0 */


undefined4 FUN_00b96eb0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar6;
  undefined4 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_40 = 0;
  local_48 = 0;
  local_68 = 0;
  if (param_3 == 1) {
    if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
      uVar5 = FUN_00809ba0(*(undefined8 *)PTR_DAT_02005950,0,0);
    }
    else {
      uVar5 = FUN_0065b870(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8));
      uVar5 = FUN_00809ba0(*(undefined8 *)PTR_DAT_02005950,uVar5,0);
    }
    thunk_FUN_03e49910(param_2,&local_38);
    iVar1 = FUN_00807790(uVar5);
    iVar2 = FUN_008077f0(uVar5);
    iVar3 = FUN_008077d0(uVar5);
    iVar4 = FUN_008077b0(uVar5);
    thunk_FUN_041cc6e2(param_2,0,iVar1 + (iVar2 - (local_30 - local_38)) / 2,
                       iVar3 + (iVar4 - (local_2c - local_34)) / 2,0,0,CONCAT44(uVar6,5));
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar5 = FUN_00416740(*(undefined8 *)(param_1 + 8));
      thunk_FUN_041b2403(param_2,0x467,1,uVar5);
    }
  }
  else if ((param_3 == 4) || (param_3 == 3)) {
    FUN_0041ddd0(&local_48,PTR_PTR_020055e8);
    local_50 = 10;
    local_58 = param_4;
    FUN_00442f70(&local_40,local_48,&local_58,0);
    FUN_0072d5c0(local_40,1,4,0,0xffffffff,0xffffffff,0);
    local_68 = 1;
  }
  FUN_00414560(&local_48,2);
  return local_68;
}

