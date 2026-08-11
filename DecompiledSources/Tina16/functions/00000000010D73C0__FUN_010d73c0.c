/* Ghidra address: 010d73c0 */
/* Ghidra symbol: FUN_010d73c0 */


void FUN_010d73c0(longlong param_1,longlong *param_2,ulonglong *param_3,undefined1 *param_4)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar7;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_78 = *param_3;
  local_70 = param_3[1];
  *param_4 = 0;
  FUN_010d7290(param_1,&local_80,&local_88,param_4);
  dVar1 = *(double *)(param_1 + 0x640);
  uVar3 = FUN_0040c850(local_88 - local_80);
  uVar4 = FUN_0040c850(dVar1 - 0.0);
  cVar2 = FUN_017e28e0(param_1);
  if (cVar2 == '\0') {
    FUN_005fd6d0(param_2[0xf],1);
    FUN_005fdab0(param_2[0x10],0xffffff);
    (**(code **)(*param_2 + 0x108))
              (param_2,local_78 & 0xffffffff,local_78._4_4_,local_70 & 0xffffffff,
               CONCAT44(uVar5,local_70._4_4_),CONCAT44(uVar6,10),CONCAT44(uVar7,10));
    FUN_010d6cf0(param_1,param_2,&local_78,local_80,local_88,0,dVar1,uVar3,uVar4,param_4);
  }
  else {
    *param_4 = 1;
  }
  return;
}

