/* Ghidra address: 00af3740 */
/* Ghidra symbol: FUN_00af3740 */


undefined8 FUN_00af3740(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (((param_3 < 0) || (param_4 < 0)) || (param_4 <= param_3)) {
    FUN_00414480(param_2);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x8b0);
    uVar1 = *(undefined4 *)(lVar3 + 0x9c);
    uVar2 = *(undefined4 *)(lVar3 + 0xa0);
    uVar4 = FUN_00afe5d0(param_1,param_3,0);
    *(undefined4 *)(lVar3 + 0x9c) = uVar4;
    uVar4 = FUN_00afe5d0(param_1,param_4,0);
    *(undefined4 *)(lVar3 + 0xa0) = uVar4;
    FUN_00afcf10(param_1,param_2);
    FUN_00afe5f0(param_1,*(undefined4 *)(lVar3 + 0x9c),param_1 + 0x8f8,param_1 + 0x8fc);
    *(int *)(param_1 + 0x8fc) =
         *(int *)(param_1 + 0x8fc) - *(int *)(*(longlong *)(param_1 + 0x758) + 0x494);
    *(undefined4 *)(lVar3 + 0x9c) = uVar1;
    *(undefined4 *)(lVar3 + 0xa0) = uVar2;
  }
  return param_2;
}

