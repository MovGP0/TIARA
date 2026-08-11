/* Ghidra address: 00a3ad00 */
/* Ghidra symbol: FUN_00a3ad00 */


void FUN_00a3ad00(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffff98;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_00a33e20(param_1[0x2c],0);
    lVar4 = FUN_004113f0(uVar3,&PTR_FUN_00a30a98);
    cVar1 = FUN_00a3c2e0(param_1);
    if (cVar1 == '\x01') {
      uVar3 = FUN_005ffa40(param_2);
      uVar2 = FUN_00a3c5c0(param_1);
      uVar2 = FUN_005fbf20(uVar2);
      FUN_00a329f0(uVar3,*(undefined8 *)(lVar4 + 0x478),lVar4 + 0x44,lVar4 + 0x44,param_3,uVar2);
    }
    else if (cVar1 == '\x02') {
      uVar3 = FUN_005ffa40(param_2);
      FUN_00a39f60(param_1,uVar3,param_3);
    }
    else {
      uVar3 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar3,3);
      uVar3 = FUN_005ffa40(param_2);
      thunk_FUN_03cc01a5(uVar3,*param_3,param_3[1],param_3[2] - *param_3,
                         CONCAT44(uVar2,param_3[3] - param_3[1]),0,0,*(undefined4 *)(lVar4 + 0x488),
                         *(undefined4 *)(lVar4 + 0x48c),*(undefined8 *)(lVar4 + 0x478),lVar4 + 0x44,
                         0,0xcc0020);
    }
  }
  return;
}

