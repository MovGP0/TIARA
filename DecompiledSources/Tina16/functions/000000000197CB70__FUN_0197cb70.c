/* Ghidra address: 0197cb70 */
/* Ghidra symbol: FUN_0197cb70 */


void FUN_0197cb70(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_58 [48];
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    uVar2 = FUN_0040c770(param_5 * param_3);
    uVar3 = FUN_0040c770(param_6 * param_4);
    uVar4 = FUN_0040c770((*(double *)(param_1 + 0xa8) + param_5) * param_3);
    uVar5 = FUN_0040c770((*(double *)(param_1 + 0xb0) + param_6) * param_4);
    FUN_00498350(local_58,uVar2,uVar3,uVar4,uVar5);
    FUN_0197deb0(lVar1,param_2,local_58);
  }
  return;
}

