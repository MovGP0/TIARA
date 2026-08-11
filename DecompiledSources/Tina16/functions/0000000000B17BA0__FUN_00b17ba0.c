/* Ghidra address: 00b17ba0 */
/* Ghidra symbol: FUN_00b17ba0 */


longlong FUN_00b17ba0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res10 [3];
  undefined1 *puVar5;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar6;
  undefined8 local_d8;
  undefined1 local_d0 [200];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  local_d8 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_0040d200(local_d0,200,0);
  uVar3 = FUN_00414df0(local_res10);
  uVar1 = 0;
  if (local_res10[0] != 0) {
    uVar1 = *(undefined4 *)(local_res10[0] + -4);
  }
  puVar5 = local_d0;
  thunk_FUN_04139c29(0,1,uVar3,uVar1,puVar5,CONCAT44(uVar6,100));
  uVar3 = FUN_0041b800(&local_d8);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                    (*(longlong **)(param_1 + 0x10),local_d0,0x12,0,
                     (ulonglong)puVar5 & 0xffffffff00000000,uVar3);
  if (iVar2 != 0) {
    uVar3 = FUN_00b17000(&PTR_FUN_00b16d88,1,1);
    FUN_004134c0(uVar3);
  }
  lVar4 = FUN_00b17100(&DAT_00b15dc0,1);
  FUN_0041b840(lVar4 + 0x10,local_d8);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar4);
  FUN_0041b800(&local_d8);
  FUN_004144d0(local_res10);
  return lVar4;
}

