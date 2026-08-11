/* Ghidra address: 00c795b0 */
/* Ghidra symbol: FUN_00c795b0 */


undefined8 FUN_00c795b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar6;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_50;
  
  local_90[0] = 0;
  local_78 = 0;
  local_80 = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_00c79790(param_1,&local_80);
    (**(code **)(**(longlong **)(param_1 + 0x398) + 0x90))(*(longlong **)(param_1 + 0x398));
    uVar4 = FUN_00c7a6e0(param_1);
    iVar2 = thunk_FUN_041b2403(uVar4,0x1032,0,0);
    if (0 < iVar2) {
      FUN_004169f0(&local_78,0x400);
    }
    uVar4 = FUN_00c7a6e0(param_1);
    uVar3 = FUN_00611d10(uVar4,0xffffffff,2);
    if (-1 < (int)uVar3) {
      do {
        uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
        local_70 = 1;
        local_50 = 0x400;
        local_68 = 0;
        local_6c = uVar3;
        uVar4 = FUN_00c7a6e0(param_1);
        uVar5 = FUN_00416740(local_78);
        FUN_00611e80(uVar4,uVar3,0,uVar5,CONCAT44(uVar6,0x400));
        in_stack_ffffffffffffff48 = local_78;
        FUN_00416cd0(local_90,3,local_80,&LAB_00c79788,local_78);
        cVar1 = FUN_00b96de0(local_90[0]);
        if (cVar1 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x398) + 0x78))
                    (*(longlong **)(param_1 + 0x398),local_78);
        }
        uVar4 = FUN_00c7a6e0(param_1);
        uVar3 = FUN_00611d10(uVar4,uVar3);
      } while (uVar3 < 0x80000000);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x398);
  FUN_00414480(local_90);
  FUN_00414560(&local_80,2);
  return uVar4;
}

