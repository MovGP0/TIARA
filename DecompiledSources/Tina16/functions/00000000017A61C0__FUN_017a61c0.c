/* Ghidra address: 017a61c0 */
/* Ghidra symbol: FUN_017a61c0 */


void FUN_017a61c0(longlong param_1,undefined8 param_2,char param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  uVar3 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x6f0),param_5,param_6);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  *(undefined2 *)(param_1 + 2000) = 0;
  if ((param_3 == '\x01') && (*(longlong *)(param_1 + 0x7c8) != 0)) {
    lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0));
    if (*(longlong *)(param_1 + 0x7c8) == lVar4) {
      local_40[0] = FUN_00498310(param_5,param_6);
      uVar5 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6f0),local_40);
      local_30._4_4_ = (undefined4)(uVar5 >> 0x20);
      uVar2 = local_30._4_4_;
      local_30 = uVar5;
      (**(code **)(**(longlong **)(param_1 + 0x750) + 0xa8))
                (*(longlong **)(param_1 + 0x750),uVar5 & 0xffffffff,uVar2);
    }
  }
  if (((param_3 == '\0') && (*(longlong *)(param_1 + 0x7c8) != 0)) &&
     ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x7c8) + 0x18), iVar1 == 0x66 || (iVar1 == 0x65))))
  {
    *(undefined2 *)(param_1 + 2000) = param_4;
  }
  return;
}

