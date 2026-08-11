/* Ghidra address: 00897410 */
/* Ghidra symbol: FUN_00897410 */


void FUN_00897410(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                 undefined8 param_5,undefined2 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  local_40 = 0;
  puVar5 = local_28;
  FUN_008972b0(param_1,param_2,param_5,param_6,puVar5,local_38);
  uVar2 = (undefined4)((ulonglong)puVar5 >> 0x20);
  lVar3 = 0;
  if (*param_3 != 0) {
    lVar3 = *(longlong *)(*param_3 + -8);
  }
  FUN_00419260(&local_40,&DAT_0086e978,1,lVar3 + 0x28);
  FUN_00409a70(local_28,local_40,0x1c);
  FUN_00409a70(local_38,local_40 + 0x1c,0x1c);
  uVar4 = 0;
  if (*param_3 != 0) {
    uVar4 = *(ulonglong *)(*param_3 + -8);
  }
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,uVar4 & 0xffffffff);
  FUN_00874e90(uVar1,&local_40,0x38);
  FUN_0040d200(local_40 + 0x3c,3,0);
  *(undefined1 *)(local_40 + 0x3f) = 0x3a;
  uVar1 = 0;
  if (*param_3 != 0) {
    uVar1 = (undefined4)*(undefined8 *)(*param_3 + -8);
  }
  FUN_00874e50(*param_3,0,&local_40,0x40,CONCAT44(uVar2,uVar1));
  FUN_00874e80(0,&local_40,param_4 + 0x40);
  uVar2 = (**(code **)(*param_1 + 0x130))(param_1,local_40);
  uVar2 = FUN_00874ab0(uVar2);
  FUN_00874e80(uVar2,param_3,param_4);
  FUN_00419430(&local_40,&DAT_0086e978);
  return;
}

